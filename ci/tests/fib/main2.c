#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov	R4,#10"); 
  __asm volatile("push	{R3}"); 
  __asm volatile("sub	sp, #28"); 
  __asm volatile("add	R3, sp, #0"); 
  __asm volatile("str	R4, [R3, #4]"); 
  __asm volatile("movs	R12, #0"); 
  __asm volatile("str	R12, [R3, #20]"); 
  __asm volatile("movs	R12, #1"); 
  __asm volatile("str	R12, [R3, #16]"); 
  __asm volatile("movs	R12, #0"); 
  __asm volatile("str	R12, [R3, #8]"); 
  __asm volatile("b.n	fibonaccix38"); 
  __asm volatile("fibonaccix16:"); 
  __asm volatile("ldr	R12, [R3, #8]"); 
  __asm volatile("cmp	R12, #1"); 
  __asm volatile("bgt.n	fibonaccix22"); 
  __asm volatile("ldr	R12, [R3, #8]"); 
  __asm volatile("str	R12, [R3, #12]"); 
  __asm volatile("b.n	fibonaccix32"); 
  __asm volatile("fibonaccix22:"); 
  __asm volatile("ldr	R5, [R3, #20]"); 
  __asm volatile("ldr	R12, [R3, #16]"); 
  __asm volatile("add	R12, R5"); 
  __asm volatile("str	R12, [R3, #12]"); 
  __asm volatile("ldr	R12, [R3, #16]"); 
  __asm volatile("str	R12, [R3, #20]"); 
  __asm volatile("ldr	R12, [R3, #12]"); 
  __asm volatile("str	R12, [R3, #16]"); 
  __asm volatile("fibonaccix32:"); 
  __asm volatile("ldr	R12, [R3, #8]"); 
  __asm volatile("adds	R12, #1"); 
  __asm volatile("str	R12, [R3, #8]"); 
  __asm volatile("fibonaccix38:"); 
  __asm volatile("ldr	R5, [R3, #8]"); 
  __asm volatile("ldr	R12, [R3, #4]"); 
  __asm volatile("cmp	R5, R12"); 
  __asm volatile("blt.n	fibonaccix16"); 
  __asm volatile("ldr	R12, [R3, #12]"); 
  __asm volatile("mov	R4, R12"); 
  __asm volatile("adds	R3, #28"); 
  __asm volatile("mov	sp, R3"); 
  __asm volatile("ldr.w	R3, [sp], #4"); 
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
