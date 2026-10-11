/* Ghidra pseudocode. PS2 address: 002236e8. Not validated source. */

int FUN_002236e8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_002237f8(0x299cc8,param_2);
  return *(int *)(param_1 + 0x2c) + *(short *)(iVar1 + 0xf4) * 8;
}

