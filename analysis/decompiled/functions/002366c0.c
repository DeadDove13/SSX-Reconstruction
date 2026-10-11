/* Ghidra pseudocode. PS2 address: 002366c0. Not validated source. */

long FUN_002366c0(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined4 auStack_60 [4];
  
  lVar1 = FUN_00239fb0(*param_2,1,param_1,auStack_60);
  iVar4 = (int)param_1 + -1;
  if (lVar1 != 0) {
    uVar2 = FUN_0023a1d8(auStack_60[0],iVar4);
    lVar1 = FUN_0023a448(*param_2,uVar2,param_2[2]);
    if (lVar1 != 0) {
      FUN_0023a020(auStack_60[0],0,lVar1,uVar2,iVar4);
      FUN_0023a180(auStack_60[0],iVar4);
      if (DAT_002c5b0c == (code *)0x0) {
        return lVar1;
      }
      lVar3 = (*DAT_002c5b0c)(lVar1,*param_2,param_2[2]);
      if (lVar3 != 0) {
        return lVar3;
      }
      FUN_0023a998(lVar1);
      return 0;
    }
    FUN_0023a180(auStack_60[0],iVar4);
  }
  return 0;
}

