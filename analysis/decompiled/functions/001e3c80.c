/* Ghidra pseudocode. PS2 address: 001e3c80. Not validated source. */

void FUN_001e3c80(undefined8 param_1)

{
  undefined4 uVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  
  iVar6 = (int)param_1;
  if ((*(int *)(iVar6 + 0x434) != 0) || (*(int *)(iVar6 + 0x418) != 0)) {
    FUN_001e4340(param_1);
    fVar3 = DAT_002c37d4;
    uStack_150 = DAT_002c37b4;
    uStack_160 = 0x3f8000003f800000;
    uStack_158 = 0x3f8000003f800000;
    uStack_14c = 0x3f800000;
    uStack_148 = 0x3f800000;
    uStack_144 = 0;
    uStack_140 = CONCAT44(0x3f800000,DAT_002c37b8);
    uStack_130 = 0x3f8000003f000000;
    uStack_120 = 0x3f000000;
    uStack_118 = 0x3f800000;
    if (*(int *)(iVar6 + 0x42c) != 0) {
      uStack_160 = CONCAT44(DAT_002c37bc,0x3f800000);
      uStack_158 = CONCAT44(DAT_002c37bc,DAT_002c37bc);
      uStack_140 = CONCAT44(DAT_002c37bc,0x3f800000);
      uStack_120 = (ulong)DAT_002c37c0;
      uStack_118 = (ulong)DAT_002c37bc;
      uStack_110 = 0x3f000000;
      uStack_10c = DAT_002c37bc;
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_130 = CONCAT44(DAT_002c37bc,0x3f000000);
    }
    uStack_128 = 0;
    uStack_138 = 0;
    fVar15 = (float)*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x2c);
    if ((int)*(uint *)(iVar6 + 0x11c) < 0) {
      fVar8 = *(float *)(iVar6 + 0x10c);
    }
    else {
      fVar8 = *(float *)(iVar6 + 0x10c);
    }
    fVar12 = (float)*(uint *)(iVar6 + 0x11c);
    fVar11 = *(float *)(iVar6 + 0xf0) * DAT_002c37c4 + DAT_002c37d0;
    fVar14 = fVar8 * DAT_002c37c8 - DAT_002c37cc;
    fVar8 = DAT_002c37c8;
    FUN_0011ed48(0x295e90,3);
    fVar16 = fVar15 / fVar12;
    FUN_00176e38(0x28ad30,&uStack_160);
    FUN_001a9ca0(fVar14,fVar11,fVar3,0x41100000,param_1,1);
    FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
    iVar7 = 1;
    if ((*(int *)(iVar6 + 0x438) != 0) && (1 < **(int **)(iVar6 + 0x364))) {
      uVar13 = 0;
      uVar1 = *(undefined4 *)(iVar6 + 0x364);
      while( true ) {
        iVar4 = FUN_0019a310(uVar1,iVar7);
        if ((*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x18) == 3) &&
           (iVar4 == *(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x2c))) {
          FUN_00176e38(0x28ad30,&uStack_150);
        }
        else {
          DAT_0028ad34 = 0x3f800000;
          DAT_0028ad30 = fVar8;
          DAT_0028ad38 = uVar13;
          DAT_0028ad3c = uVar13;
        }
        fVar9 = fVar11 - 6.0;
        iVar7 = iVar7 + 1;
        fVar10 = fVar14 + ((float)iVar4 / fVar12) * fVar3;
        FUN_0019fe18(fVar10,fVar9,fVar10,fVar11,0x28ad30);
        FUN_0019fe18(fVar10 + 1.0,fVar9,fVar10 + 1.0,fVar11,0x28ad30);
        if (**(int **)(iVar6 + 0x364) <= iVar7) break;
        uVar1 = *(undefined4 *)(iVar6 + 0x364);
      }
    }
    FUN_00176e38(0x28ad30,&uStack_120);
    fVar3 = DAT_002c37d8;
    iVar7 = 0;
    bVar2 = false;
    if (0 < *(int *)(iVar6 + 800)) {
      piVar5 = (int *)(iVar6 + 0x324);
      do {
        if ((int)*(uint *)(*(int *)*piVar5 + 0x38) < 0) {
          iVar4 = *piVar5;
        }
        else {
          iVar4 = *piVar5;
        }
        fVar8 = (float)*(uint *)(*(int *)*piVar5 + 0x38);
        fVar9 = (float)*(uint *)(iVar4 + 4);
        if ((float)*(uint *)(iVar6 + 0x11c) < fVar8 + fVar9) {
          fVar9 = (float)*(uint *)(iVar6 + 0x11c) - fVar8;
        }
        FUN_001a9ca0(fVar14 + (fVar8 / fVar12) * fVar3,fVar11,(fVar9 / fVar12) * fVar3,0x41100000,
                     param_1,1);
        if ((float)*(int *)(*(int *)*piVar5 + 0x38) == fVar15) {
          bVar2 = true;
        }
        iVar7 = iVar7 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar7 < *(int *)(iVar6 + 800));
    }
    if ((*(int *)(iVar6 + 0x438) != 0) && (*(int *)(iVar6 + 0x430) != 0)) {
      FUN_00176e38(0x28ad30,&uStack_130);
      FUN_001a9ca0(fVar14 + ((float)*(int *)(iVar6 + 0x3fc) / fVar12) * DAT_002c37dc,fVar11,
                   ((float)(*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x2c) - *(int *)(iVar6 + 0x3fc)
                           ) / fVar12) * DAT_002c37dc,0x41100000,param_1,1);
    }
    FUN_00176e38(0x28ad30,&uStack_160);
    FUN_001a9ca0(fVar14,fVar11,DAT_002c37e0,0x41100000,param_1,2);
    if (bVar2) {
      FUN_00176e38(0x28ad30,&uStack_150);
    }
    else {
      FUN_00176e38(0x28ad30,&uStack_140);
    }
    FUN_001a90b8((fVar14 + fVar16 * DAT_002c37e4) - 2.0,fVar11 - 4.0,0x40a00000,DAT_002c37e8,param_1
                 ,0x54,0);
    FUN_001e44f8(param_1);
  }
  return;
}

