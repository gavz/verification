#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov r0,#0"); 
  __asm volatile("adds r0,r0,#0xab"); 
  __asm volatile("mov r0,#4"); 
  __asm volatile("lsrs r0,#1"); 
  __asm volatile("mov R5,#0"); 
  __asm volatile("add R5,R5,#0xb9"); 
  __asm volatile("lsl R5,R5,#8"); 
  __asm volatile("add R5,R5,#0x84"); 
  __asm volatile("lsl R5,R5,#8"); 
  __asm volatile("add R5,R5,#0xdb"); 
  __asm volatile("lsl R5,R5,#8"); 
  __asm volatile("add R5,R5,#0xe3"); 
  __asm volatile("SXTH R8, R5, ror #8");
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
