/* Ghidra pseudocode. PS2 address: 002096d0. Not validated source. */

void FUN_002096d0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8b6c0 + param_2 * 4);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 400) = param_3;
    return;
  }
  return;
}

