#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov R12,#0x12"); 
  __asm volatile("mov R0,#0x12"); 
  __asm volatile("LSR R5, R12, R0");
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
