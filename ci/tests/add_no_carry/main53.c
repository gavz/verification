#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov R11,#0xd4"); 
  __asm volatile("mov R0,#0xcd"); 
  __asm volatile("ADDS R6, R11, R0");
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
