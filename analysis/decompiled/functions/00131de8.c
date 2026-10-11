/* Ghidra pseudocode. PS2 address: 00131de8. Not validated source. */

void FUN_00131de8(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (*(int *)(iVar1 + 0xc) == 0) {
    param_1[1] = param_2;
  }
  else {
    *(int *)(*(int *)(iVar1 + 0xc) + 0x10) = param_2;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    *param_1 = iVar1;
  }
  else {
    *(int *)(*(int *)(param_2 + 0x10) + 0xc) = iVar1;
  }
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(int *)(param_2 + 0x10) = iVar1;
  *(int *)(iVar1 + 0xc) = param_2;
  return;
}

