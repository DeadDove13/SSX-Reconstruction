/* Ghidra pseudocode. PS2 address: 0013f660. Not validated source. */

void FUN_0013f660(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0x150) = 0;
  *(undefined4 *)(iVar1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

