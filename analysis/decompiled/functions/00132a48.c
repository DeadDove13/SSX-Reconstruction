/* Ghidra pseudocode. PS2 address: 00132a48. Not validated source. */

int FUN_00132a48(int param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x28);
  lVar3 = param_3;
  if (param_2 < param_3) {
    lVar3 = param_2;
    param_2 = param_3;
  }
  iVar2 = FUN_00132a10(param_1,lVar3,param_2);
  return iVar1 + iVar2 * 4;
}

