/* Ghidra pseudocode. PS2 address: 00169790. Not validated source. */

void FUN_00169790(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x24c) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x278) + 1, *(int *)(param_1 + 0x278) = iVar1,
     *(int *)(param_1 + 0x24c) <= iVar1)) {
    *(undefined4 *)(param_1 + 0x278) = 0;
  }
  return;
}

