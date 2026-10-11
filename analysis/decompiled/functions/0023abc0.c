/* Ghidra pseudocode. PS2 address: 0023abc0. Not validated source. */

int FUN_0023abc0(undefined2 *param_1,long param_2,int param_3,int param_4,ushort param_5,
                undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1 + param_3 + 0x10;
  *param_1 = 0x424d;
  *(undefined4 *)(param_1 + 4) = param_7;
  *(undefined4 *)(param_1 + 6) = param_6;
  param_1[1] = param_5;
  *(int *)(param_1 + 2) = param_3;
  if ((param_5 & 0x200) != 0) {
    FUN_0023ba74(iVar2,0x42454e44,4);
  }
  if ((param_5 & 0x800) != 0) {
    FUN_0023ba9c(iVar2 + 0xc,0,4);
  }
  iVar2 = iVar2 + param_4;
  if (param_2 != 0) {
    if ((param_5 & 0x100) == 0) {
      return iVar2 - (int)param_1;
    }
    FUN_0025bbe4(iVar2,param_2);
    iVar1 = FUN_0025bcf8(iVar2);
    iVar2 = iVar2 + iVar1 + 1;
  }
  return iVar2 - (int)param_1;
}

