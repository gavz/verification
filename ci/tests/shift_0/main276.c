#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov R12,#0x56"); 
  __asm volatile("mov R11,#0x0b"); 
  __asm volatile("LSR R0, R12, R11");
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
