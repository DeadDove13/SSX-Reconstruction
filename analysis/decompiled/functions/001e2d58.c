/* Ghidra pseudocode. PS2 address: 001e2d58. Not validated source. */

void FUN_001e2d58(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [4];
  undefined1 auStack_98 [4];
  undefined1 auStack_94 [4];
  int aiStack_90 [4];
  
  fVar10 = 1.0;
  if (*(int *)(param_1 + 0x42c) != 0) {
    fVar10 = 0.5;
  }
  FUN_0011ed48(0x295e90,3);
  uStack_d0 = 0x3f8000003f800000;
  uStack_c8 = 0x3f8000003f800000;
  uStack_c0 = 0x3f8000003f800000;
  uStack_b8 = CONCAT44(DAT_002c3758,DAT_002c3754);
  if (*(int *)(param_1 + 0x42c) != 0) {
    uStack_d0 = CONCAT44(DAT_002c375c,0x3f000000);
    uStack_c8 = CONCAT44(DAT_002c375c,DAT_002c375c);
    uStack_b0 = 0x3f000000;
    uStack_a8 = DAT_002c375c;
    uStack_ac = DAT_002c375c;
    uStack_a4 = 0;
    uStack_c0 = CONCAT44(DAT_002c375c,0x3f000000);
    uStack_b8 = (ulong)DAT_002c375c;
  }
  FUN_00176e38(0x28ad30);
  FUN_001a1578(DAT_002c3760,0x41a00000,0x41a00000,*(undefined4 *)(param_1 + 0xec),param_1 + 0x368);
  if ((*(int *)(param_1 + 0x434) != 0) || (*(int *)(param_1 + 0x418) != 0)) {
    uVar2 = FUN_0015f828();
    switch(uVar2) {
    case 1:
      lVar6 = 0xd8;
      break;
    case 2:
      lVar6 = 0xd9;
      break;
    case 3:
      lVar6 = 0xd1;
      break;
    default:
      lVar6 = 0xd3;
      break;
    case 5:
      lVar6 = 0xcf;
      break;
    case 6:
      lVar6 = 0xd0;
      break;
    case 7:
      lVar6 = 0xd2;
      break;
    case 8:
      lVar6 = 0xda;
      break;
    case 10:
      lVar6 = -1;
    }
    FUN_00176e38(0x28ad30,&uStack_d0);
    fVar8 = *(float *)(param_1 + 0xfc) + 20.0;
    fVar7 = *(float *)(param_1 + 0xf0) - 10.0;
    if (lVar6 == -1) {
      FUN_001a0840(0x3f800000,*(undefined4 *)(param_1 + 0xec),0x2c5388,0);
      FUN_001a1080(fVar8,fVar7,*(undefined4 *)(param_1 + 0xec),0x2c5388);
    }
    else {
      uVar5 = FUN_00234e80(DAT_002852fc,lVar6);
      FUN_001a0a88(0x3f800000,*(undefined4 *)(param_1 + 0xec),uVar5,0);
      uVar5 = FUN_00234e80(DAT_002852fc,lVar6);
      FUN_001a10d8(fVar8,fVar7,*(undefined4 *)(param_1 + 0xec),uVar5);
    }
    aiStack_90[0] = 0;
    FUN_0015fae0(auStack_a0,auStack_9c,auStack_98,auStack_94,aiStack_90);
    fVar8 = *(float *)(param_1 + 0x100);
    iVar4 = aiStack_90[0] * 0x68;
    iVar3 = FUN_001a0840(0x3f800000,*(undefined4 *)(param_1 + 0xec),&DAT_0027b818 + iVar4,0);
    FUN_001a1080((fVar8 - 36.0) - (float)iVar3,fVar7,*(undefined4 *)(param_1 + 0xec),
                 &DAT_0027b818 + iVar4);
  }
  if (*(int *)(param_1 + 0x430) != 0) {
    DAT_0028ad34 = 0x3f800000;
    DAT_0028ad3c = 0;
    DAT_0028ad30 = 1.0;
    DAT_0028ad38 = 0;
    FUN_001a1260((*(float *)(param_1 + 0xfc) + *(float *)(param_1 + 0x104)) - 80.0,
                 *(float *)(param_1 + 0xf0) - 38.0,*(undefined4 *)(DAT_002859e4 + 0x58),0x2c5390);
  }
  if (0.0 < *(float *)(param_1 + 0x408)) {
    DAT_0028ad3c = 0;
    DAT_0028ad34 = 0x3f800000;
    DAT_0028ad38 = 0;
    DAT_0028ad30 = *(float *)(param_1 + 0x408);
    uVar5 = FUN_00234e80(DAT_002852fc,*(undefined4 *)(param_1 + 0x410));
    iVar4 = FUN_001a0a88(0x3f800000,*(undefined4 *)(param_1 + 0xec),uVar5,0);
    fVar9 = *(float *)(param_1 + 0xfc);
    fVar7 = *(float *)(param_1 + 0x100);
    fVar8 = *(float *)(param_1 + 0xf0) - 42.0;
    uVar5 = FUN_00234e80(DAT_002852fc,*(undefined4 *)(param_1 + 0x410));
    FUN_001a10d8((fVar9 + (fVar7 - fVar9) * 0.5) - (float)iVar4 * 0.5,fVar8,
                 *(undefined4 *)(param_1 + 0xec),uVar5);
  }
  if (*(int *)(param_1 + 0x434) == 0) {
    FUN_00176e38(0x28ad30,&uStack_d0);
    if (*(int *)(param_1 + 0x418) == *(int *)(param_1 + 0x41c)) {
      if (*(int *)(param_1 + 0x438) == 0) {
        fVar8 = *(float *)(param_1 + 0xf0);
        fVar7 = *(float *)(param_1 + 0xfc) + 70.0;
        uVar5 = FUN_00234e80(DAT_002852fc,0xd5);
        FUN_001a1368(fVar7,fVar8 - 39.0,*(undefined4 *)(param_1 + 0xec),uVar5);
      }
    }
    else {
      fVar8 = *(float *)(param_1 + 0xf0);
      fVar7 = *(float *)(param_1 + 0xfc) + 70.0;
      uVar5 = FUN_00234e80(DAT_002852fc,0xd4);
      FUN_001a1368(fVar7,fVar8 - 39.0,*(undefined4 *)(param_1 + 0xec),uVar5);
    }
  }
  iVar4 = *(int *)(DAT_002859e4 + 0x38);
  bVar1 = false;
  if (*(int *)(iVar4 + 0x18) != 0 && *(int *)(iVar4 + 0x18) < 10) {
    bVar1 = *(int *)(iVar4 + 0x2c) == *(int *)(iVar4 + 0x28);
  }
  if (bVar1) {
    uVar2 = *(undefined4 *)(DAT_002859e4 + 0x5c);
    uVar5 = FUN_00234e80(DAT_002852fc,0xe0);
    iVar4 = FUN_001a0a88(0x3f800000,uVar2,uVar5,0);
    DAT_0028ad3c = 0x3f800000;
    DAT_0028ad34 = 0x3f800000;
    fVar7 = 320.0 - (float)iVar4 * 0.5;
    DAT_0028ad38 = 0x3f800000;
    fVar8 = *(float *)(param_1 + 0xf0);
    uVar2 = *(undefined4 *)(DAT_002859e4 + 0x5c);
    DAT_0028ad30 = fVar10;
    uVar5 = FUN_00234e80(DAT_002852fc,0xe0);
    FUN_001a1368(fVar7,fVar8 - 60.0,uVar2,uVar5);
  }
  return;
}

