#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov r0,#0"); 
  __asm volatile("adds r0,r1,#0xab"); 
  __asm volatile("mov R6,#0"); 
  __asm volatile("add R6,R6,#0x59"); 
  __asm volatile("lsl R6,R6,#8"); 
  __asm volatile("add R6,R6,#0x85"); 
  __asm volatile("lsl R6,R6,#8"); 
  __asm volatile("add R6,R6,#0x3c"); 
  __asm volatile("lsl R6,R6,#8"); 
  __asm volatile("add R6,R6,#0x7c"); 
  __asm volatile("RORS R5, R6, 30");
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
