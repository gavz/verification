#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov R0,#0"); 
  __asm volatile("add R0,R0,#0xcb"); 
  __asm volatile("lsl R0,R0,#8"); 
  __asm volatile("add R0,R0,#0x7d"); 
  __asm volatile("lsl R0,R0,#8"); 
  __asm volatile("add R0,R0,#0xee"); 
  __asm volatile("lsl R0,R0,#8"); 
  __asm volatile("add R0,R0,#0x30"); 
  __asm volatile("mov R1,#0"); 
  __asm volatile("add R1,R1,#0xcd"); 
  __asm volatile("lsl R1,R1,#8"); 
  __asm volatile("add R1,R1,#0x80"); 
  __asm volatile("lsl R1,R1,#8"); 
  __asm volatile("add R1,R1,#0xb8"); 
  __asm volatile("lsl R1,R1,#8"); 
  __asm volatile("add R1,R1,#0x68"); 
  __asm volatile("mov R2,#0"); 
  __asm volatile("add R2,R2,#0x9b"); 
  __asm volatile("lsl R2,R2,#8"); 
  __asm volatile("add R2,R2,#0xc5"); 
  __asm volatile("lsl R2,R2,#8"); 
  __asm volatile("add R2,R2,#0x5e"); 
  __asm volatile("lsl R2,R2,#8"); 
  __asm volatile("add R2,R2,#0xb7"); 
  __asm volatile("mov R3,#0"); 
  __asm volatile("add R3,R3,#0x59"); 
  __asm volatile("lsl R3,R3,#8"); 
  __asm volatile("add R3,R3,#0x4f"); 
  __asm volatile("lsl R3,R3,#8"); 
  __asm volatile("add R3,R3,#0x9b"); 
  __asm volatile("lsl R3,R3,#8"); 
  __asm volatile("add R3,R3,#0x0c"); 
  __asm volatile("mov R4,#0"); 
  __asm volatile("add R4,R4,#0xec"); 
  __asm volatile("lsl R4,R4,#8"); 
  __asm volatile("add R4,R4,#0x56"); 
  __asm volatile("lsl R4,R4,#8"); 
  __asm volatile("add R4,R4,#0x21"); 
  __asm volatile("lsl R4,R4,#8"); 
  __asm volatile("add R4,R4,#0x10"); 
  __asm volatile("mov R5,#0"); 
  __asm volatile("add R5,R5,#0x20"); 
  __asm volatile("lsl R5,R5,#8"); 
  __asm volatile("add R5,R5,#0xdb"); 
  __asm volatile("lsl R5,R5,#8"); 
  __asm volatile("add R5,R5,#0x29"); 
  __asm volatile("lsl R5,R5,#8"); 
  __asm volatile("add R5,R5,#0xc4"); 
  __asm volatile("mov R6,#0"); 
  __asm volatile("add R6,R6,#0xd2"); 
  __asm volatile("lsl R6,R6,#8"); 
  __asm volatile("add R6,R6,#0x04"); 
  __asm volatile("lsl R6,R6,#8"); 
  __asm volatile("add R6,R6,#0x77"); 
  __asm volatile("lsl R6,R6,#8"); 
  __asm volatile("add R6,R6,#0xac"); 
  __asm volatile("mov R7,#0"); 
  __asm volatile("add R7,R7,#0xca"); 
  __asm volatile("lsl R7,R7,#8"); 
  __asm volatile("add R7,R7,#0x26"); 
  __asm volatile("lsl R7,R7,#8"); 
  __asm volatile("add R7,R7,#0x68"); 
  __asm volatile("lsl R7,R7,#8"); 
  __asm volatile("add R7,R7,#0x9b"); 
  __asm volatile("mov R8,#0"); 
  __asm volatile("add R8,R8,#0xdb"); 
  __asm volatile("lsl R8,R8,#8"); 
  __asm volatile("add R8,R8,#0xee"); 
  __asm volatile("lsl R8,R8,#8"); 
  __asm volatile("add R8,R8,#0x95"); 
  __asm volatile("lsl R8,R8,#8"); 
  __asm volatile("add R8,R8,#0xd5"); 
  __asm volatile("mov R9,#0"); 
  __asm volatile("add R9,R9,#0x33"); 
  __asm volatile("lsl R9,R9,#8"); 
  __asm volatile("add R9,R9,#0xf0"); 
  __asm volatile("lsl R9,R9,#8"); 
  __asm volatile("add R9,R9,#0xde"); 
  __asm volatile("lsl R9,R9,#8"); 
  __asm volatile("add R9,R9,#0x1e"); 
  __asm volatile("mov R10,#0"); 
  __asm volatile("add R10,R10,#0x79"); 
  __asm volatile("lsl R10,R10,#8"); 
  __asm volatile("add R10,R10,#0x40"); 
  __asm volatile("lsl R10,R10,#8"); 
  __asm volatile("add R10,R10,#0x32"); 
  __asm volatile("lsl R10,R10,#8"); 
  __asm volatile("add R10,R10,#0xf5"); 
  __asm volatile("mov r0,#0"); 
  __asm volatile("adds r0,r0,#0xab"); 
  __asm volatile("mov r0,#5"); 
  __asm volatile("lsrs r0,#1"); 
  __asm volatile("cmp r0,r1"); 
  __asm volatile("itblock: itt pl"); 
  __asm volatile("subspl r9,r0,r1,lsr #1"); 
  __asm volatile("bpl target"); 
  __asm volatile("b continue"); 
  __asm volatile("target:  mov r10,#10"); 
  __asm volatile("continue:  mov r10,r10"); 
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
