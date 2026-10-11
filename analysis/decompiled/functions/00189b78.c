/* Ghidra pseudocode. PS2 address: 00189b78. Not validated source. */

undefined4 FUN_00189b78(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0) {
    iVar1 = *(int *)(param_1 + 0x14);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14);
    if (*(int *)(iVar1 + 0x8c) <= param_2) {
      iVar1 = *(int *)(param_1 + 0x14);
    }
  }
  return *(undefined4 *)(iVar1 + param_2 * 4 + 200);
}

