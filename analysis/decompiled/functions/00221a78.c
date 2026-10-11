/* Ghidra pseudocode. PS2 address: 00221a78. Not validated source. */

void FUN_00221a78(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x288);
  *(undefined4 *)(param_1 + iVar1 * 4) = param_2;
  *(int *)(param_1 + 0x288) = iVar1 + 1;
  return;
}

