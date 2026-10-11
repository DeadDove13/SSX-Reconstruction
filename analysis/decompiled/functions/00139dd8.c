/* Ghidra pseudocode. PS2 address: 00139dd8. Not validated source. */

void FUN_00139dd8(undefined8 param_1,uint *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 in_vf0 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  uVar3 = DAT_002c1d64;
  uVar2 = DAT_002c1d60;
  iVar7 = (int)param_1;
  if ((*param_2 & 4) == 0) {
    if (*(int *)(iVar7 + 0xc) != 0) {
      iVar5 = *(int *)(iVar7 + 0x10);
      goto LAB_00139e2c;
    }
    iVar5 = *(int *)(iVar7 + 0x10);
    if (-1 < *(int *)(iVar5 + 0x348)) {
      iVar5 = *(int *)(iVar7 + 0x10);
      goto LAB_00139e2c;
    }
    if (*(int *)(iVar7 + 8) == 0) {
      if ((*param_2 & 2) == 0) goto LAB_00139ef0;
      uVar6 = *param_2;
    }
    else {
      if (*(float *)(iVar5 + 0x198) == 1.0) {
LAB_00139ef0:
        *(undefined4 *)(iVar5 + 0x1a0) = 0;
        *(undefined4 *)(iVar5 + 0x19c) = uVar3;
        fVar8 = DAT_002c1d68;
        fVar9 = ABS(*(float *)(iVar5 + 0x1b0));
        bVar1 = fVar9 < DAT_002c1d68;
        *(undefined4 *)(iVar5 + 0x158) = *(undefined4 *)(iVar5 + 0x198);
        puVar11 = (undefined *)ABS(*(float *)(iVar5 + 0x1bc));
        if (bVar1) {
          *(undefined4 *)(iVar5 + 0x1b8) = 0;
          *(undefined4 *)(iVar5 + 0x1b0) = 0;
          *(undefined4 *)(iVar5 + 0x1b4) = 0;
          fVar9 = *(float *)(iVar5 + 0x1b4);
        }
        if ((float)puVar11 < fVar8) {
          *(undefined4 *)(iVar5 + 0x1c4) = 0;
          *(undefined4 *)(iVar5 + 0x1bc) = 0;
          *(undefined4 *)(iVar5 + 0x1c0) = 0;
          puVar11 = *(undefined **)(iVar5 + 0x1c0);
        }
        fVar8 = 0.0;
        if ((fVar9 == 0.0) && ((float)puVar11 == 0.0)) {
          iVar5 = *(int *)(iVar7 + 0x10);
          goto LAB_0013a040;
        }
        if (fVar9 == 0.0) {
          if (((float)puVar11 != 0.0) &&
             (bVar1 = (float)puVar11 < 0.0, puVar11 = DAT_002c1d70, bVar1)) {
            puVar11 = PTR_DAT_002c1d6c;
          }
        }
        else {
          puVar10 = (undefined *)FUN_00218510((float)puVar11 / fVar9);
          if (fVar9 < fVar8) {
            if (fVar8 < (float)puVar11) {
              puVar10 = (undefined *)((float)puVar10 + DAT_002c1d74);
            }
            else {
              puVar10 = (undefined *)((float)puVar10 - DAT_002c1d78);
            }
          }
          iVar5 = *(int *)(iVar7 + 0x10);
          puVar11 = puVar10;
        }
        iVar4 = iVar5 + 0x1b0;
        if (DAT_002c1d7c < (float)puVar11) {
          *(undefined4 *)(iVar5 + 0x1b8) = 0;
          *(undefined4 *)(iVar5 + 0x1b0) = 0;
LAB_0013a038:
          *(undefined4 *)(iVar4 + 4) = 0;
        }
        else {
          iVar4 = iVar5 + 0x1bc;
          if ((float)puVar11 < DAT_002c1d80) {
            *(undefined4 *)(iVar5 + 0x1c4) = 0;
            *(undefined4 *)(iVar5 + 0x1bc) = 0;
            goto LAB_0013a038;
          }
        }
        iVar5 = *(int *)(iVar7 + 0x10);
LAB_0013a040:
        FUN_001504a8(*(undefined4 *)(iVar5 + 0x6cf4));
        FUN_0010b330(*(undefined4 *)(iVar7 + 0x10),10);
        return;
      }
      uVar6 = *param_2;
    }
    FUN_001099f0(*(undefined4 *)(iVar7 + 0x10),(int)uVar6 >> 3 & 1,0);
    FUN_001112f8(0x3f800000,*(undefined4 *)(iVar7 + 0x10));
    fVar8 = (float)((int)(*param_2 << 10) >> 0x1a) / 31.0;
    if (fVar8 < -0.5) {
      fVar8 = -0.5;
    }
    else if (0.5 < fVar8) {
      fVar8 = 0.5;
    }
    auVar12 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar7 + 0x10) + 0xd0));
    auVar13 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar7 + 0x10) + 0x110));
    auVar14 = _vaddbc(in_vf0,in_vf0);
    auVar12 = _vmul(auVar12,auVar13);
    _vaddabc(auVar12,auVar12);
    _vmaddabc(auVar14,auVar12);
    auVar12 = _vmaddbc(auVar14,auVar12);
    auVar12 = _qmfc2(auVar12._0_4_);
    if (0.0 < auVar12._0_4_) {
      FUN_001110f0();
      uVar6 = *param_2;
    }
    else if (fVar8 == 0.0) {
      uVar6 = *param_2;
    }
    else {
      *(undefined4 *)(iVar7 + 0xc) = 1;
      uVar6 = *param_2;
    }
    uVar2 = DAT_002c1d84;
    fVar8 = 31.0;
    FUN_0013a270((float)((int)(uVar6 << 0x16) >> 0x1a) / 31.0,DAT_002c1d84,param_1,0,
                 *(int *)(iVar7 + 0x10) + 0x1b0);
    FUN_0013a270((float)((int)(*param_2 << 0x10) >> 0x1a) / fVar8,uVar2,param_1,
                 *(uint *)(*(int *)(iVar7 + 0x10) + 0x144) ^ 1,*(int *)(iVar7 + 0x10) + 0x1bc);
  }
  else {
    iVar5 = *(int *)(iVar7 + 0x10);
LAB_00139e2c:
    *(undefined4 *)(iVar5 + 0x1b4) = DAT_002c1d60;
    *(undefined4 *)(iVar5 + 0x1b8) = 0;
    *(undefined4 *)(iVar5 + 0x1c4) = 0;
    *(undefined4 *)(iVar5 + 0x1c0) = uVar2;
    fVar8 = *(float *)(iVar5 + 0x1c4);
    fVar9 = *(float *)(iVar5 + 0x1b0);
    *(undefined4 *)(iVar7 + 0xc) = 1;
    if (fVar9 == fVar8) {
      if (*(float *)(iVar5 + 0x1bc) == fVar8) {
        FUN_0014cd18(*(undefined4 *)(iVar5 + 0x6cf4),0x34,0,5);
        FUN_0010b330(*(undefined4 *)(iVar7 + 0x10),3);
        return;
      }
      uVar6 = *param_2;
      goto LAB_0013a1d4;
    }
  }
  uVar6 = *param_2;
LAB_0013a1d4:
  uVar2 = DAT_002c1d88;
  iVar7 = *(int *)(iVar7 + 0x10);
  if (((uVar6 & 1) != 0) || (*(int *)(iVar7 + 0x210) == 0)) {
    *(uint *)(iVar7 + 0x284) = (uVar6 ^ 1) & 1;
    FUN_00107070(uVar2,iVar7);
  }
  return;
}

