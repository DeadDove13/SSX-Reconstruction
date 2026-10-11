/* Ghidra pseudocode. PS2 address: 00223aa8. Not validated source. */

void FUN_00223aa8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2d8);
  *(undefined4 *)(param_1 + 0x50 + iVar1 * 4) = param_2;
  *(int *)(param_1 + 0x2d8) = iVar1 + 1;
  return;
}

