#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov r0,#0"); 
  __asm volatile("adds r0,r1,#0xab"); 
  __asm volatile("mov R9,#0"); 
  __asm volatile("add R9,R9,#0x3c"); 
  __asm volatile("lsl R9,R9,#8"); 
  __asm volatile("add R9,R9,#0x38"); 
  __asm volatile("lsl R9,R9,#8"); 
  __asm volatile("add R9,R9,#0xbf"); 
  __asm volatile("lsl R9,R9,#8"); 
  __asm volatile("add R9,R9,#0xd6"); 
  __asm volatile("ADDS R6, R9, #0xdc");
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
