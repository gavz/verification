#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov r0,#0"); 
  __asm volatile("adds r0,r1,#0xab"); 
  __asm volatile("mov R7,#0"); 
  __asm volatile("add R7,R7,#0x30"); 
  __asm volatile("lsl R7,R7,#8"); 
  __asm volatile("add R7,R7,#0x08"); 
  __asm volatile("lsl R7,R7,#8"); 
  __asm volatile("add R7,R7,#0xa5"); 
  __asm volatile("lsl R7,R7,#8"); 
  __asm volatile("add R7,R7,#0x19"); 
  __asm volatile("ADDS R12, R7, #0xfe");
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
