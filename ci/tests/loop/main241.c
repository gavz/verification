#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov R4, #100"); 
  __asm volatile("loop:"); 
  __asm volatile("add R4,R4,#-1"); 
  __asm volatile("cmp R4,#0"); 
  __asm volatile("bls loop"); 
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
