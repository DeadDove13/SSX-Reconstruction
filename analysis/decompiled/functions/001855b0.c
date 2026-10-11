/* Ghidra pseudocode. PS2 address: 001855b0. Not validated source. */

void FUN_001855b0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  
  iVar4 = (int)param_1;
  iVar3 = iVar4 + 0xd00;
  FUN_0019af40(0x42e00000,0x42c00000,0x43d00000,(float)*(int *)(iVar4 + 0xc) * 4.0,iVar3);
  if (param_2 != 0) {
    FUN_0019af58(iVar3,param_2);
  }
  if (param_3 != 0) {
    FUN_0019af58(iVar3,param_3);
  }
  uVar7 = 0x3f800000;
  FUN_0019b358(iVar3);
  FUN_0011ed48(0x295e90,3);
  uStack_b0 = uVar7;
  uStack_ac = uVar7;
  uStack_a8 = uVar7;
  FUN_00168720(0x28ad30,&uStack_b0);
  FUN_0019aa58(iVar3);
  if (param_4 != 0) {
    fVar5 = (float)*(int *)(iVar4 + 0xc) * DAT_002c2998;
    iVar1 = FUN_001a0a88(uVar7,param_1,param_4,0);
    uVar6 = 0x3e800000;
    iVar3 = FUN_0019b358(iVar3);
    fVar8 = (float)(iVar3 + 1) * (float)*(int *)(iVar4 + 0xc) + 96.0;
    uStack_b0 = uVar7;
    uStack_ac = uVar7;
    uStack_a8 = uVar7;
    FUN_00168720(0x28ad30,&uStack_b0);
    FUN_001a10d8(320.0 - (float)iVar1 * 0.5,fVar8,param_1,param_4);
    fVar8 = fVar8 + fVar5;
    uVar2 = FUN_00234e80(DAT_002852fc,0x77);
    FUN_001a10d8(DAT_002c299c,fVar8,param_1,uVar2);
    uVar2 = FUN_00234e80(DAT_002852fc,0x78);
    FUN_001a10d8(DAT_002c29a0,fVar8,param_1,uVar2);
    FUN_0011ecd8(0x295e90,*(undefined4 *)(iVar4 + 0x38),1);
    uStack_b0 = uVar7;
    uStack_ac = uVar7;
    uStack_a8 = uVar7;
    FUN_00168720(0x28ad30,&uStack_b0);
    FUN_0019fb08(DAT_002c29a4,fVar8,0x41a00000,0x41a00000,0x3e280000,0x3e940000,0x3ec00000,uVar6,
                 0x28ad30);
    FUN_0019fb08(DAT_002c29a8,fVar8,0x41a00000,0x41a00000,0x3e280000,0x3e480000,0x3e900000,uVar6,
                 0x28ad30);
  }
  return;
}

