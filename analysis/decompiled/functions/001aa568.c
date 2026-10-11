/* Ghidra pseudocode. PS2 address: 001aa568. Not validated source. */

void FUN_001aa568(undefined8 param_1,long param_2,undefined4 *param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  
  FUN_0011ed48(0x295e90,3);
  FUN_0011ecf8(0x295e90,1);
  DAT_0028ad3c = 0x3f800000;
  DAT_0028ad30 = 0x3f800000;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  iVar1 = *(int *)(DAT_002859e4 + 0x5c);
  lVar7 = 0;
  fVar17 = (float)*(int *)(iVar1 + 0xc) + 4.0;
  fVar10 = (float)param_4 * fVar17 + 60.0;
  if (param_2 != 0) {
    lVar7 = FUN_001a0a88(DAT_002c32ac,iVar1,param_2,0);
    fVar10 = fVar10 + 35.0;
  }
  fVar9 = (float)param_5;
  puVar6 = param_3;
  iVar5 = param_4;
  if (0 < param_4) {
    do {
      iVar5 = iVar5 + -1;
      lVar2 = FUN_001a0a88(0x3f800000,iVar1,*puVar6,0);
      if (lVar7 < lVar2) {
        lVar7 = lVar2;
      }
      puVar6 = puVar6 + 1;
    } while (iVar5 != 0);
  }
  fVar12 = (float)(int)lVar7 + 90.0;
  iVar5 = (int)param_1;
  *(float *)(iVar5 + 200) = fVar10;
  *(float *)(iVar5 + 0xc4) = fVar12;
  fVar14 = 240.0 - fVar10 * 0.5;
  fVar13 = 320.0 - fVar12 * 0.5;
  *(float *)(iVar5 + 0xbc) = fVar14;
  *(float *)(iVar5 + 0xc0) = fVar13;
  FUN_001aa360(fVar13 + 45.0,fVar14,fVar12 - 90.0,fVar10,param_1);
  iVar5 = DAT_002913c4;
  if (-1 < param_5) {
    iVar16 = *(int *)(iVar1 + 0xc);
    fVar10 = 25.0;
    fVar15 = fVar13 + 28.0;
    fVar9 = fVar14 + 30.0 + fVar9 * fVar17;
    if (param_2 != 0) {
      fVar9 = fVar9 + 30.0;
    }
    FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
    DAT_0028ad30 = DAT_002c32b0;
    DAT_0028ad34 = DAT_002c32b4;
    DAT_0028ad38 = DAT_002c32b8;
    DAT_0028ad3c = DAT_002c32bc;
    FUN_0019f6d8(fVar15 + 14.0,fVar9 + -2.0,(fVar12 - 25.0) - fVar10,(float)iVar16,0x28ad30);
    FUN_0011ed18(0x295e90,iVar5 + 1);
    DAT_0028ad3c = 0x3f800000;
    DAT_0028ad30 = 0x3f800000;
    DAT_0028ad34 = 0x3f800000;
    DAT_0028ad38 = 0x3f800000;
    uVar3 = FUN_00258948(fVar9);
    uVar4 = FUN_00258948((float)iVar16);
    uVar4 = FUN_00257580(uVar4,DAT_002b5738);
    uVar3 = FUN_002574c0(uVar3,uVar4);
    uVar8 = FUN_00257d50(uVar3);
    FUN_001a90b8(fVar15,uVar8,0x3f800000,0x3f800000,param_1,param_6,0x20);
  }
  uVar8 = DAT_002c32c0;
  fVar10 = 0.5;
  uVar11 = 0x3f800000;
  DAT_0028ad30 = 0x3f800000;
  fVar14 = fVar14 + 30.0;
  DAT_0028ad34 = 0x3f800000;
  fVar9 = fVar13 + fVar12 * 0.5;
  DAT_0028ad38 = 0x3f800000;
  DAT_0028ad3c = 0x3f800000;
  if (param_2 != 0) {
    iVar16 = FUN_001a0a88(DAT_002c32c0,iVar1,param_2,0);
    fVar12 = fVar14 - 4.0;
    fVar14 = fVar14 + 30.0;
    FUN_001a1578(uVar8,fVar9 - (float)iVar16 * fVar10,fVar12,iVar1,param_2);
  }
  iVar16 = 0;
  uVar8 = DAT_002c32c4;
  if (0 < param_4) {
    do {
      DAT_0028ad38 = uVar11;
      DAT_0028ad3c = uVar11;
      if (iVar16 == param_5) {
        DAT_0028ad3c = 0;
        DAT_0028ad38 = uVar8;
      }
      DAT_0028ad30 = uVar11;
      DAT_0028ad34 = uVar11;
      FUN_001a1368(fVar13 + 45.0,fVar14,iVar1,*param_3);
      iVar16 = iVar16 + 1;
      param_3 = param_3 + 1;
      fVar14 = fVar14 + fVar17;
    } while (iVar16 < param_4);
  }
  FUN_0011ed18(0x295e90,iVar5);
  return;
}

