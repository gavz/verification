#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov r0,#0"); 
  __asm volatile("adds r0,r0,#0xab"); 
  __asm volatile("mov r0,#4"); 
  __asm volatile("lsrs r0,#1"); 
  __asm volatile("mov R6,#0"); 
  __asm volatile("add R6,R6,#0xc9"); 
  __asm volatile("lsl R6,R6,#8"); 
  __asm volatile("add R6,R6,#0x0f"); 
  __asm volatile("lsl R6,R6,#8"); 
  __asm volatile("add R6,R6,#0x3f"); 
  __asm volatile("lsl R6,R6,#8"); 
  __asm volatile("add R6,R6,#0x1a"); 
  __asm volatile("SBC R12, R6, #0xd1");
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
