/* Ghidra pseudocode. PS2 address: 00150f10. Not validated source. */

bool FUN_00150f10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00148998(param_1 + 0x20,*(undefined4 *)(param_1 + 8));
  return (float)(int)((*(uint *)(*(int *)(*(int *)(iVar1 + 0x224) + 8) + 0xc) >> 7 & 0xff) - 1) <=
         *(float *)(iVar1 + 0x1e8);
}

