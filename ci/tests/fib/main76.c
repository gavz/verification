#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov	R5,#4"); 
  __asm volatile("push	{R11}"); 
  __asm volatile("sub	sp, #28"); 
  __asm volatile("add	R11, sp, #0"); 
  __asm volatile("str	R5, [R11, #4]"); 
  __asm volatile("movs	R10, #0"); 
  __asm volatile("str	R10, [R11, #20]"); 
  __asm volatile("movs	R10, #1"); 
  __asm volatile("str	R10, [R11, #16]"); 
  __asm volatile("movs	R10, #0"); 
  __asm volatile("str	R10, [R11, #8]"); 
  __asm volatile("b.n	fibonaccix38"); 
  __asm volatile("fibonaccix16:"); 
  __asm volatile("ldr	R10, [R11, #8]"); 
  __asm volatile("cmp	R10, #1"); 
  __asm volatile("bgt.n	fibonaccix22"); 
  __asm volatile("ldr	R10, [R11, #8]"); 
  __asm volatile("str	R10, [R11, #12]"); 
  __asm volatile("b.n	fibonaccix32"); 
  __asm volatile("fibonaccix22:"); 
  __asm volatile("ldr	R6, [R11, #20]"); 
  __asm volatile("ldr	R10, [R11, #16]"); 
  __asm volatile("add	R10, R6"); 
  __asm volatile("str	R10, [R11, #12]"); 
  __asm volatile("ldr	R10, [R11, #16]"); 
  __asm volatile("str	R10, [R11, #20]"); 
  __asm volatile("ldr	R10, [R11, #12]"); 
  __asm volatile("str	R10, [R11, #16]"); 
  __asm volatile("fibonaccix32:"); 
  __asm volatile("ldr	R10, [R11, #8]"); 
  __asm volatile("adds	R10, #1"); 
  __asm volatile("str	R10, [R11, #8]"); 
  __asm volatile("fibonaccix38:"); 
  __asm volatile("ldr	R6, [R11, #8]"); 
  __asm volatile("ldr	R10, [R11, #4]"); 
  __asm volatile("cmp	R6, R10"); 
  __asm volatile("blt.n	fibonaccix16"); 
  __asm volatile("ldr	R10, [R11, #12]"); 
  __asm volatile("mov	R5, R10"); 
  __asm volatile("adds	R11, #28"); 
  __asm volatile("mov	sp, R11"); 
  __asm volatile("ldr.w	R11, [sp], #4"); 
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
