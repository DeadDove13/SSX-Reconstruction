/* Ghidra pseudocode. PS2 address: 002343d8. Not validated source. */

int FUN_002343d8(ushort *param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < param_3) {
    uVar1 = *param_1;
    while (iVar2 = (uint)uVar1 - (uint)*param_2, uVar1 != 0) {
      iVar3 = iVar3 + 1;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      if (param_3 <= iVar3) {
        return iVar2;
      }
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar1 = *param_1;
    }
  }
  return iVar2;
}

