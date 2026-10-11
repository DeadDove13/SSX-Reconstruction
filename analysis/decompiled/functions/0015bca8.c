/* Ghidra pseudocode. PS2 address: 0015bca8. Not validated source. */

int FUN_0015bca8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while ((iVar2 = 0, iVar3 < *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c) &&
         (iVar1 = FUN_00189b78(DAT_002859e4,iVar3), iVar2 = iVar3,
         *(int *)(param_1 + param_2 * 0x20 + 0xa4c) != iVar1))) {
    iVar3 = iVar3 + 1;
  }
  return iVar2;
}

