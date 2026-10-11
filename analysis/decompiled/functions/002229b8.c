/* Ghidra pseudocode. PS2 address: 002229b8. Not validated source. */

int FUN_002229b8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (-1 < param_2) {
    if (param_2 < *(int *)(iVar1 + 0x20)) {
      iVar1 = *(int *)(iVar1 + 0x24);
      goto LAB_002229d8;
    }
    iVar1 = *(int *)(param_1 + 0x28);
  }
  iVar1 = *(int *)(iVar1 + 0x24);
LAB_002229d8:
  return iVar1 + param_2 * 8;
}

