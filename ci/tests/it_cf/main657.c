#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov R0,#0"); 
  __asm volatile("add R0,R0,#0x14"); 
  __asm volatile("lsl R0,R0,#8"); 
  __asm volatile("add R0,R0,#0xb4"); 
  __asm volatile("lsl R0,R0,#8"); 
  __asm volatile("add R0,R0,#0xe2"); 
  __asm volatile("lsl R0,R0,#8"); 
  __asm volatile("add R0,R0,#0x8c"); 
  __asm volatile("mov R1,#0"); 
  __asm volatile("add R1,R1,#0x87"); 
  __asm volatile("lsl R1,R1,#8"); 
  __asm volatile("add R1,R1,#0xeb"); 
  __asm volatile("lsl R1,R1,#8"); 
  __asm volatile("add R1,R1,#0xbf"); 
  __asm volatile("lsl R1,R1,#8"); 
  __asm volatile("add R1,R1,#0x30"); 
  __asm volatile("mov R2,#0"); 
  __asm volatile("add R2,R2,#0x2e"); 
  __asm volatile("lsl R2,R2,#8"); 
  __asm volatile("add R2,R2,#0x7f"); 
  __asm volatile("lsl R2,R2,#8"); 
  __asm volatile("add R2,R2,#0xa4"); 
  __asm volatile("lsl R2,R2,#8"); 
  __asm volatile("add R2,R2,#0x19"); 
  __asm volatile("mov R3,#0"); 
  __asm volatile("add R3,R3,#0x57"); 
  __asm volatile("lsl R3,R3,#8"); 
  __asm volatile("add R3,R3,#0x3b"); 
  __asm volatile("lsl R3,R3,#8"); 
  __asm volatile("add R3,R3,#0x91"); 
  __asm volatile("lsl R3,R3,#8"); 
  __asm volatile("add R3,R3,#0x99"); 
  __asm volatile("mov R4,#0"); 
  __asm volatile("add R4,R4,#0xd9"); 
  __asm volatile("lsl R4,R4,#8"); 
  __asm volatile("add R4,R4,#0x74"); 
  __asm volatile("lsl R4,R4,#8"); 
  __asm volatile("add R4,R4,#0x78"); 
  __asm volatile("lsl R4,R4,#8"); 
  __asm volatile("add R4,R4,#0x29"); 
  __asm volatile("mov R5,#0"); 
  __asm volatile("add R5,R5,#0x22"); 
  __asm volatile("lsl R5,R5,#8"); 
  __asm volatile("add R5,R5,#0x9e"); 
  __asm volatile("lsl R5,R5,#8"); 
  __asm volatile("add R5,R5,#0x23"); 
  __asm volatile("lsl R5,R5,#8"); 
  __asm volatile("add R5,R5,#0x96"); 
  __asm volatile("mov R6,#0"); 
  __asm volatile("add R6,R6,#0x19"); 
  __asm volatile("lsl R6,R6,#8"); 
  __asm volatile("add R6,R6,#0x8c"); 
  __asm volatile("lsl R6,R6,#8"); 
  __asm volatile("add R6,R6,#0xb4"); 
  __asm volatile("lsl R6,R6,#8"); 
  __asm volatile("add R6,R6,#0xb2"); 
  __asm volatile("mov R7,#0"); 
  __asm volatile("add R7,R7,#0xe5"); 
  __asm volatile("lsl R7,R7,#8"); 
  __asm volatile("add R7,R7,#0x71"); 
  __asm volatile("lsl R7,R7,#8"); 
  __asm volatile("add R7,R7,#0x0f"); 
  __asm volatile("lsl R7,R7,#8"); 
  __asm volatile("add R7,R7,#0xe6"); 
  __asm volatile("mov R8,#0"); 
  __asm volatile("add R8,R8,#0xeb"); 
  __asm volatile("lsl R8,R8,#8"); 
  __asm volatile("add R8,R8,#0x5f"); 
  __asm volatile("lsl R8,R8,#8"); 
  __asm volatile("add R8,R8,#0xcc"); 
  __asm volatile("lsl R8,R8,#8"); 
  __asm volatile("add R8,R8,#0x84"); 
  __asm volatile("mov R9,#0"); 
  __asm volatile("add R9,R9,#0x76"); 
  __asm volatile("lsl R9,R9,#8"); 
  __asm volatile("add R9,R9,#0x2c"); 
  __asm volatile("lsl R9,R9,#8"); 
  __asm volatile("add R9,R9,#0x56"); 
  __asm volatile("lsl R9,R9,#8"); 
  __asm volatile("add R9,R9,#0xb7"); 
  __asm volatile("mov R10,#0"); 
  __asm volatile("add R10,R10,#0x30"); 
  __asm volatile("lsl R10,R10,#8"); 
  __asm volatile("add R10,R10,#0x17"); 
  __asm volatile("lsl R10,R10,#8"); 
  __asm volatile("add R10,R10,#0x27"); 
  __asm volatile("lsl R10,R10,#8"); 
  __asm volatile("add R10,R10,#0xa3"); 
  __asm volatile("mov r0,#0"); 
  __asm volatile("adds r0,r0,#0xab"); 
  __asm volatile("mov r0,#5"); 
  __asm volatile("lsrs r0,#1"); 
  __asm volatile("cmp r0,r1"); 
  __asm volatile("itblock: itt vc"); 
  __asm volatile("addsvc r6,r0,r1"); 
  __asm volatile("movvc r5,#5"); 
  __asm volatile("b continue"); 
  __asm volatile("target:  mov r10,#10"); 
  __asm volatile("continue:  mov r10,r10"); 
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}