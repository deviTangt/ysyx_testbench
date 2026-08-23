#include "main.h"

Vtop* top;



#define WAVE_TRACE 0

static void single_cycle();
static void reset(int n);

extern "C" int pmem_read(int raddr);
extern "C" void pmem_write(int waddr, int wdata, char wmask);

#define KB * 1024
#define MB * 1024 * 1024
 //? 1K * 4B 
#define PC_ROM_SIZE ( 4 KB )
uint32_t PC_ROM[PC_ROM_SIZE];
#define PC_START_POS 0x80000000

//? 128MB = 32M * 4B 
#define MEM_SIZE ( 128 MB ) 
int32_t MEM_RAM[MEM_SIZE];

const char *rom_load_path = "../am-kernels/tests/cpu-tests/build/dummy-minirv-npc.bin"; // "_res/test_diag.hex";

//! main
int main(int argc, char** argv) {
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);

  top = new Vtop{contextp};

  printf("\r\nHello, ysyx!\r\n");
  // nvboard_bind_all_pins(top);
  // nvboard_init(0);

  reset(10);

  //? read pc instructions from file(s)
  //int ret = load_pc_rom_plain(rom_load_path, PC_ROM, PC_ROM_SIZE);
  int ret = load_pc_rom_bin(rom_load_path, PC_ROM, PC_ROM_SIZE);

  if(ret == 0) printf("load ok, PC_ROM[0] = 0x%08X, PC_ROM[1] = 0x%08X\n", PC_ROM[0], PC_ROM[1]);
  else if (ret == -1) printf("load %s err!!!!!\r\n", rom_load_path);
  else                printf("idx >= ROM_SIZE out of range%d err!!!!!\r\n", PC_ROM_SIZE);
  
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
    top->instruct_i = PC_ROM[(top->PC_N_o - PC_START_POS) & 0x000003ff];
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

//? EXTERN "C" Read and Write
extern "C" int pmem_read(int raddr) {
  // 总是读取地址为`raddr & ~0x3u`的4字节返回
  uint32_t addr_n = ((raddr & 0x3u) >> 2) & 0x01ffffff;
  return MEM_RAM[addr_n];
}
extern "C" void pmem_write(int waddr, int wdata, char wmask) {
  // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  uint32_t addr_n = ((waddr & 0x3u) >> 2) & 0x01ffffff;
  int32_t orgin_val = MEM_RAM[addr_n];
  MEM_RAM[addr_n] = (orgin_val & ~wmask) | wdata;
}

