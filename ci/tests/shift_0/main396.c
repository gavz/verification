#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov R10,#0x15"); 
  __asm volatile("mov R4,#0x1c"); 
  __asm volatile("LSR R6, R10, R4");
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
