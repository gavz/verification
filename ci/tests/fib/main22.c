#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov	R12,#4"); 
  __asm volatile("push	{R2}"); 
  __asm volatile("sub	sp, #28"); 
  __asm volatile("add	R2, sp, #0"); 
  __asm volatile("str	R12, [R2, #4]"); 
  __asm volatile("movs	R6, #0"); 
  __asm volatile("str	R6, [R2, #20]"); 
  __asm volatile("movs	R6, #1"); 
  __asm volatile("str	R6, [R2, #16]"); 
  __asm volatile("movs	R6, #0"); 
  __asm volatile("str	R6, [R2, #8]"); 
  __asm volatile("b.n	fibonaccix38"); 
  __asm volatile("fibonaccix16:"); 
  __asm volatile("ldr	R6, [R2, #8]"); 
  __asm volatile("cmp	R6, #1"); 
  __asm volatile("bgt.n	fibonaccix22"); 
  __asm volatile("ldr	R6, [R2, #8]"); 
  __asm volatile("str	R6, [R2, #12]"); 
  __asm volatile("b.n	fibonaccix32"); 
  __asm volatile("fibonaccix22:"); 
  __asm volatile("ldr	R11, [R2, #20]"); 
  __asm volatile("ldr	R6, [R2, #16]"); 
  __asm volatile("add	R6, R11"); 
  __asm volatile("str	R6, [R2, #12]"); 
  __asm volatile("ldr	R6, [R2, #16]"); 
  __asm volatile("str	R6, [R2, #20]"); 
  __asm volatile("ldr	R6, [R2, #12]"); 
  __asm volatile("str	R6, [R2, #16]"); 
  __asm volatile("fibonaccix32:"); 
  __asm volatile("ldr	R6, [R2, #8]"); 
  __asm volatile("adds	R6, #1"); 
  __asm volatile("str	R6, [R2, #8]"); 
  __asm volatile("fibonaccix38:"); 
  __asm volatile("ldr	R11, [R2, #8]"); 
  __asm volatile("ldr	R6, [R2, #4]"); 
  __asm volatile("cmp	R11, R6"); 
  __asm volatile("blt.n	fibonaccix16"); 
  __asm volatile("ldr	R6, [R2, #12]"); 
  __asm volatile("mov	R12, R6"); 
  __asm volatile("adds	R2, #28"); 
  __asm volatile("mov	sp, R2"); 
  __asm volatile("ldr.w	R2, [sp], #4"); 
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
