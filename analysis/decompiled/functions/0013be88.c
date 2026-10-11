/* Ghidra pseudocode. PS2 address: 0013be88. Not validated source. */

void FUN_0013be88(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  uint *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined1 in_vf0 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  undefined4 auStack_ac [3];
  
  fVar10 = DAT_002c1ea0;
  iVar8 = (int)param_1;
  iVar5 = *(int *)(iVar8 + 0x30);
  iVar1 = *(int *)(*(int *)(iVar5 + 0x6cf4) + 8);
  puVar9 = (uint *)param_2;
  if ((iVar1 == 0x52) || (iVar1 == 0x45)) {
    iVar5 = *(int *)(iVar8 + 0x30);
    fVar14 = 0.0;
    auVar18 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0xd0));
    auVar19 = _lqc2(*(undefined1 (*) [16])(iVar5 + 0x110));
    auVar20 = _vaddbc(in_vf0,in_vf0);
    auVar18 = _vmul(auVar18,auVar19);
    _vaddabc(auVar18,auVar18);
    _vmaddabc(auVar20,auVar18);
    auVar18 = _vmaddbc(auVar20,auVar18);
    auVar18 = _qmfc2(auVar18._0_4_);
    if ((0.0 <= auVar18._0_4_) || ((*(int *)(iVar8 + 0x14) != 0 || (*(int *)(iVar5 + 0x344) == 2))))
    {
      FUN_00111e20(*(undefined4 *)(iVar8 + 0x30));
      uVar3 = DAT_002c1eb4;
      uVar13 = DAT_002c1eac;
      iVar5 = *(int *)(iVar8 + 0x30);
      if (0.0 < *(float *)(iVar5 + 0xd8)) {
        *(undefined4 *)(iVar5 + 0x188) = 0;
        *(undefined4 *)(iVar5 + 0x184) = uVar13;
      }
      else {
        fVar10 = *(float *)(iVar5 + 0x8308) - 0.25;
        if (0.0 < fVar10) {
          *(undefined4 *)(iVar5 + 0x184) = DAT_002c1eb0;
          *(float *)(iVar5 + 0x188) = 1.0 - fVar10 / (fVar10 + ABS(*(float *)(iVar5 + 0x8350)));
        }
        else {
          *(undefined4 *)(iVar5 + 0x188) = 0x3f800000;
          *(undefined4 *)(iVar5 + 0x184) = uVar3;
        }
      }
      uVar4 = *puVar9;
    }
    else {
      *(uint *)(iVar8 + 0x18) = *(uint *)(iVar8 + 0x18) ^ 1;
      *(uint *)(iVar5 + 0x144) = *(uint *)(iVar5 + 0x144) ^ 1;
      FUN_001129e8(fVar10,iVar5,iVar5 + 0x130);
      fVar12 = DAT_002c1ea8;
      iVar5 = *(int *)(*(int *)(iVar8 + 0x30) + 0x144);
      if (iVar5 != 0) {
        fVar14 = fVar10;
      }
      iVar1 = *(int *)(*(int *)(iVar8 + 0x30) + 0x6cf4);
      fVar11 = fVar14 * DAT_002c1ea4 + 0.5;
      fVar10 = (float)(int)fVar11;
      if (fVar11 < fVar10) {
        fVar10 = fVar10 - 1.0;
      }
      *(uint *)(iVar1 + 0xc) = (uint)(iVar5 != 0);
      *(float *)(iVar1 + 0x18) = fVar14 - fVar10 * fVar12;
      FUN_0014cd18(iVar1,0x54,0,5);
      uVar4 = *puVar9;
    }
  }
  else {
    *(undefined4 *)(iVar5 + 0x188) = 0;
    *(undefined4 *)(iVar5 + 0x180) = 0;
    *(undefined4 *)(iVar5 + 0x184) = 0;
    if (iVar1 == 0x54) {
      if ((*puVar9 & 0x100) == 0) {
        return;
      }
      FUN_00107070(DAT_002c1e9c);
      return;
    }
    if (iVar1 == 0x51) {
      FUN_00111e20();
      uVar4 = *puVar9;
    }
    else {
      uVar4 = *puVar9;
    }
  }
  bVar2 = false;
  if (((float)((int)(uVar4 << 0xc) >> 0x1a) / 31.0 != 0.0) ||
     ((float)((int)(uVar4 << 6) >> 0x1a) / 31.0 != 0.0)) {
    bVar2 = true;
  }
  uVar6 = FUN_00111670(*(undefined4 *)(iVar8 + 0x30),(int)uVar4 >> 9 & 1,(char)*puVar9);
  uVar6 = uVar6 ^ 1;
  if (uVar6 == 0) {
    fVar10 = *(float *)(iVar8 + 0x1c);
    if (fVar10 != 0.0) {
      fVar14 = -DAT_002c1f28;
      if ((fVar14 <= fVar10) && (fVar14 = DAT_002c1f28, fVar10 < DAT_002c1f28)) {
        fVar14 = fVar10;
      }
      FUN_00218128(fVar14 * 0.5,&fStack_b0,auStack_ac);
      fStack_cc = fStack_b0 * *(float *)(iVar8 + 0x20);
      iVar5 = *(int *)(iVar8 + 0x30);
      fStack_c8 = fStack_b0 * *(float *)(iVar8 + 0x24);
      fStack_c4 = fStack_b0 * *(float *)(iVar8 + 0x28);
      uStack_d0 = auStack_ac[0];
      FUN_0012f0f8(&uStack_c0,iVar5 + 0xf4,&uStack_d0);
      uVar13 = *(undefined4 *)(iVar8 + 0x30);
      *(undefined4 *)(iVar5 + 0xf8) = uStack_bc;
      *(undefined4 *)(iVar5 + 0xfc) = uStack_b8;
      *(undefined4 *)(iVar5 + 0x100) = uStack_b4;
      *(undefined4 *)(iVar5 + 0xf4) = uStack_c0;
      FUN_00112bd8(uVar13);
      iVar5 = *(int *)(iVar8 + 0x30);
      *(float *)(iVar8 + 0x1c) = *(float *)(iVar8 + 0x1c) - fVar14;
      *(undefined4 *)(iVar5 + 0x188) = 0;
      *(undefined4 *)(iVar5 + 0x180) = 0;
      *(undefined4 *)(iVar5 + 0x184) = 0;
    }
    goto LAB_0013c7a4;
  }
  FUN_00111af8(*(undefined4 *)(iVar8 + 0x30),(int)*puVar9 >> 0xb & 1,(int)*puVar9 >> 0xc & 1);
  if (*(int *)(iVar8 + 0x10) == 0) {
    if (*(int *)(iVar8 + 0x14) == 0) {
      FUN_0014cd18(*(undefined4 *)(*(int *)(iVar8 + 0x30) + 0x6cf4),0x51,0,5);
      goto LAB_0013c1e4;
    }
    uVar4 = *puVar9;
  }
  else {
    if (bVar2) {
      FUN_0014cd18(*(undefined4 *)(*(int *)(iVar8 + 0x30) + 0x6cf4),0x51,0,5);
      *(undefined4 *)(iVar8 + 0x10) = 0;
    }
    else {
      uVar6 = 0;
    }
LAB_0013c1e4:
    uVar4 = *puVar9;
  }
  if ((uVar4 & 0x400) == 0) {
    fVar10 = (float)((int)(uVar4 << 4) >> 0x1e);
    iVar5 = (int)(uVar4 << 2) >> 0x1e;
    if ((fVar10 == 0.0) && ((float)iVar5 == 0.0)) goto LAB_0013c7a4;
    fVar14 = (float)iVar5;
  }
  else {
    fVar14 = (float)((int)(uVar4 << 6) >> 0x1a) / 31.0;
    fVar10 = (float)((int)(uVar4 << 0xc) >> 0x1a) / 31.0;
  }
  puVar17 = (undefined *)-fVar14;
  if ((fVar10 == 0.0) && ((float)puVar17 == 0.0)) {
LAB_0013c7a4:
    *(int *)(iVar8 + 0x14) = (int)uVar6;
    if ((!bVar2) && (*(float *)(*(int *)(iVar8 + 0x30) + 0x8308) < 0.25)) {
      uVar6 = 0;
    }
    FUN_0013c838(param_1,param_2,uVar6);
    if ((*puVar9 & 0x100) != 0) {
      FUN_00107070(DAT_002c1f2c,*(undefined4 *)(iVar8 + 0x30));
    }
    return;
  }
  fVar14 = ABS(fVar10);
  puVar15 = (undefined *)ABS((float)puVar17);
  if (fVar14 == 0.0) {
    if (((float)puVar15 != 0.0) && (bVar2 = (float)puVar15 < 0.0, puVar15 = DAT_002c1ebc, bVar2)) {
      puVar15 = PTR_DAT_002c1eb8;
    }
  }
  else {
    puVar16 = puVar15;
    puVar15 = (undefined *)FUN_00218510((float)puVar15 / fVar14);
    if (fVar14 < 0.0) {
      if (0.0 < (float)puVar16) {
        puVar15 = (undefined *)((float)puVar15 + DAT_002c1ec0);
      }
      else {
        puVar15 = (undefined *)((float)puVar15 - DAT_002c1ec4);
      }
    }
  }
  if (DAT_002c1ec8 < (float)puVar15) {
    fVar10 = 0.0;
    iVar5 = *(int *)(iVar8 + 0x30);
  }
  else {
    iVar5 = *(int *)(iVar8 + 0x30);
    if ((float)puVar15 < DAT_002c1ecc) {
      puVar17 = (undefined *)0x0;
    }
  }
  if (*(int *)(iVar5 + 0x144) != 0) {
    puVar17 = (undefined *)-(float)puVar17;
  }
  fVar12 = (float)*(byte *)(*(int *)(iVar5 + 0x394) + 0x1a) * DAT_002c1ed0 * DAT_002c1ed4 +
           DAT_002c1ed8;
  fVar14 = fVar12 * (float)puVar17 * DAT_002c1edc;
  fVar12 = fVar12 * fVar10 * DAT_002c1edc;
  if (*(int *)(iVar5 + 0x144) != 0) {
    fVar14 = -fVar14;
  }
  iVar1 = *(int *)(iVar5 + 0x8584);
  *(float *)(iVar1 + 0x780) = fVar14;
  *(float *)(iVar1 + 0x77c) = fVar12;
  *(undefined4 *)(*(int *)(iVar5 + 0x8584) + 0x7a0) = 1;
  if (*(int *)(iVar5 + 0x144) == 0) {
    puVar15 = puVar17;
    if (fVar10 == 0.0) goto joined_r0x0013c474;
    puVar15 = (undefined *)FUN_00218510((float)puVar17 / fVar10);
    if (fVar10 < 0.0) {
      if ((float)puVar17 <= 0.0) goto LAB_0013c4cc;
LAB_0013c4c0:
      puVar15 = (undefined *)((float)puVar15 + DAT_002c1ee8);
    }
  }
  else {
    fVar10 = -fVar10;
    puVar17 = (undefined *)-(float)puVar17;
    puVar15 = puVar17;
    if (fVar10 == 0.0) {
joined_r0x0013c474:
      if (((float)puVar15 != 0.0) && (bVar2 = (float)puVar15 < 0.0, puVar15 = DAT_002c1ee4, bVar2))
      {
        puVar15 = PTR_DAT_002c1ee0;
      }
    }
    else {
      puVar15 = (undefined *)FUN_00218510((float)puVar17 / fVar10);
      if (fVar10 < 0.0) {
        if (0.0 < (float)puVar17) goto LAB_0013c4c0;
LAB_0013c4cc:
        puVar15 = (undefined *)((float)puVar15 - DAT_002c1eec);
      }
    }
  }
  if ((float)puVar15 <= DAT_002c1ef0) {
    if ((float)puVar15 < DAT_002c1ef4) {
      iVar5 = *(int *)(iVar8 + 0x30);
      goto LAB_0013c500;
    }
    if (((float)puVar15 <= DAT_002c1ef8) || (uVar7 = 0x58, DAT_002c1efc <= (float)puVar15)) {
      if (((float)puVar15 <= DAT_002c1f00) || (uVar7 = 0x56, DAT_002c1f04 <= (float)puVar15)) {
        if (((float)puVar15 <= 0.0) || (uVar7 = 0x57, DAT_002c1f08 <= (float)puVar15)) {
          if (((float)puVar15 <= DAT_002c1f0c) || (uVar7 = 0x5b, DAT_002c1f10 <= (float)puVar15)) {
            if (((float)puVar15 <= (float)PTR_DAT_002c1f14) || (uVar7 = 0x59, 0.0 <= (float)puVar15)
               ) {
              if (((float)puVar15 <= DAT_002c1f18) || (uVar7 = 0x55, DAT_002c1f1c <= (float)puVar15)
                 ) {
                if (DAT_002c1f20 < (float)puVar15) {
                  if ((float)puVar15 < (float)PTR_DAT_002c1f24) {
                    FUN_0014cd18(*(undefined4 *)(*(int *)(iVar8 + 0x30) + 0x6cf4),0x5a,0,5);
                  }
                  iVar5 = *(int *)(iVar8 + 0x30);
                }
                else {
                  iVar5 = *(int *)(iVar8 + 0x30);
                }
                goto LAB_0013c684;
              }
              iVar5 = *(int *)(iVar8 + 0x30);
            }
            else {
              iVar5 = *(int *)(iVar8 + 0x30);
            }
          }
          else {
            iVar5 = *(int *)(iVar8 + 0x30);
          }
        }
        else {
          iVar5 = *(int *)(iVar8 + 0x30);
        }
      }
      else {
        iVar5 = *(int *)(iVar8 + 0x30);
      }
    }
    else {
      iVar5 = *(int *)(iVar8 + 0x30);
    }
  }
  else {
    iVar5 = *(int *)(iVar8 + 0x30);
LAB_0013c500:
    uVar7 = 0x5c;
  }
  FUN_0014cd18(*(undefined4 *)(iVar5 + 0x6cf4),uVar7,0,5);
  iVar5 = *(int *)(iVar8 + 0x30);
LAB_0013c684:
  uVar13 = FUN_001374f0(iVar5 + 0x8370,*(undefined4 *)(iVar5 + 0x144));
  FUN_00107cb0(uVar13,*(undefined4 *)(iVar8 + 0x30));
  FUN_0010b330(*(undefined4 *)(iVar8 + 0x30),0x10);
  return;
}

