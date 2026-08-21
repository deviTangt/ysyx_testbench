#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <nvboard.h>
#include "Vtop.h"
#include "verilated.h"
#include "verilated_fst_c.h"

Vtop* top;
void nvboard_bind_all_pins(Vtop* top);


static void single_cycle();
static void reset(int n);
int load_pc_rom_plain(const char *filepath);

#define WAVE_TRACE 0

#define ROM_SIZE 65536
uint32_t PC_ROM[ROM_SIZE];

#define RAM_SIZE 2^24
int32_t MEM_RAM[RAM_SIZE];

extern "C" int pmem_read(int raddr) {
  // 总是读取地址为`raddr & ~0x3u`的4字节返回
  uint32_t addr_n = ((raddr & 0x3u) >> 2) & 0xffffff;
  return MEM_RAM[addr_n];
}
extern "C" void pmem_write(int waddr, int wdata, char wmask) {
  // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  uint32_t addr_n = ((waddr & 0x3u) >> 2) & 0xffffff;
  int32_t orgin_val = MEM_RAM[addr_n];
  MEM_RAM[addr_n] = (orgin_val & ~wmask) | wdata;
}

int main(int argc, char** argv) {
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);

  top = new Vtop{contextp};

  printf("\r\nHello, ysyx!\r\n");
  // nvboard_bind_all_pins(top);
  // nvboard_init(0);

  reset(10);

  int ret = load_pc_rom_plain("resource/test_diag.hex");
  if(ret == 0)
  {
      printf("load ok, PC_ROM[0] = 0x%08X, PC_ROM[1] = 0x%08X\n", PC_ROM[0], PC_ROM[1]);
  }
  
  // 开启波形记录
  #if WAVE_TRACE
    Verilated::traceEverOn(true);
    
    VerilatedFstC* tfp = new VerilatedFstC;
    top->trace(tfp, 99);       // 99 表示记录 99 层层次
    tfp->open("wave.fst");     // 输出 FST 文件
  #endif
  
  int cnt_loop = 0;
  while (1) {
    // nvboard_update();
    top->instruct_i = PC_ROM[top->PC_N_o];
    single_cycle();

    #if WAVE_TRACE
      tfp->dump(contextp->time()); // 把当前时刻写入波形
      contextp->timeInc(1);        // 仿真时间前进 1
    #endif

    if (top->uart_tx){
      printf("\r\nSim Finish...\r\n");
      break;
    }
    
    cnt_loop ++;
  }

  #if WAVE_TRACE
    tfp->close();
    delete tfp;
  #endif

  delete top;
  delete contextp;
  return 0;
}

/**
 * @brief 读取纯hex文本：每行1个32bit十六进制数，无地址
 * 示例文件内容：
 * 00001137
 * 00010113
 * 0ff00313
 * 返回：0成功，-1打开失败，-2超出ROM大小
 */
int load_pc_rom_plain(const char *filepath)
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

static void single_cycle() {
  top->clk = 0; top->eval();
  top->clk = 1; top->eval();
}

static void reset(int n) {
  top->rst = 1;
  while (n > 0) {
    single_cycle();
    n --;
  }
  top->rst = 0;
}
