#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov r0,#0"); 
  __asm volatile("adds r0,r1,#0xab"); 
  __asm volatile("mov R1,#0"); 
  __asm volatile("add R1,R1,#0x50"); 
  __asm volatile("lsl R1,R1,#8"); 
  __asm volatile("add R1,R1,#0x73"); 
  __asm volatile("lsl R1,R1,#8"); 
  __asm volatile("add R1,R1,#0x03"); 
  __asm volatile("lsl R1,R1,#8"); 
  __asm volatile("add R1,R1,#0x9f"); 
  __asm volatile("ADD R8, R1, #0xde");
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
