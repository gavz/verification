#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov	R0,#6"); 
  __asm volatile("push	{R9}"); 
  __asm volatile("sub	sp, #28"); 
  __asm volatile("add	R9, sp, #0"); 
  __asm volatile("str	R0, [R9, #4]"); 
  __asm volatile("movs	R4, #0"); 
  __asm volatile("str	R4, [R9, #20]"); 
  __asm volatile("movs	R4, #1"); 
  __asm volatile("str	R4, [R9, #16]"); 
  __asm volatile("movs	R4, #0"); 
  __asm volatile("str	R4, [R9, #8]"); 
  __asm volatile("b.n	fibonaccix38"); 
  __asm volatile("fibonaccix16:"); 
  __asm volatile("ldr	R4, [R9, #8]"); 
  __asm volatile("cmp	R4, #1"); 
  __asm volatile("bgt.n	fibonaccix22"); 
  __asm volatile("ldr	R4, [R9, #8]"); 
  __asm volatile("str	R4, [R9, #12]"); 
  __asm volatile("b.n	fibonaccix32"); 
  __asm volatile("fibonaccix22:"); 
  __asm volatile("ldr	R1, [R9, #20]"); 
  __asm volatile("ldr	R4, [R9, #16]"); 
  __asm volatile("add	R4, R1"); 
  __asm volatile("str	R4, [R9, #12]"); 
  __asm volatile("ldr	R4, [R9, #16]"); 
  __asm volatile("str	R4, [R9, #20]"); 
  __asm volatile("ldr	R4, [R9, #12]"); 
  __asm volatile("str	R4, [R9, #16]"); 
  __asm volatile("fibonaccix32:"); 
  __asm volatile("ldr	R4, [R9, #8]"); 
  __asm volatile("adds	R4, #1"); 
  __asm volatile("str	R4, [R9, #8]"); 
  __asm volatile("fibonaccix38:"); 
  __asm volatile("ldr	R1, [R9, #8]"); 
  __asm volatile("ldr	R4, [R9, #4]"); 
  __asm volatile("cmp	R1, R4"); 
  __asm volatile("blt.n	fibonaccix16"); 
  __asm volatile("ldr	R4, [R9, #12]"); 
  __asm volatile("mov	R0, R4"); 
  __asm volatile("adds	R9, #28"); 
  __asm volatile("mov	sp, R9"); 
  __asm volatile("ldr.w	R9, [sp], #4"); 
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
