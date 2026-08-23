#include "__HARDWARE_CONFIG__.h"
#if __HARDWARE_CONFIG__READF2MEM_ENABLE__	// begin of __HARDWARE_CONFIG__READF2MEM_ENABLE__
//*******************************// include _h files    //************************************//
#include "readf2mem.h"

//*******************************// define parameters   //************************************//
//*******************************// parameters          //************************************//
//*******************************// define function     //************************************//
/**
 * @brief 读取纯hex文本：每行1个32bit十六进制数，无地址
 * 示例文件内容：
 * 00001137
 * 00010113
 * 0ff00313
 * 返回：0成功，-1打开失败，-2超出ROM大小
 */
int load_pc_rom_plain(const char *filepath, uint32_t *PC_ROM,  uint32_t ROM_SIZE)
{
    FILE *fp = fopen(filepath, "r");
    if (!fp)
    {
        perror("open hex file fail");
        return -1;
    }

    memset(PC_ROM, 0, sizeof(PC_ROM));

    char line[128];
    size_t idx = 0U;
    while (fgets(line, sizeof(line), fp) != NULL)
    {
        uint32_t word;
        /* 解析一行一个十六进制，自动跳过空行、换行空格 */
        if (sscanf(line, "%x", &word) == 1)
        {
            if (idx >= ROM_SIZE)
            {
                fclose(fp);
                return -2;
            }
            PC_ROM[idx] = word;
            idx++;
        }
    }

    fclose(fp);
    return 0;
}

static int base64_decode(const char *in, uint8_t *out, size_t out_max, size_t *out_len)
{
    static char b64tab[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int idx[4];
    size_t i = 0, j = 0;
    *out_len = 0;

    while (in[i] != '\0')
    {
        if (isspace((unsigned char)in[i])) { i++; continue; }
        if (in[i] == '=') break;

        for (int n = 0; n < 4; n++)
        {
            if (in[i] == '=') { idx[n] = -1; }
            else
            {
                char *p = strchr(b64tab, in[i]);
                if (!p) return -1;
                idx[n] = p - b64tab;
            }
            i++;
        }

        uint32_t val = ((idx[0] & 0x3f) << 18) | ((idx[1] & 0x3f) << 12) | ((idx[2] & 0x3f) << 6) | (idx[3] & 0x3f);
        uint8_t tmp[3];
        tmp[0] = (val >> 16) & 0xff;
        tmp[1] = (val >> 8) & 0xff;
        tmp[2] = val & 0xff;

        int bytes = 3;
        if (idx[2] == -1) bytes = 1;
        else if (idx[3] == -1) bytes = 2;

        for (int k = 0; k < bytes; k++)
        {
            if (j >= out_max) return -1;
            out[j++] = tmp[k];
        }
    }
    *out_len = j;
    return 0;
}

int load_pc_rom_base64(const char *filepath, uint32_t *PC_ROM, uint32_t ROM_SIZE)
{
    FILE *fp = fopen(filepath, "r");
    if (!fp)
    {
        perror("open base64 file fail");
        return -1;
    }

    // 指针形式：必须手动计算总字节
    memset(PC_ROM, 0, ROM_SIZE * sizeof(uint32_t));

    // 读取全部base64文本
    char b64_buf[256 * 1024];
    size_t b64_len = fread(b64_buf, 1, sizeof(b64_buf)-1, fp);
    b64_buf[b64_len] = '\0';
    fclose(fp);

    size_t raw_max = (size_t)ROM_SIZE * 4U;
    uint8_t *raw_buf = ( uint8_t *)malloc(raw_max);
    if (!raw_buf) return -2;

    size_t raw_len;
    int ret = base64_decode(b64_buf, raw_buf, raw_max, &raw_len);
    if (ret != 0)
    {
        free(raw_buf);
        return -2;
    }

    if (raw_len > raw_max)
    {
        free(raw_buf);
        return -3;
    }

    // 每4字节小端拼成 uint32_t
    for (size_t word_idx = 0; word_idx < ROM_SIZE; word_idx++)
    {
        size_t byte_off = word_idx * 4U;
        if (byte_off + 3 >= raw_len) break;

        uint32_t inst = 0;
        inst |= ((uint32_t)raw_buf[byte_off + 0]) << 0;
        inst |= ((uint32_t)raw_buf[byte_off + 1]) << 8;
        inst |= ((uint32_t)raw_buf[byte_off + 2]) << 16;
        inst |= ((uint32_t)raw_buf[byte_off + 3]) << 24;
        PC_ROM[word_idx] = inst;
    }

    free(raw_buf);
    return 0;
}

int load_pc_rom_bin(const char *filepath, uint32_t *PC_ROM, uint32_t ROM_SIZE)
{
    FILE *fp = fopen(filepath, "rb");
    if (!fp)
    {
        perror("open bin file fail");
        return -1;
    }

    memset(PC_ROM, 0, ROM_SIZE * sizeof(uint32_t));

    uint8_t tmp[4];
    size_t idx = 0U;
    while (fread(tmp, 1, 4, fp) == 4 && idx < ROM_SIZE)
    {
        PC_ROM[idx] = (uint32_t)tmp[0] | ((uint32_t)tmp[1] << 8) | ((uint32_t)tmp[2] << 16) | ((uint32_t)tmp[3] << 24);
        idx++;
    }
    fclose(fp);
    return 0;
}


//*******************************// end_c               //************************************//
#endif	// end of __HARDWARE_CONFIG__READF2MEM_ENABLE__
