/* Ghidra pseudocode. PS2 address: 0013a228. Not validated source. */

void FUN_0013a228(int param_1)

{
  int iVar1;
  
  FUN_001099f0(*(undefined4 *)(param_1 + 0x10),0,0);
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 0x194) = 0;
  *(undefined4 *)(iVar1 + 0x18c) = 0;
  *(undefined4 *)(iVar1 + 400) = 0;
  return;
}

