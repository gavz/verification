#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov R0,#0"); 
  __asm volatile("add R0,R0,#0xbf"); 
  __asm volatile("lsl R0,R0,#8"); 
  __asm volatile("add R0,R0,#0xed"); 
  __asm volatile("lsl R0,R0,#8"); 
  __asm volatile("add R0,R0,#0x0f"); 
  __asm volatile("lsl R0,R0,#8"); 
  __asm volatile("add R0,R0,#0xec"); 
  __asm volatile("mov R1,#0"); 
  __asm volatile("add R1,R1,#0x99"); 
  __asm volatile("lsl R1,R1,#8"); 
  __asm volatile("add R1,R1,#0xeb"); 
  __asm volatile("lsl R1,R1,#8"); 
  __asm volatile("add R1,R1,#0x8a"); 
  __asm volatile("lsl R1,R1,#8"); 
  __asm volatile("add R1,R1,#0x9e"); 
  __asm volatile("mov R2,#0"); 
  __asm volatile("add R2,R2,#0x48"); 
  __asm volatile("lsl R2,R2,#8"); 
  __asm volatile("add R2,R2,#0x6f"); 
  __asm volatile("lsl R2,R2,#8"); 
  __asm volatile("add R2,R2,#0xf3"); 
  __asm volatile("lsl R2,R2,#8"); 
  __asm volatile("add R2,R2,#0xdf"); 
  __asm volatile("mov R3,#0"); 
  __asm volatile("add R3,R3,#0xa7"); 
  __asm volatile("lsl R3,R3,#8"); 
  __asm volatile("add R3,R3,#0xb0"); 
  __asm volatile("lsl R3,R3,#8"); 
  __asm volatile("add R3,R3,#0xd9"); 
  __asm volatile("lsl R3,R3,#8"); 
  __asm volatile("add R3,R3,#0xbe"); 
  __asm volatile("mov R4,#0"); 
  __asm volatile("add R4,R4,#0x65"); 
  __asm volatile("lsl R4,R4,#8"); 
  __asm volatile("add R4,R4,#0xb6"); 
  __asm volatile("lsl R4,R4,#8"); 
  __asm volatile("add R4,R4,#0x70"); 
  __asm volatile("lsl R4,R4,#8"); 
  __asm volatile("add R4,R4,#0xf5"); 
  __asm volatile("mov R5,#0"); 
  __asm volatile("add R5,R5,#0x41"); 
  __asm volatile("lsl R5,R5,#8"); 
  __asm volatile("add R5,R5,#0x1e"); 
  __asm volatile("lsl R5,R5,#8"); 
  __asm volatile("add R5,R5,#0x18"); 
  __asm volatile("lsl R5,R5,#8"); 
  __asm volatile("add R5,R5,#0x09"); 
  __asm volatile("mov R6,#0"); 
  __asm volatile("add R6,R6,#0xed"); 
  __asm volatile("lsl R6,R6,#8"); 
  __asm volatile("add R6,R6,#0x2b"); 
  __asm volatile("lsl R6,R6,#8"); 
  __asm volatile("add R6,R6,#0xf9"); 
  __asm volatile("lsl R6,R6,#8"); 
  __asm volatile("add R6,R6,#0x43"); 
  __asm volatile("mov R7,#0"); 
  __asm volatile("add R7,R7,#0xdf"); 
  __asm volatile("lsl R7,R7,#8"); 
  __asm volatile("add R7,R7,#0x0e"); 
  __asm volatile("lsl R7,R7,#8"); 
  __asm volatile("add R7,R7,#0x26"); 
  __asm volatile("lsl R7,R7,#8"); 
  __asm volatile("add R7,R7,#0xd0"); 
  __asm volatile("mov R8,#0"); 
  __asm volatile("add R8,R8,#0x51"); 
  __asm volatile("lsl R8,R8,#8"); 
  __asm volatile("add R8,R8,#0xb3"); 
  __asm volatile("lsl R8,R8,#8"); 
  __asm volatile("add R8,R8,#0x8f"); 
  __asm volatile("lsl R8,R8,#8"); 
  __asm volatile("add R8,R8,#0x03"); 
  __asm volatile("mov R9,#0"); 
  __asm volatile("add R9,R9,#0xc6"); 
  __asm volatile("lsl R9,R9,#8"); 
  __asm volatile("add R9,R9,#0x42"); 
  __asm volatile("lsl R9,R9,#8"); 
  __asm volatile("add R9,R9,#0x64"); 
  __asm volatile("lsl R9,R9,#8"); 
  __asm volatile("add R9,R9,#0xb8"); 
  __asm volatile("mov R10,#0"); 
  __asm volatile("add R10,R10,#0x4a"); 
  __asm volatile("lsl R10,R10,#8"); 
  __asm volatile("add R10,R10,#0xfd"); 
  __asm volatile("lsl R10,R10,#8"); 
  __asm volatile("add R10,R10,#0xa6"); 
  __asm volatile("lsl R10,R10,#8"); 
  __asm volatile("add R10,R10,#0x49"); 
  __asm volatile("mov r0,#0"); 
  __asm volatile("adds r0,r0,#0xab"); 
  __asm volatile("mov r0,#5"); 
  __asm volatile("lsrs r0,#1"); 
  __asm volatile("cmp r0,r1"); 
  __asm volatile("itblock: ittet cc"); 
  __asm volatile("movcc r5,#5"); 
  __asm volatile("movscc r2,#2"); 
  __asm volatile("movscs r4,#4"); 
  __asm volatile("movscc r2,#2"); 
  __asm volatile("b continue"); 
  __asm volatile("target:  mov r10,#10"); 
  __asm volatile("continue:  mov r10,r10"); 
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
