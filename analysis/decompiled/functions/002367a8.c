/* Ghidra pseudocode. PS2 address: 002367a8. Not validated source. */

long FUN_002367a8(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  undefined4 auStack_70 [4];
  
  lVar1 = FUN_00239fb0(*param_2,1,param_1,auStack_70);
  if (lVar1 != 0) {
    lVar1 = FUN_0023a448(*param_2,0xa90,param_2[2]);
    iVar4 = (int)param_1 + -1;
    if (lVar1 != 0) {
      FUN_0023a020(auStack_70[0],0,lVar1,0xa90,iVar4);
      lVar2 = FUN_00239d98(lVar1);
      if (lVar2 != 0) {
        uVar3 = FUN_00239df8(lVar1);
        lVar2 = lVar1;
        if (uVar3 < 0xa91) {
LAB_002368a4:
          FUN_0023a180(auStack_70[0],iVar4);
          return lVar2;
        }
        lVar2 = FUN_0023a448(*param_2,uVar3,param_2[2]);
        if (lVar2 != 0) {
          FUN_0023bac0(lVar2,lVar1,0xa90);
          FUN_0023a998(lVar1);
          FUN_0023a020(auStack_70[0],0xa90,(int)lVar2 + 0xa90,(int)uVar3 + -0xa90,iVar4);
          goto LAB_002368a4;
        }
      }
      FUN_0023a998(lVar1);
    }
    FUN_0023a180(auStack_70[0],(int)param_1 + -1);
  }
  return 0;
}

