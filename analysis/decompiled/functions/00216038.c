/* Ghidra pseudocode. PS2 address: 00216038. Not validated source. */

undefined8 FUN_00216038(long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  iVar4 = 0;
  lVar3 = 0;
  if (param_4 != 0) {
    iVar4 = *(int *)param_4;
  }
  lVar1 = FUN_0023a400(0x31ec);
  if (lVar1 == 0) {
    return 0;
  }
  if (iVar4 == 1) {
    lVar3 = FUN_0023a400(param_2);
  }
  else {
    uStack_a0 = (undefined4)param_1;
    if ((iVar4 < 2) || (iVar4 != 2)) goto LAB_002160f8;
    lVar3 = FUN_0023a400(param_2);
    FUN_002144f0(param_1,lVar3,param_2);
    param_1 = lVar3;
  }
  FUN_002144f0(param_1,lVar3,param_2);
  uStack_a0 = (undefined4)lVar3;
LAB_002160f8:
  uStack_9c = (undefined4)param_2;
  uStack_90 = param_3;
  uStack_8c = uStack_9c;
  uVar2 = FUN_00215e98(lVar1,&uStack_a0,&uStack_90,param_2,iVar4);
  if (lVar3 != 0) {
    FUN_0023a428(lVar3);
  }
  FUN_0023a428(lVar1);
  return uVar2;
}

