/* Ghidra pseudocode. PS2 address: 001b25c8. Not validated source. */

void FUN_001b25c8(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_14d0 [5168];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  FUN_001ab960();
  uVar1 = *(undefined4 *)(DAT_002859e4 + 0x5c);
  if (*(short *)(param_1 + 0x44) != 0) {
    DAT_0028ad3c = 0x3f800000;
    DAT_0028ad30 = 0x3f800000;
    DAT_0028ad34 = 0x3f800000;
    DAT_0028ad38 = 0x3f800000;
    FUN_001a1578(DAT_002c33c0,*(undefined4 *)(param_1 + 0x104),0x42fa0000,uVar1,param_1 + 0x44);
  }
  FUN_0019aa08(auStack_14d0);
  FUN_0019af18(auStack_14d0,uVar1);
  FUN_0019ae30(auStack_14d0);
  FUN_0019b0b8(0x3f800000,0x3f800000,auStack_14d0);
  uStack_80 = 0x3f800000;
  uStack_74 = 0x3f800000;
  uStack_7c = 0x3f800000;
  uStack_78 = 0x3f800000;
  uStack_a0 = 0x3f8000003f800000;
  uStack_98 = 0x3f8000003f800000;
  FUN_0019af40(0x42c80000,0x43af0000,0x43dc0000,0x42c80000,auStack_14d0);
  FUN_0019af58(auStack_14d0,*(undefined4 *)(param_1 + 0x108));
  FUN_0019b0e0(auStack_14d0);
  FUN_0019ac28(auStack_14d0);
  if ((DAT_0027ba88 == 5) || (DAT_0027ba88 == 3)) {
    uVar2 = FUN_00234e80(DAT_002852fc,0x47);
    uVar3 = FUN_00234e80(DAT_002852fc,0x48);
    uVar4 = FUN_00234e80(DAT_002852fc,0x49);
    DAT_0028ad30 = 0x3f800000;
    DAT_0028ad3c = 0x3f800000;
    DAT_0028ad34 = 0x3f800000;
    DAT_0028ad38 = 0x3f800000;
    fVar7 = *(float *)(param_1 + 0x1d0) + 60.0;
    FUN_001a1368(fVar7,0x43360000,uVar1,uVar2);
    FUN_001a1368(fVar7,0x437c0000,uVar1,uVar3);
    FUN_001a1368(fVar7,0x43a10000,uVar1,uVar4);
    iVar5 = *(int *)(param_1 + 0x1cc);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x1cc);
  }
  if (iVar5 != 0) {
    fVar7 = 210.0;
    DAT_0028ad3c = 0x3f800000;
    param_1 = param_1 + 0x10c;
    DAT_0028ad30 = 0x3f800000;
    iVar5 = 2;
    DAT_0028ad34 = 0x3f800000;
    DAT_0028ad38 = 0x3f800000;
    fVar6 = 40.0;
    do {
      FUN_001a1368(DAT_002c33c4,fVar7,uVar1,param_1);
      fVar7 = fVar7 + fVar6;
      iVar5 = iVar5 + -1;
      param_1 = param_1 + 0x40;
    } while (-1 < iVar5);
  }
  FUN_0019aa30(auStack_14d0,2);
  return;
}

