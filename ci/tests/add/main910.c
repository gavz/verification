#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov r0,#0"); 
  __asm volatile("adds r0,r1,#0xab"); 
  __asm volatile("mov R0,#0"); 
  __asm volatile("add R0,R0,#0xc1"); 
  __asm volatile("lsl R0,R0,#8"); 
  __asm volatile("add R0,R0,#0x48"); 
  __asm volatile("lsl R0,R0,#8"); 
  __asm volatile("add R0,R0,#0x26"); 
  __asm volatile("lsl R0,R0,#8"); 
  __asm volatile("add R0,R0,#0xb8"); 
  __asm volatile("ADD R3, R0, #0x83");
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
