#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov R3,#0xad"); 
  __asm volatile("mov R9,#0x34"); 
  __asm volatile("ADC R7, R3, R9");
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
