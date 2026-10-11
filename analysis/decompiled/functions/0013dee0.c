/* Ghidra pseudocode. PS2 address: 0013dee0. Not validated source. */

void FUN_0013dee0(undefined8 param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  iVar5 = (int)param_1;
  FUN_001099f0(*(undefined4 *)(iVar5 + 0x14),(int)*param_2 >> 5 & 1,0);
  uVar3 = *param_2;
  fVar7 = (float)((int)(uVar3 << 0x14) >> 0x1a) / 31.0;
  if (*(int *)(iVar5 + 0x10) == 0) {
    uVar2 = 1;
    if ((uVar3 & 2) != 0) goto LAB_0013df5c;
  }
  else {
    uVar2 = (uint)((uVar3 & 6) != 0);
LAB_0013df5c:
    *(uint *)(iVar5 + 0x10) = uVar2;
  }
  if (*(int *)(iVar5 + 8) == 0) {
    uVar3 = *param_2;
    if (((uVar3 & 0x10) == 0) && ((float)((int)(uVar3 << 8) >> 0x1a) / 31.0 == 0.0)) {
      FUN_001111f0(fVar7,*(undefined4 *)(iVar5 + 0x14));
      FUN_001112f8((float)((int)(*param_2 << 0xe) >> 0x1a) / 31.0,*(undefined4 *)(iVar5 + 0x14));
      if (*(int *)(iVar5 + 0x10) == 0) {
        if ((*param_2 & 8) == 0) {
          uVar3 = *param_2;
          goto LAB_0013e0cc;
        }
        iVar1 = *(int *)(iVar5 + 0x14);
      }
      else {
        iVar1 = *(int *)(iVar5 + 0x14);
      }
      *(uint *)(*(int *)(iVar1 + 0x8584) + 0x718) = (int)*param_2 >> 3 & 1;
      FUN_0010b330(iVar1,0xe);
      uVar3 = *param_2;
    }
    else {
      fVar6 = (float)((int)(uVar3 << 8) >> 0x1a) / 31.0;
      if (fVar6 != 0.0) {
        fVar7 = fVar6;
      }
      FUN_001112f8(0,*(undefined4 *)(iVar5 + 0x14));
      if (*(float *)(*(int *)(iVar5 + 0x14) + 0x198) == 0.0) {
        if (fVar7 == 0.0) {
          uVar3 = *param_2;
        }
        else {
          FUN_0013e220(param_1,0.0 < fVar7);
          uVar3 = *param_2;
        }
      }
      else {
        uVar3 = *param_2;
      }
    }
  }
  else {
    lVar4 = FUN_00150f10(*(undefined4 *)(*(int *)(iVar5 + 0x14) + 0x6cf4));
    if (lVar4 == 0) {
      uVar3 = *param_2;
    }
    else {
      FUN_0013e120(param_1);
      uVar3 = *param_2;
    }
  }
LAB_0013e0cc:
  if ((uVar3 & 1) != 0) {
    FUN_00107070(DAT_002c1ff0,*(undefined4 *)(iVar5 + 0x14));
    return;
  }
  return;
}

