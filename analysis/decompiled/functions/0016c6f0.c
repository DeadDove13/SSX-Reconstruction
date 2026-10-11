/* Ghidra pseudocode. PS2 address: 0016c6f0. Not validated source. */

void FUN_0016c6f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5
                 ,long param_6)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_14e0 [5200];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x10) == 0) {
    DAT_002c5b94 = FUN_0016eb38(param_1,0x358);
    DAT_002c5b8c = FUN_0016eb38(param_1,0x359);
    DAT_002c5b90 = FUN_0016eb38(param_1,0x35b);
    DAT_002c5b88 = FUN_0016eb38(param_1,0x35a);
  }
  FUN_0016eb08(param_1,0x35a);
  FUN_0016eb08(param_1,0x359);
  FUN_0016eb08(param_1,0x35b);
  FUN_0016eb08(param_1,0x358);
  FUN_0016eb08(param_1,0x161);
  FUN_0019a7f8(iVar3 + 0x18,param_3);
  if (param_4 == 0) {
    *(undefined2 *)(iVar3 + 0x418) = 0;
  }
  else {
    FUN_0019a7f8(iVar3 + 0x418,param_4);
  }
  if (param_5 == 0) {
    *(undefined2 *)(iVar3 + 0x498) = 0;
  }
  else {
    FUN_0019a7f8(iVar3 + 0x498,param_5);
  }
  FUN_0019aa08(auStack_14e0);
  FUN_0019ae30(auStack_14e0);
  FUN_0019af18(auStack_14e0,*(int *)(iVar3 + 0xb3c) + 0x400);
  FUN_0019af40(0xc2ca0000,0xc2400000,0x43630000,0x42540000,auStack_14e0);
  FUN_0019b0b8(0x3f800000,DAT_002c27e0,auStack_14e0);
  FUN_0019af58(auStack_14e0,iVar3 + 0x18);
  FUN_0019b0e0(auStack_14e0);
  lVar1 = FUN_0019b358(auStack_14e0);
  if ((lVar1 < 4) && (lVar1 = FUN_0019b388(auStack_14e0), lVar1 < 0xf0)) {
    FUN_0016eae0(param_1,0x348);
    FUN_0016eb08(param_1,0x324);
    if (param_6 == 0) {
      if (param_4 == 0) {
        FUN_0016eb08(param_1,0x161);
      }
      else {
        FUN_0016eae0(param_1,0x161);
        FUN_0016e100(param_1,0xffffffffffffffff);
        uStack_90 = 0;
        uStack_8c = 0x42ce0000;
        uStack_88 = 0x41700000;
        uStack_84 = 0;
        FUN_0016f538(param_1,0xffffffffffffffff,&uStack_90);
      }
      if (param_5 == 0) {
        FUN_0016eb08(param_1,0x169);
        goto LAB_0016cb40;
      }
      FUN_0016eae0(param_1,0x169);
      FUN_0016e100(param_1,0xffffffffffffffff);
      uStack_8c = 0x42fa0000;
      uStack_88 = 0x41700000;
    }
    else {
      if (param_4 == 0) {
        FUN_0016eb08(param_1,0x169);
      }
      else {
        FUN_0016eae0(param_1,0x169);
        FUN_0016e100(param_1,0xffffffffffffffff);
        uStack_90 = 0;
        uStack_8c = 0x42ce0000;
        uStack_88 = 0x41700000;
        uStack_84 = 0;
        FUN_0016f538(param_1,0xffffffffffffffff,&uStack_90);
      }
      if (param_5 == 0) {
LAB_0016ca64:
        FUN_0016eb08(param_1,0x161);
        goto LAB_0016cb40;
      }
      FUN_0016eae0(param_1,0x161);
      FUN_0016e100(param_1,0xffffffffffffffff);
      uStack_8c = 0x42fa0000;
      uStack_88 = 0x41700000;
    }
  }
  else {
    FUN_0016eb08(param_1,0x348);
    FUN_0016eae0(param_1,0x324);
    if (param_6 == 0) {
      if (param_4 == 0) {
        FUN_0016eb08(param_1,0x161);
      }
      else {
        FUN_0016eae0(param_1,0x161);
        FUN_0016e100(param_1,0xffffffffffffffff);
        uStack_90 = 0;
        uStack_8c = 0x42f80000;
        uStack_88 = 0xc2a00000;
        uStack_84 = 0;
        FUN_0016f538(param_1,0xffffffffffffffff,&uStack_90);
      }
      if (param_5 == 0) {
        FUN_0016eb08(param_1,0x169);
        goto LAB_0016cb40;
      }
      uVar2 = 0x169;
    }
    else {
      if (param_4 == 0) {
        FUN_0016eb08(param_1,0x169);
      }
      else {
        FUN_0016eae0(param_1,0x169);
        FUN_0016e100(param_1,0xffffffffffffffff);
        uStack_90 = 0;
        uStack_8c = 0x42f80000;
        uStack_88 = 0xc2a00000;
        uStack_84 = 0;
        FUN_0016f538(param_1,0xffffffffffffffff,&uStack_90);
      }
      if (param_5 == 0) goto LAB_0016ca64;
      uVar2 = 0x161;
    }
    FUN_0016eae0(param_1,uVar2);
    FUN_0016e100(param_1,0xffffffffffffffff);
    uStack_8c = 0x43120000;
    uStack_88 = 0xc2a00000;
  }
  uStack_90 = 0;
  uStack_84 = 0;
  FUN_0016f538(param_1,0xffffffffffffffff,&uStack_90);
LAB_0016cb40:
  *(undefined4 *)(iVar3 + 0x10) = 1;
  FUN_0019aa30(auStack_14e0,2);
  return;
}

