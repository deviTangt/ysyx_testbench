#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include "verilated.h"
#include "verilated_fst_c.h"

int main(int argc, char** argv) {

  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  Vtop* top = new Vtop{contextp};
  
  printf("Hello, ysyx!\n");
  
  // 开启波形记录
  Verilated::traceEverOn(true);
  
  VerilatedFstC* tfp = new VerilatedFstC;
  top->trace(tfp, 99);       // 99 表示记录 99 层层次
  tfp->open("wave.fst");     // 输出 FST 文件
  
  int cnt_loop = 0;
  while (!contextp->gotFinish() && cnt_loop < 20) {
    int a = rand() & 1;
    int b = rand() & 1;
    top->a = a;
    top->b = b;
    top->eval();
    printf("a = %d, b = %d, f = %d\n", a, b, top->f);
    assert(top->f == (a ^ b));
    
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
