#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov R10,#0x3f"); 
  __asm volatile("LSR R3, R10, 1");
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
