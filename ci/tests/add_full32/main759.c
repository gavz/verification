#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov r0,#0"); 
  __asm volatile("adds r0,r0,#0xab"); 
  __asm volatile("mov r0,#5"); 
  __asm volatile("lsrs r0,#1"); 
  __asm volatile("mov R9,#0"); 
  __asm volatile("add R9,R9,#0xcb"); 
  __asm volatile("lsl R9,R9,#8"); 
  __asm volatile("add R9,R9,#0xa1"); 
  __asm volatile("lsl R9,R9,#8"); 
  __asm volatile("add R9,R9,#0x52"); 
  __asm volatile("lsl R9,R9,#8"); 
  __asm volatile("add R9,R9,#0x7d"); 
  __asm volatile("mov R0,#0"); 
  __asm volatile("add R0,R0,#0x28"); 
  __asm volatile("lsl R0,R0,#8"); 
  __asm volatile("add R0,R0,#0x5a"); 
  __asm volatile("lsl R0,R0,#8"); 
  __asm volatile("add R0,R0,#0xd0"); 
  __asm volatile("lsl R0,R0,#8"); 
  __asm volatile("add R0,R0,#0x1a"); 
  __asm volatile("ADDS R7, R9, R0");
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
