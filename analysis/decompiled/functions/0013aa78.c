/* Ghidra pseudocode. PS2 address: 0013aa78. Not validated source. */

void FUN_0013aa78(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(*(int *)(iVar1 + 0x6cf4) + 8);
  if (iVar3 == 0x53) {
    *(undefined4 *)(iVar1 + 0x1a0) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x198) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x19c) = 0;
  }
  else {
    FUN_001112f8((float)((int)(*param_2 << 0x18) >> 0x1a) / 31.0);
  }
  fVar6 = DAT_002c1dfc;
  iVar1 = *(int *)(param_1 + 0xc);
  uVar4 = *param_2 & 1;
  if ((((*(float *)(iVar1 + 0x18c) == 0.0) && (*(float *)(iVar1 + 0x1a4) == 0.0)) &&
      (*(float *)(iVar1 + 0x1b0) == 0.0)) && (*(float *)(iVar1 + 0x1bc) == 0.0)) {
    if ((((float)((int)(*param_2 << 0x12) >> 0x1a) / 31.0 == 0.0) &&
        (0.5 <= *(float *)(iVar1 + 0x198))) && (uVar4 == 0)) {
      uVar4 = *param_2;
      goto LAB_0013ad74;
    }
    if (iVar3 != 0x53) {
      fVar5 = 1.0 - *(float *)(iVar1 + 0x198);
      *(float *)(iVar1 + 0x188) = fVar5;
      *(float *)(iVar1 + 0x180) = fVar5;
      *(undefined4 *)(iVar1 + 0x184) = 0;
      if (fVar6 < *(float *)(iVar1 + 0x8344)) {
        FUN_00150460(*(undefined4 *)(iVar1 + 0x6cf4));
        uVar2 = *(undefined4 *)(param_1 + 0xc);
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0xc);
      }
      FUN_0010b330(uVar2,0x13);
      uVar4 = *param_2;
      goto LAB_0013ad74;
    }
  }
  else if (uVar4 == 0) {
    if (*(float *)(iVar1 + 0x1ac) == 0.0) {
      *(undefined4 *)(iVar1 + 0x1ac) = 0;
      *(undefined4 *)(iVar1 + 0x1a8) = 0x40800000;
      if (*(float *)(iVar1 + 0x1b0) == 0.0) {
        fVar6 = *(float *)(iVar1 + 0x1bc);
      }
      else {
        if ((float)((int)(*param_2 << 0xc) >> 0x1a) / 31.0 == 0.0) {
          *(undefined4 *)(iVar1 + 0x1b4) = 0x40800000;
          *(undefined4 *)(iVar1 + 0x1b8) = 0;
        }
        fVar6 = *(float *)(iVar1 + 0x1bc);
      }
      uVar4 = *param_2;
      if (fVar6 == 0.0) goto LAB_0013ad74;
      iVar3 = iVar1 + 0x1bc;
      if ((float)((int)(uVar4 << 6) >> 0x1a) / 31.0 == 0.0) {
        *(undefined4 *)(iVar1 + 0x1c4) = 0;
        goto LAB_0013ad6c;
      }
    }
    else {
      FUN_001110f0((float)((int)(*param_2 << 0x12) >> 0x1a) / 31.0);
      iVar1 = *(int *)(param_1 + 0xc);
      if (ABS(*(float *)(param_1 + 8)) <= ABS(*(float *)(iVar1 + 0x1a4))) {
        *(float *)(iVar1 + 0x1a4) = *(float *)(param_1 + 8);
      }
      else {
        iVar3 = iVar1 + 0x1a4;
        *(undefined4 *)(iVar1 + 0x1ac) = 0;
LAB_0013ad6c:
        *(undefined4 *)(iVar3 + 4) = 0x40800000;
      }
    }
  }
  else {
    *(undefined4 *)(iVar1 + 0x1ac) = 0;
    *(undefined4 *)(iVar1 + 0x1a8) = 0x40800000;
    *(undefined4 *)(iVar1 + 0x1b4) = 0x40800000;
    *(undefined4 *)(iVar1 + 0x1b8) = 0;
    *(undefined4 *)(iVar1 + 0x1c0) = 0x40800000;
    *(undefined4 *)(iVar1 + 0x1c4) = 0;
  }
  uVar4 = *param_2;
LAB_0013ad74:
  if ((uVar4 & 2) == 0) {
    return;
  }
  FUN_00107070(DAT_002c1e00,*(undefined4 *)(param_1 + 0xc));
  return;
}

