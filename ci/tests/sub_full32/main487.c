#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov r0,#0"); 
  __asm volatile("adds r0,r0,#0xab"); 
  __asm volatile("mov r0,#5"); 
  __asm volatile("lsrs r0,#1"); 
  __asm volatile("mov R5,#0"); 
  __asm volatile("add R5,R5,#0xa1"); 
  __asm volatile("lsl R5,R5,#8"); 
  __asm volatile("add R5,R5,#0xfe"); 
  __asm volatile("lsl R5,R5,#8"); 
  __asm volatile("add R5,R5,#0xe9"); 
  __asm volatile("lsl R5,R5,#8"); 
  __asm volatile("add R5,R5,#0xcf"); 
  __asm volatile("mov R8,#0"); 
  __asm volatile("add R8,R8,#0xcb"); 
  __asm volatile("lsl R8,R8,#8"); 
  __asm volatile("add R8,R8,#0x11"); 
  __asm volatile("lsl R8,R8,#8"); 
  __asm volatile("add R8,R8,#0x0e"); 
  __asm volatile("lsl R8,R8,#8"); 
  __asm volatile("add R8,R8,#0xf8"); 
  __asm volatile("SBC R11, R5, R8");
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
