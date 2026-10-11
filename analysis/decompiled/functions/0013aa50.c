/* Ghidra pseudocode. PS2 address: 0013aa50. Not validated source. */

void FUN_0013aa50(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 400) = 0x40800000;
  *(undefined4 *)(iVar1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 0x1a4);
  return;
}

