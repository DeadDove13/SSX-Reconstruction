/* Ghidra pseudocode. PS2 address: 00225bb0. Not validated source. */

undefined8 FUN_00225bb0(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (DAT_0029a888 == '\0') {
    uVar2 = 0xfffffffffffffff6;
  }
  else {
    lVar3 = FUN_00225958(param_1);
    if (((-1 < lVar3) && (iVar1 = *(int *)((int)param_1 * 0xc + DAT_0029a8f4), -1 < param_2)) &&
       (param_2 < (long)(ulong)*(ushort *)(iVar1 + 6))) {
      uVar2 = FUN_0022dd90(iVar1,param_2);
      uVar2 = FUN_0022a0e8(iVar1,uVar2,param_1,param_2,param_3);
      return uVar2;
    }
    uVar2 = 0xfffffffffffffff8;
  }
  return uVar2;
}

