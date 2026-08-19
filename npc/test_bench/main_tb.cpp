#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <nvboard.h>
#include "Vtop.h"
#include "verilated.h"
#include "verilated_fst_c.h"

Vtop* top;

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

#define WAVE_TRACE 1

int main(int argc, char** argv) {
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);

  top = new Vtop{contextp};

  printf("Hello, ysyx!\n");

  reset(10);
  
  // 开启波形记录
  #if WAVE_TRACE
    Verilated::traceEverOn(true);
    
    VerilatedFstC* tfp = new VerilatedFstC;
    top->trace(tfp, 99);       // 99 表示记录 99 层层次
    tfp->open("wave.fst");     // 输出 FST 文件
  #endif

  int num1 = -8, num2 = -8, res, n2_no_cin, cin;
  int rd_res, rd_f_zero, rd_f_of, rd_f_carry;
  int f_zero, f_of, f_carry;
  int op_code = 0;
  int err_cnt = 0;
  
  int cnt_loop = 0;
  while (1 && err_cnt < 20) {
    top->sw = ((num1 & 0xf) << 4) | (num2 & 0xf);
    top->btn = 0;

    single_cycle();

    #if WAVE_TRACE
      tfp->dump(contextp->time()); // 把当前时刻写入波形
      contextp->timeInc(1);        // 仿真时间前进 1
    #endif

    //? caculate
    cin = (op_code != 0);
    n2_no_cin = cin ? (~num2 & 0xf) : (num2);
    res = num1 + num2;
    f_zero = (res != 0);
    f_of = (num1 & 0x8 & n2_no_cin) & (res & 0x8 != num1 & 0x8);
    f_carry = (res > 7) | (res < -8);

    rd_f_zero = (top->btn & 0x40 != 0);
    rd_f_of = (top->btn & 0x20 != 0);
    rd_f_carry = (top->btn & 0x10 != 0);
    rd_res = (top->btn & 0xf);

    //? check
    #define ERR_MAX_TRACE 20
    if (err_cnt < 20){
      if (rd_f_zero != f_zero){
        printf("Zero Error at %d + %d, output %d, exactual %d\r\n", num1, num2, f_zero, rd_f_zero);
        err_cnt ++;
      }
      if (rd_f_of != f_of){
        printf("Overflow Error at %d + %d, output %d, exactual %d\r\n", num1, num2, f_of, rd_f_of);
        err_cnt ++;
      }
      if (rd_f_carry != f_carry){
        printf("Carry Error at %d + %d, output %d, exactual %d\r\n", num1, num2, f_carry, rd_f_carry);
        err_cnt ++;
      }
      if (rd_res != res){
        printf("Result Error at %d + %d, output %d, exactual %d\r\n", num1, num2, rd_res, res);
        err_cnt ++;
      }
    }


    if (err_cnt < ERR_MAX_TRACE)
    if (num2 == 8){
      if (num1 == 8){
        num1 = -7;

        printf("Fin Check, ERR Total: %d\r\n", err_cnt);

        err_cnt = 10000;
      }else 
        num1 += 1; 
      num2 = -7;
    }
    else num2 += 1;
    
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


