#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("start:"); 
  __asm volatile("mov R9,#-1"); 
  __asm volatile("mov R0,#5"); 
  __asm volatile("cmp R9,R0"); 
  __asm volatile("blo bb1"); 
  __asm volatile("bb1:"); 
  __asm volatile("mov R7,#1"); 
  __asm volatile("b end"); 
  __asm volatile("bb2:"); 
  __asm volatile("mov R10,#2"); 
  __asm volatile("bb3:"); 
  __asm volatile("mov R1,#3"); 
  __asm volatile("cmp R9,R0"); 
  __asm volatile("blo end"); 
  __asm volatile("end:"); 
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
