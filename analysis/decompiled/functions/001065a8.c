/* Ghidra pseudocode. PS2 address: 001065a8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00106650) */

void FUN_001065a8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  iVar3 = (int)param_1;
  *(undefined4 *)(iVar3 + 0x2b0) = *(undefined4 *)(iVar3 + 0x2b4);
  fVar4 = (float)FUN_0019b848(*(undefined4 *)(iVar3 + 0x82f4),iVar3 + 0xc0,iVar3 + 0x2c0,
                              iVar3 + 0x2b8,iVar3 + 0x300);
  *(float *)(iVar3 + 0x2b4) = fVar4;
  FUN_0019bcf8(fVar4 + 800.0,auStack_60,*(undefined4 *)(iVar3 + 0x82f4),0);
  *(int *)(iVar3 + 0x2d0) = auStack_60._0_4_;
  *(int *)(iVar3 + 0x2d4) = auStack_60._4_4_;
  *(undefined4 *)(iVar3 + 0x2d8) = uStack_58;
  *(undefined4 *)(iVar3 + 0x2dc) = uStack_54;
  if (*(int *)(iVar3 + 0x348) < 0) {
    if ((*(float *)(iVar3 + 0x2b8) <= 500.0) ||
       (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x18) % 0x3c != 0)) {
      fVar4 = (float)FUN_0019be28(*(undefined4 *)(iVar3 + 0x82f4));
      if (fVar4 - 200.0 < *(float *)(iVar3 + 0x2b4)) {
        FUN_00106ca0(param_1,1);
        fVar4 = *(float *)(iVar3 + 0x2c0);
      }
      else {
        iVar1 = *(int *)(*(int *)(iVar3 + 0x82f4) + 0x34);
        lVar2 = (**(code **)(iVar1 + 0x14))
                          (*(undefined4 *)(iVar3 + 0x2b0),
                           *(int *)(iVar3 + 0x82f4) + (int)*(short *)(iVar1 + 0x10));
        if (lVar2 != 0) {
          FUN_00106ca0(param_1,0);
        }
        fVar4 = *(float *)(iVar3 + 0x2c0);
      }
    }
    else {
      FUN_00106ca0(param_1,0);
      fVar4 = *(float *)(iVar3 + 0x2c0);
    }
  }
  else {
    fVar4 = *(float *)(iVar3 + 0x2c0);
  }
  fVar4 = *(float *)(iVar3 + 0x2d0) - fVar4;
  fVar6 = *(float *)(iVar3 + 0x2d4) - *(float *)(iVar3 + 0x2c4);
  if (fVar4 == 0.0) {
    fVar5 = fVar6;
    if (fVar6 != 0.0) {
      if (fVar6 < 0.0) {
        *(undefined **)(iVar3 + 0x2e0) = PTR_DAT_002c110c;
        return;
      }
      *(undefined4 *)(iVar3 + 0x2e0) = DAT_002c1110;
      return;
    }
  }
  else {
    fVar5 = (float)FUN_00218510(fVar6 / fVar4);
    if (fVar4 < 0.0) {
      if (0.0 < fVar6) {
        fVar5 = fVar5 + DAT_002c1114;
      }
      else {
        fVar5 = fVar5 - DAT_002c1118;
      }
    }
  }
  *(float *)(iVar3 + 0x2e0) = fVar5;
  return;
}

