#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov R0,#0"); 
  __asm volatile("add R0,R0,#0xf1"); 
  __asm volatile("lsl R0,R0,#8"); 
  __asm volatile("add R0,R0,#0x9f"); 
  __asm volatile("lsl R0,R0,#8"); 
  __asm volatile("add R0,R0,#0x3e"); 
  __asm volatile("lsl R0,R0,#8"); 
  __asm volatile("add R0,R0,#0x94"); 
  __asm volatile("mov R1,#0"); 
  __asm volatile("add R1,R1,#0x40"); 
  __asm volatile("lsl R1,R1,#8"); 
  __asm volatile("add R1,R1,#0x05"); 
  __asm volatile("lsl R1,R1,#8"); 
  __asm volatile("add R1,R1,#0x5e"); 
  __asm volatile("lsl R1,R1,#8"); 
  __asm volatile("add R1,R1,#0x6c"); 
  __asm volatile("mov R2,#0"); 
  __asm volatile("add R2,R2,#0x98"); 
  __asm volatile("lsl R2,R2,#8"); 
  __asm volatile("add R2,R2,#0xe0"); 
  __asm volatile("lsl R2,R2,#8"); 
  __asm volatile("add R2,R2,#0x98"); 
  __asm volatile("lsl R2,R2,#8"); 
  __asm volatile("add R2,R2,#0x8b"); 
  __asm volatile("mov R3,#0"); 
  __asm volatile("add R3,R3,#0x87"); 
  __asm volatile("lsl R3,R3,#8"); 
  __asm volatile("add R3,R3,#0x0e"); 
  __asm volatile("lsl R3,R3,#8"); 
  __asm volatile("add R3,R3,#0xf5"); 
  __asm volatile("lsl R3,R3,#8"); 
  __asm volatile("add R3,R3,#0x02"); 
  __asm volatile("mov R4,#0"); 
  __asm volatile("add R4,R4,#0x7f"); 
  __asm volatile("lsl R4,R4,#8"); 
  __asm volatile("add R4,R4,#0x1c"); 
  __asm volatile("lsl R4,R4,#8"); 
  __asm volatile("add R4,R4,#0xdc"); 
  __asm volatile("lsl R4,R4,#8"); 
  __asm volatile("add R4,R4,#0x02"); 
  __asm volatile("mov R5,#0"); 
  __asm volatile("add R5,R5,#0xe8"); 
  __asm volatile("lsl R5,R5,#8"); 
  __asm volatile("add R5,R5,#0xc4"); 
  __asm volatile("lsl R5,R5,#8"); 
  __asm volatile("add R5,R5,#0xd1"); 
  __asm volatile("lsl R5,R5,#8"); 
  __asm volatile("add R5,R5,#0x80"); 
  __asm volatile("mov R6,#0"); 
  __asm volatile("add R6,R6,#0xe9"); 
  __asm volatile("lsl R6,R6,#8"); 
  __asm volatile("add R6,R6,#0x7b"); 
  __asm volatile("lsl R6,R6,#8"); 
  __asm volatile("add R6,R6,#0xc6"); 
  __asm volatile("lsl R6,R6,#8"); 
  __asm volatile("add R6,R6,#0x74"); 
  __asm volatile("mov R7,#0"); 
  __asm volatile("add R7,R7,#0xcd"); 
  __asm volatile("lsl R7,R7,#8"); 
  __asm volatile("add R7,R7,#0x7c"); 
  __asm volatile("lsl R7,R7,#8"); 
  __asm volatile("add R7,R7,#0x84"); 
  __asm volatile("lsl R7,R7,#8"); 
  __asm volatile("add R7,R7,#0xdb"); 
  __asm volatile("mov R8,#0"); 
  __asm volatile("add R8,R8,#0x72"); 
  __asm volatile("lsl R8,R8,#8"); 
  __asm volatile("add R8,R8,#0xf0"); 
  __asm volatile("lsl R8,R8,#8"); 
  __asm volatile("add R8,R8,#0xd0"); 
  __asm volatile("lsl R8,R8,#8"); 
  __asm volatile("add R8,R8,#0x3b"); 
  __asm volatile("mov R9,#0"); 
  __asm volatile("add R9,R9,#0x38"); 
  __asm volatile("lsl R9,R9,#8"); 
  __asm volatile("add R9,R9,#0x7e"); 
  __asm volatile("lsl R9,R9,#8"); 
  __asm volatile("add R9,R9,#0x75"); 
  __asm volatile("lsl R9,R9,#8"); 
  __asm volatile("add R9,R9,#0x1b"); 
  __asm volatile("mov R10,#0"); 
  __asm volatile("add R10,R10,#0xb1"); 
  __asm volatile("lsl R10,R10,#8"); 
  __asm volatile("add R10,R10,#0x06"); 
  __asm volatile("lsl R10,R10,#8"); 
  __asm volatile("add R10,R10,#0x1f"); 
  __asm volatile("lsl R10,R10,#8"); 
  __asm volatile("add R10,R10,#0xf3"); 
  __asm volatile("mov r0,#0"); 
  __asm volatile("adds r0,r0,#0xab"); 
  __asm volatile("mov r0,#4"); 
  __asm volatile("lsrs r0,#1"); 
  __asm volatile("cmp r0,r1"); 
  __asm volatile("ittt le"); 
  __asm volatile("subsle r9,r0,r1,lsr #1"); 
  __asm volatile("subsle r9,r0,r1,lsr #1"); 
  __asm volatile("movle r5,#5"); 
  __asm volatile("b continue"); 
  __asm volatile("target:  mov r10,#10"); 
  __asm volatile("continue:  mov r10,r10"); 
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
