#include <stdlib.h>
__attribute__((naked))
void main(void){
  __asm volatile("mov R0,#0"); 
  __asm volatile("add R0,R0,#0x76"); 
  __asm volatile("lsl R0,R0,#8"); 
  __asm volatile("add R0,R0,#0x32"); 
  __asm volatile("lsl R0,R0,#8"); 
  __asm volatile("add R0,R0,#0xcc"); 
  __asm volatile("lsl R0,R0,#8"); 
  __asm volatile("add R0,R0,#0x7b"); 
  __asm volatile("mov R1,#0"); 
  __asm volatile("add R1,R1,#0xe3"); 
  __asm volatile("lsl R1,R1,#8"); 
  __asm volatile("add R1,R1,#0xb4"); 
  __asm volatile("lsl R1,R1,#8"); 
  __asm volatile("add R1,R1,#0xd2"); 
  __asm volatile("lsl R1,R1,#8"); 
  __asm volatile("add R1,R1,#0xd2"); 
  __asm volatile("mov R2,#0"); 
  __asm volatile("add R2,R2,#0x71"); 
  __asm volatile("lsl R2,R2,#8"); 
  __asm volatile("add R2,R2,#0xf0"); 
  __asm volatile("lsl R2,R2,#8"); 
  __asm volatile("add R2,R2,#0xb4"); 
  __asm volatile("lsl R2,R2,#8"); 
  __asm volatile("add R2,R2,#0x57"); 
  __asm volatile("mov R3,#0"); 
  __asm volatile("add R3,R3,#0xd2"); 
  __asm volatile("lsl R3,R3,#8"); 
  __asm volatile("add R3,R3,#0x32"); 
  __asm volatile("lsl R3,R3,#8"); 
  __asm volatile("add R3,R3,#0xa4"); 
  __asm volatile("lsl R3,R3,#8"); 
  __asm volatile("add R3,R3,#0x14"); 
  __asm volatile("mov R4,#0"); 
  __asm volatile("add R4,R4,#0x3a"); 
  __asm volatile("lsl R4,R4,#8"); 
  __asm volatile("add R4,R4,#0x3d"); 
  __asm volatile("lsl R4,R4,#8"); 
  __asm volatile("add R4,R4,#0x30"); 
  __asm volatile("lsl R4,R4,#8"); 
  __asm volatile("add R4,R4,#0x8e"); 
  __asm volatile("mov R5,#0"); 
  __asm volatile("add R5,R5,#0x62"); 
  __asm volatile("lsl R5,R5,#8"); 
  __asm volatile("add R5,R5,#0x61"); 
  __asm volatile("lsl R5,R5,#8"); 
  __asm volatile("add R5,R5,#0xe3"); 
  __asm volatile("lsl R5,R5,#8"); 
  __asm volatile("add R5,R5,#0x59"); 
  __asm volatile("mov R6,#0"); 
  __asm volatile("add R6,R6,#0xe2"); 
  __asm volatile("lsl R6,R6,#8"); 
  __asm volatile("add R6,R6,#0x17"); 
  __asm volatile("lsl R6,R6,#8"); 
  __asm volatile("add R6,R6,#0x76"); 
  __asm volatile("lsl R6,R6,#8"); 
  __asm volatile("add R6,R6,#0xeb"); 
  __asm volatile("mov R7,#0"); 
  __asm volatile("add R7,R7,#0x36"); 
  __asm volatile("lsl R7,R7,#8"); 
  __asm volatile("add R7,R7,#0xd0"); 
  __asm volatile("lsl R7,R7,#8"); 
  __asm volatile("add R7,R7,#0x97"); 
  __asm volatile("lsl R7,R7,#8"); 
  __asm volatile("add R7,R7,#0x0a"); 
  __asm volatile("mov R8,#0"); 
  __asm volatile("add R8,R8,#0x68"); 
  __asm volatile("lsl R8,R8,#8"); 
  __asm volatile("add R8,R8,#0xdd"); 
  __asm volatile("lsl R8,R8,#8"); 
  __asm volatile("add R8,R8,#0x9a"); 
  __asm volatile("lsl R8,R8,#8"); 
  __asm volatile("add R8,R8,#0x91"); 
  __asm volatile("mov R9,#0"); 
  __asm volatile("add R9,R9,#0x97"); 
  __asm volatile("lsl R9,R9,#8"); 
  __asm volatile("add R9,R9,#0xb8"); 
  __asm volatile("lsl R9,R9,#8"); 
  __asm volatile("add R9,R9,#0x81"); 
  __asm volatile("lsl R9,R9,#8"); 
  __asm volatile("add R9,R9,#0xce"); 
  __asm volatile("mov R10,#0"); 
  __asm volatile("add R10,R10,#0x3c"); 
  __asm volatile("lsl R10,R10,#8"); 
  __asm volatile("add R10,R10,#0xbf"); 
  __asm volatile("lsl R10,R10,#8"); 
  __asm volatile("add R10,R10,#0x94"); 
  __asm volatile("lsl R10,R10,#8"); 
  __asm volatile("add R10,R10,#0xad"); 
  __asm volatile("mov r0,#0"); 
  __asm volatile("adds r0,r0,#0xab"); 
  __asm volatile("mov r0,#5"); 
  __asm volatile("lsrs r0,#1"); 
  __asm volatile("cmp r0,r1"); 
  __asm volatile("ittt mi"); 
  __asm volatile("movsmi r4,#4"); 
  __asm volatile("addsmi r6,r0,r1"); 
  __asm volatile("addsmi r6,r0,r1"); 
  __asm volatile("b continue"); 
  __asm volatile("target:  mov r10,#10"); 
  __asm volatile("continue:  mov r10,r10"); 
  #ifndef KLEE
  while(1);
  #else
  __asm volatile("bx lr");
  #endif
}
