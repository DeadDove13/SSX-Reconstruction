/* Ghidra pseudocode. PS2 address: 001b5750. Not validated source. */

void FUN_001b5750(int param_1,long param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_1520 [5152];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  
  FUN_0011ed18(0x295e90,0x12);
  iVar1 = *(int *)(DAT_002859e4 + 0x5c);
  iVar3 = FUN_001a0a88(0x3f800000,iVar1,param_2,0);
  fVar7 = (float)iVar3;
  if (fVar7 < 200.0) {
    fVar7 = 200.0;
  }
  else if ((384.0 < fVar7) && (bVar2 = 512.0 < fVar7, fVar7 = 256.0, bVar2)) {
    fVar7 = 384.0;
  }
  fVar7 = fVar7 + 10.0;
  fVar9 = 180.0;
  fVar8 = 320.0 - fVar7 * 0.5;
  fVar11 = fVar8 + fVar7 * 0.5;
  FUN_0019aa08(auStack_1520);
  FUN_0019af18(auStack_1520,iVar1);
  FUN_0019af40(fVar8,fVar9,fVar7,0x42f00000,auStack_1520);
  uStack_fc = 0;
  uStack_100 = 1;
  if (param_2 != 0) {
    FUN_0019af58(auStack_1520,param_2);
  }
  iVar3 = FUN_0019b358(auStack_1520);
  DAT_0028ad3c = 0x3f800000;
  fVar10 = ((float)iVar3 + 4.0) * (float)*(int *)(iVar1 + 0xc);
  DAT_0028ad30 = 0x3f800000;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  FUN_001a9ae0(fVar8 - 30.0,fVar9 - (float)*(int *)(iVar1 + 0xc) * 1.5,fVar7 + 60.0,fVar10,
               *(undefined4 *)(param_1 + 0x174));
  FUN_0011ed18(0x295e90,0x13);
  FUN_0011ed48(0x295e90,2);
  FUN_0019aa58(auStack_1520);
  uVar4 = 0x58;
  if (param_5 == 0) {
    uVar4 = 0x57;
    uVar5 = 0x58;
  }
  else {
    uVar5 = 0x57;
  }
  if (param_3 == 0) {
    if (param_4 == 0) goto LAB_001b5b84;
  }
  else if (param_4 != 0) {
    fVar8 = 24.0;
    iVar3 = FUN_001a0a88(0x3f800000,iVar1,param_4,0);
    fVar12 = fVar7 * DAT_002c3468;
    fVar6 = fVar11 - fVar7 * DAT_002c346c;
    fVar11 = ((fVar11 - ((fVar11 + fVar12 + fVar8 + (float)iVar3) - fVar6) * 0.5) - fVar6) + fVar11;
    fVar6 = fVar11 - fVar7 * DAT_002c346c;
    fVar9 = (fVar9 + fVar10) - (float)*(int *)(iVar1 + 0xc) * 3.5;
    fVar7 = fVar9 + 1.0;
    FUN_001a90b8(fVar6,fVar9,0x3f800000,0x3f800000,*(undefined4 *)(param_1 + 0x174),uVar4,0);
    DAT_0028ad30 = 0x3f800000;
    fVar11 = fVar11 + fVar12;
    DAT_0028ad34 = 0x3f800000;
    DAT_0028ad38 = 0x3f800000;
    DAT_0028ad3c = 0x3f800000;
    FUN_001a1368(fVar6 + fVar8,fVar7,iVar1,param_3);
    FUN_001a90b8(fVar11,fVar9,0x3f800000,0x3f800000,*(undefined4 *)(param_1 + 0x174),uVar5,0);
    DAT_0028ad3c = 0x3f800000;
    DAT_0028ad30 = 0x3f800000;
    DAT_0028ad34 = 0x3f800000;
    DAT_0028ad38 = 0x3f800000;
    FUN_001a1368(fVar11 + fVar8,fVar7,iVar1,param_4);
    goto LAB_001b5b84;
  }
  if (param_3 == 0) {
    param_3 = param_4;
  }
  fVar7 = 24.0;
  iVar3 = FUN_001a0a88(0x3f800000,iVar1,param_3,0);
  fVar9 = (fVar9 + fVar10) - (float)*(int *)(iVar1 + 0xc) * 3.5;
  fVar11 = fVar11 - ((float)iVar3 + fVar7) * 0.5;
  FUN_001a90b8(fVar11,fVar9,0x3f800000,0x3f800000,*(undefined4 *)(param_1 + 0x174),uVar4,0);
  DAT_0028ad30 = 0x3f800000;
  DAT_0028ad3c = 0x3f800000;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  FUN_001a1368(fVar11 + fVar7,fVar9 + 1.0,iVar1,param_3);
LAB_001b5b84:
  FUN_0019aa30(auStack_1520,2);
  return;
}

