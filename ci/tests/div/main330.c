#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov r0,#0"); 
  __asm volatile("adds r0,r0,#0xab"); 
  __asm volatile("mov r0,#5"); 
  __asm volatile("lsrs r0,#1"); 
  __asm volatile("mov R12,#0"); 
  __asm volatile("add R12,R12,#0x03"); 
  __asm volatile("lsl R12,R12,#8"); 
  __asm volatile("add R12,R12,#0x72"); 
  __asm volatile("lsl R12,R12,#8"); 
  __asm volatile("add R12,R12,#0x9e"); 
  __asm volatile("lsl R12,R12,#8"); 
  __asm volatile("add R12,R12,#0x34"); 
  __asm volatile("mov R2,#0"); 
  __asm volatile("add R2,R2,#0xee"); 
  __asm volatile("lsl R2,R2,#8"); 
  __asm volatile("add R2,R2,#0x28"); 
  __asm volatile("lsl R2,R2,#8"); 
  __asm volatile("add R2,R2,#0x3b"); 
  __asm volatile("lsl R2,R2,#8"); 
  __asm volatile("add R2,R2,#0xb8"); 
  __asm volatile("UDIV R9, R12, R2");
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
