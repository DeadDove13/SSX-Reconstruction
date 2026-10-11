/* Ghidra pseudocode. PS2 address: 0014b8f0. Not validated source. */

void FUN_0014b8f0(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  
  FUN_001eacb0(param_3);
  iVar1 = *(int *)(param_2 + 0x220);
  *(undefined4 *)(iVar1 + 0x1ac) = 0;
  *(undefined4 *)(iVar1 + 0x1a4) = 0;
  *(undefined4 *)(iVar1 + 0x1a8) = 0;
  *(undefined4 *)(iVar1 + 0x194) = 0;
  *(undefined4 *)(iVar1 + 0x18c) = 0;
  *(undefined4 *)(iVar1 + 400) = 0;
  *(undefined4 *)(iVar1 + 0x1a0) = 0;
  *(undefined4 *)(iVar1 + 0x198) = 0;
  *(undefined4 *)(iVar1 + 0x19c) = 0;
  FUN_0014cd18(*(undefined4 *)(iVar1 + 0x6cf4),0x34,0,5);
  return;
}

