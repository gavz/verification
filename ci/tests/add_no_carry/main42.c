#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov R2,#0x06"); 
  __asm volatile("ADDS R10, R2, #0xf1");
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
