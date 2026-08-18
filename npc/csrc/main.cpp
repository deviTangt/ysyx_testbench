#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <nvboard.h>
#include "Vtop.h"
#include "verilated.h"
#include "verilated_fst_c.h"

Vtop* top;
void nvboard_bind_all_pins(Vtop* top);

static void single_cycle() {
  top->clk = 0; top->eval();
  top->clk = 1; top->eval();
}

static void reset(int n) {
  top->rst = 1;
  while (n -- > 0) single_cycle();
  top->rst = 0;
}

int main(int argc, char** argv) {
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);

  top = new Vtop{contextp};

  printf("Hello, ysyx!\n");
  nvboard_bind_all_pins(top);
  nvboard_init(0);

  reset(10);
  
  // 开启波形记录
  Verilated::traceEverOn(true);
  
  VerilatedFstC* tfp = new VerilatedFstC;
  top->trace(tfp, 99);       // 99 表示记录 99 层层次
  tfp->open("wave.fst");     // 输出 FST 文件
  
  int cnt_loop = 0;
  while (1) {
    nvboard_update();
    single_cycle();

    tfp->dump(contextp->time()); // 把当前时刻写入波形
    contextp->timeInc(1);        // 仿真时间前进 1
    
    cnt_loop ++;
  }

  tfp->close();
  delete tfp;
  delete top;
  delete contextp;
  return 0;
}


