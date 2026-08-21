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

//*******************************// end_c               //************************************//
#endif	// end of __HARDWARE_CONFIG__READF2MEM_ENABLE__
