#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
  printf("Hello, ysyx!\n");
  
  int cnt_loop = 0;
  while (cnt_loop < 20) {
    int a = rand() & 1;
    int b = rand() & 1;
    top->a = a;
    top->b = b;
    top->eval();
    printf("a = %d, b = %d, f = %d\n", a, b, top->f);
    assert(top->f == (a ^ b));
    
    cnt_loop ++;
  }

  return 0;
}
