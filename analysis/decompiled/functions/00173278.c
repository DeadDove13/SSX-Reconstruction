/* Ghidra pseudocode. PS2 address: 00173278. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00173278(undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined8 param_5)

{
  int iVar1;
  int *piVar2;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined4 uStack_80;
  uint uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  
  piVar2 = (int *)param_2;
  if (piVar2[3] == 0) {
    uStack_80 = 0x3f800000;
    uStack_74 = 0x3f800000;
    uStack_78 = DAT_002c2840;
    uStack_7c = DAT_002c2840;
    uStack_90 = CONCAT44(DAT_002c2840,0x3f800000);
    uStack_88 = CONCAT44(0x3f800000,DAT_002c2840);
  }
  else {
    iVar1 = piVar2[4];
    if (iVar1 == 1) {
      uStack_90 = _DAT_00280f28;
      uStack_88 = _DAT_00280f30;
    }
    else if (iVar1 < 2) {
      if (iVar1 == 0) {
        uStack_80 = 0x3f800000;
        uStack_74 = 0x3f800000;
        uStack_78 = DAT_002c2838;
        uStack_7c = DAT_002c2838;
        uStack_90 = CONCAT44(DAT_002c2838,0x3f800000);
        uStack_88 = CONCAT44(0x3f800000,DAT_002c2838);
      }
    }
    else if (iVar1 == 2) {
      uStack_80 = 0x3f800000;
      uStack_78 = DAT_002c283c;
      uStack_7c = 0x3f800000;
      uStack_74 = 0;
      uStack_90 = 0x3f8000003f800000;
      uStack_88 = (ulong)DAT_002c283c;
    }
  }
  FUN_0011ed18(0x295e90,0xc);
  if (*piVar2 == 0) {
    FUN_00172f30(param_1,param_2,param_3,param_4 + -5,param_5,&uStack_90,piVar2[1],piVar2[6]);
    iVar1 = piVar2[3];
  }
  else {
    FUN_00172e10(param_1,param_2,param_3,param_4 + -5,param_5,&uStack_90,*piVar2,piVar2[6]);
    iVar1 = piVar2[3];
  }
  if ((iVar1 != 0) && (piVar2[5] != 0)) {
    FUN_0011ed18(0x295e90,0xb);
    FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
    FUN_0011ed48(0x295e90,3);
    FUN_00173148(param_4 + -100,(int)param_5 + -1,200,0x13);
  }
  return;
}

