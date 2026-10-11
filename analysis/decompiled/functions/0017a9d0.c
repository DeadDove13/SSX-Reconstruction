/* Ghidra pseudocode. PS2 address: 0017a9d0. Not validated source. */

void FUN_0017a9d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00154c98(0x27a598,*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x46c));
  *(float *)(param_1 + 100) = (float)iVar1;
  *(float *)(*(int *)(param_1 + 0x78) + 0x40) = (float)iVar1;
  return;
}

