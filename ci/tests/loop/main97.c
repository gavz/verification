#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov R1, #100"); 
  __asm volatile("loop:"); 
  __asm volatile("add R1,R1,#-1"); 
  __asm volatile("cmp R1,#0"); 
  __asm volatile("beq loop"); 
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
