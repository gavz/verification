#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov R7,#0xe1"); 
  __asm volatile("mov R1,#0x06"); 
  __asm volatile("ASR R7, R7, R1");
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}