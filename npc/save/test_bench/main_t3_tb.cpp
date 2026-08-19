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

  printf("\r\nHello, ysyx! TB\r\n");

  reset(10);
  
  // 开启波形记录
  #if WAVE_TRACE
    Verilated::traceEverOn(true);
    
    VerilatedFstC* tfp = new VerilatedFstC;
    top->trace(tfp, 99);       // 99 表示记录 99 层层次
    tfp->open("wave.fst");     // 输出 FST 文件
  #endif

  #define IN_MAX 7
  #define IN_MIN -8
  int num1 = IN_MIN, num2 = IN_MIN, out_val, res, n2_no_cin, cin, unum1, unum2;
  int rd_res, rd_f_zero, rd_f_of, rd_f_carry;
  int f_zero, f_of, f_carry;
  uint8_t op_code = 0 ;
  int err_cnt = 0;

  for (uint8_t i = 0;i < op_code;i ++){
    top->btn = 0x00;
    single_cycle();
    top->btn = 0x10;
    single_cycle();
    top->btn = 0x00;
    single_cycle();
    single_cycle();
  }
  
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
    unum1 = (uint8_t)num1 & 0xf; 
    if (op_code == 0)
      unum2 = (uint8_t)num2 & 0xf; 
    else
      unum2 = num2 ? ((uint8_t)-num2) & 0xf : IN_MAX - IN_MIN + 1; 

    out_val = num1 + n2_no_cin + cin;
    switch(op_code){
      case 0: res = (num1 + n2_no_cin + cin) & 0xf; 
              break;
      case 1: res = (num1 + n2_no_cin + cin) & 0xf; 
              break;
      case 2: res = (~num1) & 0xf; 
              break;
      case 3: res = (num1 & num2) & 0xf; 
              break;
      case 4: res = (num1 | num2) & 0xf; 
              break;
      case 5: res = (num1 ^ num2) & 0xf; 
              break;
      case 6: res = (num1 < num2) & 0xf; 
              break;
      case 7: res = (num1 == num2) & 0xf; 
              break;
      default: res = (num1 + n2_no_cin + cin) & 0xf; 
              break;
    }
    f_zero = (res != 0);
    f_of = ((num1 & 0x8) == (n2_no_cin & 0x8)) && ((res & 0x8) != (num1 & 0x8));
    f_carry = (unum1 + unum2 > IN_MAX - IN_MIN);

    rd_f_zero = ((top->ledr & 0x40) == 0);
    rd_f_of = ((top->ledr & 0x20) != 0);
    rd_f_carry = ((top->ledr & 0x10) != 0);
    rd_res = (top->ledr & 0xf);

    //? check
    #define ERR_MAX_TRACE 8
    if (err_cnt < ERR_MAX_TRACE){
      if (rd_f_zero != f_zero || (op_code < 2 && (rd_f_of != f_of || rd_f_carry != f_carry)) || rd_res != res){
        printf("--------------------------\r\n");
        printf("Error[%d] at %d + %d:  ldr:%02x\r\n", err_cnt, num1, num2, top->ledr & 0xff);
        if (rd_f_zero != f_zero){
          printf("Zero Error output %d, exactual %d\r\n", rd_f_zero, f_zero);
        }
        if (op_code < 2){
          if (rd_f_of != f_of){
            printf("Overflow Error output %d, exactual %d\r\n", rd_f_of, f_of);
          }
          if (rd_f_carry != f_carry){
            printf("Carry Error output %d, exactual %d\r\n", rd_f_carry, f_carry);
          }
        }
        if (rd_res != res){
          printf("Result Error output %d, exactual %d\r\n", rd_res, res);
        }
        err_cnt += 1;
      }
    }


    if (err_cnt < ERR_MAX_TRACE){
      if (num2 == IN_MAX){
        if (num1 == IN_MAX){
          num1 = IN_MIN;

          printf("Fin Check, ERR Total: %d\r\n", err_cnt);

          err_cnt = 10000;
        }else 
          num1 += 1; 
        num2 = IN_MIN;
      }
      else num2 += 1;
    }
    else{
      printf("Fin Check, ERR Total: %d\r\n", err_cnt);

      err_cnt = 10000;
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


