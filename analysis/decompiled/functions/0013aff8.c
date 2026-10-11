/* Ghidra pseudocode. PS2 address: 0013aff8. Not validated source. */

void FUN_0013aff8(int param_1,uint *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  undefined4 auStack_6c [3];
  
  iVar5 = *(int *)(param_1 + 0x60);
  fVar11 = *(float *)(iVar5 + 0xa4) * DAT_002c1e2c;
  if (0.0 < *(float *)(iVar5 + 0x8308)) {
    if (*(float *)(param_1 + 0x34) != 0.0) {
      FUN_00218128(*(float *)(param_1 + 0x34) *
                   (fVar11 / (*(float *)(iVar5 + 0x8308) + *(float *)(iVar5 + 0x834c))) * 0.5,
                   &fStack_70,auStack_6c);
      fStack_8c = fStack_70 * *(float *)(param_1 + 0x40);
      iVar5 = *(int *)(param_1 + 0x60);
      fStack_88 = fStack_70 * *(float *)(param_1 + 0x44);
      fStack_84 = fStack_70 * *(float *)(param_1 + 0x48);
      uStack_90 = auStack_6c[0];
      FUN_0012f0f8(&uStack_80,iVar5 + 0xf4,&uStack_90);
      uVar1 = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(iVar5 + 0xf8) = uStack_7c;
      *(undefined4 *)(iVar5 + 0xfc) = uStack_78;
      *(undefined4 *)(iVar5 + 0x100) = uStack_74;
      *(undefined4 *)(iVar5 + 0xf4) = uStack_80;
      FUN_00112bd8(uVar1);
      goto LAB_0013b0f4;
    }
    fVar7 = *(float *)(param_1 + 0x2c);
  }
  else {
LAB_0013b0f4:
    fVar7 = *(float *)(param_1 + 0x2c);
  }
  iVar5 = *(int *)(param_1 + 0x60);
  fVar7 = *(float *)(iVar5 + 0x160) + fVar7 * fVar11;
  iVar2 = *(int *)(*(int *)(iVar5 + 0x394) + 0x28);
  *(float *)(iVar5 + 0x160) = fVar7;
  *(float *)(iVar5 + 0x164) = *(float *)(iVar5 + 0x164) + *(float *)(param_1 + 0x30) * fVar11;
  if (iVar2 == 0) {
    FUN_00136ff0(iVar5 + 0x8370,(int)(fVar7 * DAT_002c1e34));
    iVar5 = *(int *)(param_1 + 0x60);
  }
  else {
    FUN_00136ff0(iVar5 + 0x8370,(int)(-fVar7 * DAT_002c1e30));
    iVar5 = *(int *)(param_1 + 0x60);
  }
  FUN_00137050(iVar5 + 0x8370,(int)(*(float *)(iVar5 + 0x164) * DAT_002c1e38));
  uVar3 = *param_2;
  fVar7 = (float)((int)(uVar3 << 0xe) >> 0x1a) / 31.0;
  fVar10 = (float)((int)(uVar3 << 8) >> 0x1a) / 31.0;
  if ((*(int *)(param_1 + 0x50) != 0) && ((uVar3 & 0x400) == 0)) {
    fVar7 = (float)((int)(uVar3 << 6) >> 0x1e);
    fVar10 = (float)((int)(uVar3 << 4) >> 0x1e);
  }
  iVar5 = *(int *)(param_1 + 8);
  if (fVar7 == 0.0) {
    if (fVar10 != 0.0) {
      iVar5 = *(int *)(param_1 + 8);
      goto LAB_0013b240;
    }
LAB_0013b250:
    if (iVar5 == 2) {
      iVar6 = *(int *)(param_1 + 0x60);
      iVar5 = *(int *)(*(int *)(iVar6 + 0x6cf4) + 8);
      if (iVar5 - 0x6bU < 2) {
        fVar8 = (float)FUN_00150e78();
        fVar7 = DAT_002c1e4c;
        fVar10 = *(float *)(param_1 + 0xc);
        iVar6 = *(int *)(param_1 + 0x60);
        iVar2 = *(int *)(iVar6 + 0x144);
        *(float *)(param_1 + 0xc) = fVar8;
        fVar7 = (fVar8 - fVar10) * fVar7;
        if (iVar2 != 0) {
          fVar7 = -fVar7;
        }
        if (iVar5 == 0x6c) {
          fVar7 = -fVar7;
        }
        iVar5 = *(int *)(param_1 + 8);
        *(float *)(iVar6 + 0x160) = *(float *)(iVar6 + 0x160) + fVar7;
        fVar7 = *(float *)(param_1 + 0x10) - fVar7;
LAB_0013b3bc:
        *(float *)(param_1 + 0x10) = fVar7;
        goto LAB_0013b3c0;
      }
      fVar7 = *(float *)(param_1 + 0x10);
      iVar5 = 2;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x60) + 0x6cf4);
      *(float *)(iVar5 + 0x10) =
           (float)*(byte *)(*(int *)(*(int *)(param_1 + 0x60) + 0x394) + 0x1a) * DAT_002c1e3c *
           DAT_002c1e40 + DAT_002c1e44;
      FUN_00150a10(iVar5);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x60) + 0x6cf4) + 0x10) = 0x3f800000;
      *(undefined4 *)(param_1 + 8) = 2;
      if (*(float *)(param_1 + 0x14) < 0.0) {
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      *(undefined4 *)(param_1 + 0x1c) = 0;
      fVar7 = *(float *)(param_1 + 0x1c);
      if (*(float *)(param_1 + 0x20) < fVar7) {
        *(float *)(param_1 + 0x20) = fVar7;
      }
      else {
        *(float *)(param_1 + 0x24) = fVar7;
      }
      iVar6 = *(int *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x28) = 0;
      fVar7 = DAT_002c1e48;
      iVar2 = *(int *)(*(int *)(iVar6 + 0x6cf4) + 8);
      if (iVar2 - 0x6bU < 2) {
        iVar5 = *(int *)(iVar6 + 0x144);
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(float *)(param_1 + 0x10) = fVar7;
        if (iVar5 != 0) {
          *(float *)(param_1 + 0x10) = -fVar7;
        }
        iVar5 = *(int *)(param_1 + 8);
        if (iVar2 == 0x6c) {
          fVar7 = -*(float *)(param_1 + 0x10);
          goto LAB_0013b3bc;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x10) = 0;
        iVar5 = *(int *)(param_1 + 8);
      }
LAB_0013b3c0:
      fVar7 = *(float *)(param_1 + 0x10);
    }
    fVar7 = *(float *)(iVar6 + 0x160) + fVar7;
    fVar10 = fVar7 * DAT_002c1e50 + 0.5;
    fVar8 = (float)(int)fVar10;
    if (fVar10 < fVar8) {
      fVar8 = fVar8 - 1.0;
    }
    fVar7 = fVar7 - fVar8 * DAT_002c1e54;
    if (ABS(fVar7) < DAT_002c1e58) {
      fVar7 = -fVar7;
LAB_0013b4dc:
      fVar10 = *(float *)(iVar6 + 0x164);
    }
    else {
      if (DAT_002c1e5c < ABS(fVar7)) {
        fVar10 = (fVar7 - DAT_002c1e60) * DAT_002c1e50 + 0.5;
        fVar8 = (float)(int)fVar10;
        if (fVar10 < fVar8) {
          fVar8 = fVar8 - 1.0;
        }
        fVar7 = -((fVar7 - DAT_002c1e60) - fVar8 * DAT_002c1e54);
        goto LAB_0013b4dc;
      }
      if (0.0 < *(float *)(param_1 + 0x14)) {
        if (fVar7 < 0.0) {
          fVar7 = fVar7 + DAT_002c1e64;
          goto LAB_0013b4dc;
        }
        fVar10 = *(float *)(iVar6 + 0x164);
      }
      else {
        if (0.0 < fVar7) {
          fVar7 = fVar7 - DAT_002c1e68;
          goto LAB_0013b4dc;
        }
        fVar10 = *(float *)(iVar6 + 0x164);
      }
    }
    fVar9 = fVar10 * DAT_002c1e6c + 0.5;
    fVar8 = (float)(int)fVar9;
    if (fVar9 < fVar8) {
      fVar8 = fVar8 - 1.0;
    }
    fVar10 = fVar10 - fVar8 * DAT_002c1e70;
    if (ABS(fVar10) < DAT_002c1e74) {
      fVar10 = -fVar10;
LAB_0013b58c:
      iVar2 = *(int *)(iVar6 + 0x394);
    }
    else {
      if (*(float *)(param_1 + 0x20) <= 0.0) {
        if (0.0 < fVar10) {
          fVar10 = fVar10 - DAT_002c1e70;
        }
        goto LAB_0013b58c;
      }
      if (fVar10 < 0.0) {
        fVar10 = fVar10 + DAT_002c1e70;
        goto LAB_0013b58c;
      }
      iVar2 = *(int *)(iVar6 + 0x394);
    }
    fVar8 = ((float)*(byte *)(iVar2 + 0x1a) * DAT_002c1e78 * DAT_002c1e7c + DAT_002c1e80) *
            DAT_002c1e84;
    *(float *)(param_1 + 0x30) = fVar8 * fVar10 * fVar11;
    *(float *)(param_1 + 0x2c) = fVar8 * fVar7 * fVar11;
  }
  else {
LAB_0013b240:
    if (iVar5 == 2) {
      iVar5 = 2;
      goto LAB_0013b250;
    }
    fVar9 = fVar11 * 75.0;
    fVar7 = fVar7 * ABS(*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x14));
    fVar8 = *(float *)(param_1 + 0x2c);
    fVar10 = fVar10 * -ABS(*(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x20));
    if (fVar7 + fVar9 < fVar8) {
      fVar7 = fVar8 - fVar9;
    }
    else if (fVar8 < fVar7 - fVar9) {
      fVar7 = fVar8 + fVar9;
    }
    fVar8 = *(float *)(param_1 + 0x30);
    fVar11 = fVar11 * 75.0;
    *(float *)(param_1 + 0x2c) = fVar7;
    if (fVar10 + fVar11 < fVar8) {
      fVar10 = fVar8 - fVar11;
    }
    else if (fVar8 < fVar10 - fVar11) {
      fVar10 = fVar8 + fVar11;
    }
    *(float *)(param_1 + 0x30) = fVar10;
    iVar6 = *(int *)(param_1 + 0x60);
  }
  fVar7 = *(float *)(param_1 + 0x1c);
  fVar11 = (float)*(byte *)(*(int *)(iVar6 + 0x394) + 0x1a) * DAT_002c1e88 * DAT_002c1e8c +
           DAT_002c1e90;
  fVar8 = *(float *)(param_1 + 0x18) * fVar11;
  fVar10 = *(float *)(param_1 + 0x14) * fVar11;
  *(float *)(param_1 + 0x18) = fVar8;
  *(float *)(param_1 + 0x14) = fVar10;
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) * fVar11;
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) * fVar11;
  if (fVar8 < 0.0) {
    fVar7 = -fVar7;
    if (fVar7 < fVar10) {
      *(float *)(param_1 + 0x14) = fVar7;
      if (fVar7 < fVar8) {
        *(float *)(param_1 + 0x18) = fVar7;
      }
      goto LAB_0013b750;
    }
    fVar11 = *(float *)(param_1 + 0x24);
  }
  else if (fVar8 < fVar7) {
    *(float *)(param_1 + 0x18) = fVar7;
    if (fVar10 < fVar7) {
      *(float *)(param_1 + 0x14) = fVar7;
    }
LAB_0013b750:
    fVar11 = *(float *)(param_1 + 0x24);
  }
  else {
    fVar11 = *(float *)(param_1 + 0x24);
  }
  fVar7 = *(float *)(param_1 + 0x28);
  if (fVar11 < 0.0) {
    fVar7 = -fVar7;
    if (fVar7 < *(float *)(param_1 + 0x20)) {
      *(float *)(param_1 + 0x20) = fVar7;
      if (fVar7 < fVar11) {
        *(float *)(param_1 + 0x24) = fVar7;
      }
      goto LAB_0013b7c4;
    }
    fVar11 = *(float *)(param_1 + 0x18);
  }
  else if (fVar11 < fVar7) {
    *(float *)(param_1 + 0x24) = fVar7;
    if (*(float *)(param_1 + 0x20) < fVar7) {
      *(float *)(param_1 + 0x20) = fVar7;
    }
LAB_0013b7c4:
    fVar11 = *(float *)(param_1 + 0x18);
  }
  else {
    fVar11 = *(float *)(param_1 + 0x18);
  }
  fVar7 = *(float *)(param_1 + 0x2c);
  if ((fVar11 <= fVar7) &&
     (fVar11 = *(float *)(param_1 + 0x14), fVar7 <= *(float *)(param_1 + 0x14))) {
    fVar11 = fVar7;
  }
  fVar7 = *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x2c) = fVar11;
  fVar11 = *(float *)(param_1 + 0x24);
  if ((*(float *)(param_1 + 0x24) <= fVar7) &&
     (fVar11 = *(float *)(param_1 + 0x20), fVar7 <= *(float *)(param_1 + 0x20))) {
    fVar11 = fVar7;
  }
  *(float *)(param_1 + 0x30) = fVar11;
  if (iVar5 == 1) {
LAB_0013b960:
    uVar3 = *param_2;
LAB_0013b964:
    lVar4 = FUN_00111670(*(undefined4 *)(param_1 + 0x60),(int)uVar3 >> 9 & 1,(char)*param_2);
    if (lVar4 == 0) {
      uVar3 = *param_2;
      goto LAB_0013b998;
    }
    iVar5 = *(int *)(param_1 + 0x60);
    *(undefined4 *)(iVar5 + 0x188) = 0;
    *(undefined4 *)(iVar5 + 0x180) = 0;
    *(undefined4 *)(iVar5 + 0x184) = 0;
  }
  else {
    if (1 < iVar5) {
      if (iVar5 != 2) {
        uVar3 = *param_2;
        goto LAB_0013b998;
      }
      if (ABS(*(float *)(param_1 + 0x2c)) < DAT_002c1e94) {
        if (ABS(fVar11) < DAT_002c1e94) {
          if (*(int *)(*(int *)(iVar6 + 0x6cf4) + 8) - 0x6bU < 2) {
            lVar4 = FUN_00150f10();
            if (lVar4 == 0) {
              uVar3 = *param_2;
              goto LAB_0013b998;
            }
            iVar5 = *(int *)(param_1 + 0x60);
          }
          else {
            iVar5 = *(int *)(param_1 + 0x60);
          }
          if ((*(int *)(&DAT_002ac2c4 + *(int *)(*(int *)(iVar5 + 0x6cf4) + 8) * 0xc) == 0xc) ||
             (*(int *)(&DAT_002ac2c4 + *(int *)(*(int *)(iVar5 + 0x6cf4) + 8) * 0xc) == 0xd)) {
            FUN_0014cd18(*(int *)(iVar5 + 0x6cf4),0x52,0,5);
            iVar5 = *(int *)(param_1 + 0x60);
          }
          else {
            iVar5 = *(int *)(param_1 + 0x60);
          }
          FUN_001377b8(iVar5 + 0x8370);
          iVar5 = *(int *)(param_1 + 0x60);
          *(undefined4 *)(iVar5 + 0x188) = 0;
          *(undefined4 *)(iVar5 + 0x180) = 0;
          *(undefined4 *)(iVar5 + 0x184) = 0;
          FUN_0010b330(iVar5,0x13);
          goto LAB_0013b960;
        }
        uVar3 = *param_2;
      }
      else {
        uVar3 = *param_2;
      }
      goto LAB_0013b964;
    }
    if (iVar5 != 0) {
      uVar3 = *param_2;
      goto LAB_0013b998;
    }
    if (*(int *)(&DAT_002ac2c4 + *(int *)(*(int *)(iVar6 + 0x6cf4) + 8) * 0xc) != 0xd) {
      uVar3 = *param_2;
      goto LAB_0013b998;
    }
    *(undefined4 *)(param_1 + 8) = 1;
  }
  uVar3 = *param_2;
LAB_0013b998:
  if ((uVar3 & 0x100) != 0) {
    FUN_00107070(DAT_002c1e98,*(undefined4 *)(param_1 + 0x60));
  }
  return;
}

