/* Ghidra pseudocode. PS2 address: 001ad3f0. Not validated source. */

void FUN_001ad3f0(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  DAT_0028ad30 = 0x3f800000;
  iVar1 = *(int *)(DAT_002859e4 + 0x5c);
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  iVar2 = 0;
  DAT_0028ad3c = 0x3f800000;
  FUN_0011ed48(0x295e90,3);
  FUN_0011ecf8(0x295e90,1);
  uVar8 = DAT_002c3338;
  FUN_0011ed18(0x295e90,0xc);
  FUN_001aa360(*(float *)(param_1 + 0x2c0) + 45.0,*(undefined4 *)(param_1 + 0x2c4),
               *(float *)(param_1 + 0x2b8) - 90.0,*(undefined4 *)(param_1 + 700),
               *(undefined4 *)(param_1 + 0x174));
  fVar4 = (float)*(int *)(iVar1 + 0xc);
  fVar13 = fVar4 + 4.0;
  fVar3 = *(float *)(param_1 + 0x2c8);
  fVar6 = *(float *)(*(int *)(param_1 + 0x174) + 0xc4);
  fVar11 = *(float *)(*(int *)(param_1 + 0x174) + 0xc0) + 28.0;
  fVar12 = *(float *)(param_1 + 0x2c4) + 2.0 + 30.0 + 30.0 +
           (float)*(int *)(param_1 + 0x2cc) * fVar13;
  FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
  DAT_0028ad34 = DAT_002c333c;
  DAT_0028ad38 = DAT_002c3340;
  DAT_0028ad3c = DAT_002c3344;
  DAT_0028ad30 = uVar8;
  FUN_0019f6d8(fVar11 + 14.0,(fVar12 + -2.0) - 1.0,(fVar6 - fVar3) - 35.0,fVar4,0x28ad30);
  FUN_0011ed18(0x295e90,0xe);
  DAT_0028ad38 = DAT_002c334c;
  DAT_0028ad30 = 0x3f800000;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad3c = 0;
  FUN_001a90b8(fVar11,fVar12 + fVar4 * DAT_002c3348,0x3f800000,uVar8,
               *(undefined4 *)(param_1 + 0x174),0x65,0x20);
  fVar6 = *(float *)(param_1 + 0x2c4) + 30.0 + 30.0;
  fVar4 = ((*(float *)(param_1 + 0x2c0) + *(float *)(param_1 + 0x2b8)) - *(float *)(param_1 + 0x2c8)
          ) + 10.0;
  iVar1 = FUN_001a8df8(*(undefined4 *)(param_1 + 0x174),0x54);
  uVar8 = DAT_002c3354;
  fVar3 = fVar13 - *(float *)(iVar1 + 0xc) * DAT_002c3350;
  if (0 < *(int *)(param_1 + 0x2d0)) {
    fVar12 = 17.0;
    fVar11 = DAT_002c3350;
    do {
      iVar1 = param_1 + iVar2 * 0x18 + 0x2d4;
      if (*(int *)(iVar1 + 0x10) == 0) {
        DAT_0028ad30 = 0x3f800000;
        fVar9 = fVar6 + fVar3 * 0.5;
        fVar10 = fVar4 + fVar12;
        DAT_0028ad34 = 0x3f800000;
        fVar5 = (float)*(int *)(iVar1 + 8) / (float)*(int *)(iVar1 + 0xc);
        DAT_0028ad38 = uVar8;
        DAT_0028ad3c = uVar8;
        fVar7 = fVar5 * 170.0;
        FUN_001a90b8(fVar10,fVar9,fVar7,fVar11,*(undefined4 *)(param_1 + 0x174),0x54,0);
        DAT_0028ad30 = 0x3f800000;
        DAT_0028ad34 = 0x3f800000;
        DAT_0028ad38 = 0x3f800000;
        DAT_0028ad3c = 0x3f800000;
        FUN_001a90b8(fVar10 + fVar7,fVar9,(1.0 - fVar5) * 170.0,fVar11,
                     *(undefined4 *)(param_1 + 0x174),0x54,0);
        FUN_001a90b8(fVar4,fVar9,0x3f800000,fVar11,*(undefined4 *)(param_1 + 0x174),0x55,0);
        FUN_001a90b8(fVar4 + 170.0 + fVar12 + fVar12,fVar9,0x3f800000,fVar11,
                     *(undefined4 *)(param_1 + 0x174),0x55,0xb);
        iVar1 = *(int *)(param_1 + 0x2d0);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x2d0);
      }
      iVar2 = iVar2 + 1;
      fVar6 = fVar6 + fVar13;
    } while (iVar2 < iVar1);
  }
  return;
}

