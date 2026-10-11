/* Ghidra pseudocode. PS2 address: 0020a540. Not validated source. */

void FUN_0020a540(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x35344));
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x35344);
  }
  else {
    FUN_00209b28(iVar1,3);
    iVar1 = *(int *)(param_1 + 0x35344);
  }
  *(undefined4 *)(param_2 * 4 + iVar1) = 0;
  return;
}

