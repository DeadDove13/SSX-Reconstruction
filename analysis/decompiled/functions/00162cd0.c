/* Ghidra pseudocode. PS2 address: 00162cd0. Not validated source. */

undefined8
FUN_00162cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  undefined4 auStack_290 [22];
  undefined1 auStack_238 [88];
  undefined1 auStack_1e0 [88];
  undefined1 auStack_188 [88];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_110;
  undefined1 auStack_10c [4];
  undefined4 *puStack_108;
  int iStack_104;
  undefined1 *puStack_100;
  int iStack_fc;
  undefined1 *puStack_f8;
  int iStack_f4;
  undefined1 *puStack_f0;
  undefined1 *puStack_ec;
  
  uVar10 = DAT_002c2650;
  iVar6 = (int)param_2;
  iStack_104 = 1;
  if (*(int *)(*(int *)(iVar6 + 0x24) + 300) < 2) {
    puVar7 = (undefined4 *)param_1;
    puVar7[3] = 0;
    uVar10 = DAT_002c264c;
    uVar8 = puVar7[3];
    *param_4 = 1;
    puVar7[6] = uVar10;
    puVar7[7] = 0x42c80000;
    puVar7[2] = uVar8;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[8] = 0;
    puVar7[0xc] = 0;
    puVar7[0x15] = 0;
    *puVar7 = uVar8;
    puVar7[1] = uVar8;
    return param_1;
  }
  puStack_f0 = auStack_238;
  puVar7 = auStack_290;
  *param_4 = 0;
  iVar4 = 3;
  puStack_f8 = auStack_1e0;
  puStack_ec = auStack_188;
  iStack_f4 = iVar6 + 0x10;
  puStack_108 = param_4;
  do {
    puVar7[3] = 0;
    iVar4 = iVar4 + -1;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = uVar10;
    puVar7[7] = 0x42c80000;
    puVar7[8] = 0;
    fStack_29c = 0.0;
    fStack_298 = 0.0;
    fStack_2a0 = 0.0;
    *puVar7 = 0;
    puVar7[0xc] = 0;
    puVar7[0x15] = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 0x16;
  } while (iVar4 != -1);
  puStack_100 = auStack_10c;
  iStack_fc = iStack_f4;
  do {
    iVar4 = 0;
    puVar7 = auStack_290;
    do {
      iVar5 = *(int *)(iVar6 + 4) + iVar4 + -1;
      if (-1 < iVar5) {
        if (iVar5 < *(int *)(*(int *)(iVar6 + 0x24) + 300)) {
          FUN_00160530(&fStack_130,*(int *)(iVar6 + 0x24) + (*(int *)(iVar6 + 4) + -1 + iVar4) * 0xf
                       ,0x2c4728,0x2c4730);
          uVar3 = FUN_00160570(&fStack_130);
          FUN_00160d98(uVar3,puVar7,param_3,1);
          uStack_110 = 0;
          uVar3 = FUN_00160580(&fStack_130);
          FUN_00163f68(uVar3,puVar7,param_3,1,&uStack_110,0,0);
          FUN_0015f350(&fStack_130,2);
        }
      }
      iVar4 = iVar4 + 1;
      puVar7 = puVar7 + 0x16;
    } while (iVar4 < 4);
    if (iStack_104 != 0) {
      iStack_104 = 0;
      FUN_00162648(*(undefined4 *)(iVar6 + 8),&uStack_120,param_2,auStack_290,puStack_f0,puStack_f8,
                   puStack_ec,puStack_100,puStack_100);
      *(undefined4 *)(iVar6 + 0x10) = uStack_120;
      *(undefined4 *)(iStack_fc + 4) = uStack_11c;
      *(undefined4 *)(iStack_fc + 8) = uStack_118;
    }
    iVar4 = iStack_f4;
    bVar2 = false;
    fVar14 = *(float *)(iVar6 + 0xc);
    bVar1 = false;
    fVar11 = *(float *)(iVar6 + 8) + fVar14;
    fVar15 = 0.0;
    while( true ) {
      if (1.0 < fVar11) {
        fVar11 = 1.0;
      }
      else if (fVar11 < 0.0) {
        fVar11 = 0.0;
      }
      fVar13 = ABS(fVar14);
      if (fVar13 < DAT_002c2654) break;
      FUN_00162648(fVar11,&fStack_130,param_2,auStack_290,puStack_f0,puStack_f8,puStack_ec,
                   auStack_10c,auStack_10c);
      fVar12 = *(float *)(iVar6 + 0x1c);
      fStack_2a0 = fStack_130;
      fStack_29c = fStack_12c;
      fStack_298 = fStack_128;
      if (fVar12 == 0.0) {
        fVar12 = *(float *)(*(int *)(iVar6 + 0x24) + 0x130);
      }
      fStack_12c = fStack_12c - *(float *)(iVar4 + 4);
      fStack_128 = fStack_128 - *(float *)(iVar4 + 8);
      fStack_130 = fStack_130 - *(float *)(iVar6 + 0x10);
      fVar9 = (float)FUN_0011ee88(&fStack_130,&fStack_130);
      fVar9 = SQRT(fVar9) - fVar12 / 60.0;
      if (ABS(fVar9) <= (fVar12 / 60.0) / 10.0) {
        bVar2 = true;
        goto LAB_001630e4;
      }
      if (0.0 < fVar9) {
        bVar1 = true;
        fVar14 = -fVar13 * 0.5;
      }
      else {
        if (1.0 <= fVar11) goto LAB_001630e4;
        if (bVar1) {
          fVar14 = ABS((fVar9 * fVar14) / (fVar9 - fVar15));
        }
      }
      fVar11 = fVar11 + fVar14;
      fVar15 = fVar9;
    }
    bVar2 = true;
LAB_001630e4:
    uVar10 = DAT_002c2658;
    if (!bVar2) {
      if (*(int *)(iVar6 + 4) < *(int *)(*(int *)(iVar6 + 0x24) + 300) + -2) {
        fVar11 = 0.0;
        *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
        *(undefined4 *)(iVar6 + 0xc) = uVar10;
        *(undefined4 *)(iVar6 + 8) = 0;
      }
      else {
        bVar2 = true;
        fVar11 = 1.0;
        *puStack_108 = 1;
      }
    }
  } while (!bVar2);
  *(float *)(iVar6 + 0x10) = fStack_2a0;
  *(float *)(iVar6 + 0xc) = fVar11 - *(float *)(iVar6 + 8);
  *(float *)(iVar6 + 8) = fVar11;
  iVar4 = *(int *)(iVar6 + 4);
  *(float *)(iStack_f4 + 8) = fStack_298;
  *(float *)(iStack_f4 + 4) = fStack_29c;
  if (iVar4 != 0) {
    if ((((*(int *)(*(int *)(iVar6 + 0x24) + 300) + -2 <= iVar4) &&
         (iVar6 = *(int *)(iVar6 + 0x20), iVar6 != 0)) && (-1 < iVar6)) &&
       ((iVar6 < 4 && (1 < iVar6)))) {
      fVar11 = (float)FUN_001624f8(0,0x3f800000,0x3f800000,0,fVar11,iVar4,param_2);
    }
    goto LAB_00163298;
  }
  iVar4 = *(int *)(iVar6 + 0x20);
  if (iVar4 == 1) {
LAB_001631d4:
    uVar10 = 0x3f800000;
    uVar8 = 0;
  }
  else {
    if (iVar4 < 2) goto LAB_00163298;
    if (iVar4 == 2) {
      if (2 < *(int *)(*(int *)(iVar6 + 0x24) + 300)) goto LAB_001631d4;
      uVar8 = 0;
      uVar10 = 0;
    }
    else {
      if ((iVar4 != 3) || (2 < *(int *)(*(int *)(iVar6 + 0x24) + 300))) goto LAB_00163298;
      uVar8 = 0x3f800000;
      uVar10 = 0;
    }
  }
  fVar11 = (float)FUN_001624f8(0,0x3f800000,uVar8,uVar10,fVar11);
LAB_00163298:
  FUN_00162938(fVar11,param_1,param_2,auStack_290,puStack_f0,puStack_f8,puStack_ec);
  return param_1;
}

