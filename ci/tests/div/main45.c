#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov r0,#0"); 
  __asm volatile("adds r0,r0,#0xab"); 
  __asm volatile("mov r0,#5"); 
  __asm volatile("lsrs r0,#1"); 
  __asm volatile("mov R5,#0"); 
  __asm volatile("add R5,R5,#0x97"); 
  __asm volatile("lsl R5,R5,#8"); 
  __asm volatile("add R5,R5,#0x1c"); 
  __asm volatile("lsl R5,R5,#8"); 
  __asm volatile("add R5,R5,#0x70"); 
  __asm volatile("lsl R5,R5,#8"); 
  __asm volatile("add R5,R5,#0x2e"); 
  __asm volatile("mov R10,#0"); 
  __asm volatile("add R10,R10,#0xda"); 
  __asm volatile("lsl R10,R10,#8"); 
  __asm volatile("add R10,R10,#0x90"); 
  __asm volatile("lsl R10,R10,#8"); 
  __asm volatile("add R10,R10,#0xf5"); 
  __asm volatile("lsl R10,R10,#8"); 
  __asm volatile("add R10,R10,#0x35"); 
  __asm volatile("UDIV R10, R5, R10");
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
