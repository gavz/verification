#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov r0,#0"); 
  __asm volatile("adds r0,r0,#0xab"); 
  __asm volatile("mov r0,#4"); 
  __asm volatile("lsrs r0,#1"); 
  __asm volatile("mov R4,#0"); 
  __asm volatile("add R4,R4,#0x24"); 
  __asm volatile("lsl R4,R4,#8"); 
  __asm volatile("add R4,R4,#0xdb"); 
  __asm volatile("lsl R4,R4,#8"); 
  __asm volatile("add R4,R4,#0xac"); 
  __asm volatile("lsl R4,R4,#8"); 
  __asm volatile("add R4,R4,#0x95"); 
  __asm volatile("mov R8,#0"); 
  __asm volatile("add R8,R8,#0xd8"); 
  __asm volatile("lsl R8,R8,#8"); 
  __asm volatile("add R8,R8,#0x36"); 
  __asm volatile("lsl R8,R8,#8"); 
  __asm volatile("add R8,R8,#0xba"); 
  __asm volatile("lsl R8,R8,#8"); 
  __asm volatile("add R8,R8,#0x34"); 
  __asm volatile("UDIV R7, R4, R8");
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
