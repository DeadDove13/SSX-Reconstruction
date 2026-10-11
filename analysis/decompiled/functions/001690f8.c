/* Ghidra pseudocode. PS2 address: 001690f8. Not validated source. */

void FUN_001690f8(float param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  
  iVar3 = (int)param_2;
  if (*(float *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x4c) + 0xcc) * 8 + DAT_00299ce0) + 0xc) <= 0.0)
  {
    return;
  }
  if (*(int *)(iVar3 + 0x140) == 0) {
    FUN_00169508(param_2);
    uVar1 = *(uint *)(iVar3 + 0x140);
  }
  else {
    uVar1 = *(uint *)(iVar3 + 0x140);
  }
  if ((uVar1 & 1) != 0) {
    FUN_00169508(param_2);
    return;
  }
  if ((uVar1 & 2) != 0) {
    *(float *)(iVar3 + 0xb4) = (float)DAT_002859d4;
    return;
  }
  if ((uVar1 & 0x10) != 0) {
    param_1 = *(float *)(iVar3 + 0x144) + param_1;
    *(float *)(iVar3 + 0x144) = param_1;
    if (param_1 < *(float *)(iVar3 + 0x150)) {
      return;
    }
    uVar5 = *(undefined4 *)(iVar3 + 0x14c);
    while( true ) {
      *(undefined4 *)(iVar3 + 0x144) = uVar5;
      if (*(int *)(iVar3 + 0x154) != 0) {
        FUN_00169508(param_2);
      }
      if (*(float *)(iVar3 + 0x144) < *(float *)(iVar3 + 0x150)) break;
      uVar5 = *(undefined4 *)(iVar3 + 0x14c);
    }
    return;
  }
  if ((uVar1 & 0x20) == 0) {
    if ((uVar1 & 0x40) == 0) {
      if ((uVar1 & 4) != 0) {
        fVar4 = *(float *)(iVar3 + 0x150);
        param_1 = *(float *)(iVar3 + 0x144) + param_1;
        *(float *)(iVar3 + 0x144) = param_1;
        if (param_1 < fVar4) {
          return;
        }
        uVar5 = 1;
        if (*(int *)(iVar3 + 0x154) != 0) {
          uVar5 = *(undefined4 *)(iVar3 + 0x14c);
LAB_001692d0:
          *(undefined4 *)(iVar3 + 0x144) = uVar5;
          FUN_00169508(param_2);
          return;
        }
LAB_00169328:
        *(float *)(iVar3 + 0x144) = fVar4;
        *(undefined4 *)(iVar3 + 0x140) = uVar5;
        return;
      }
      if ((uVar1 & 8) == 0) {
        return;
      }
      fVar4 = *(float *)(iVar3 + 0x14c);
      param_1 = *(float *)(iVar3 + 0x144) - param_1;
      *(float *)(iVar3 + 0x144) = param_1;
      if (fVar4 < param_1) {
        return;
      }
      uVar5 = 1;
      if (*(int *)(iVar3 + 0x154) == 0) goto LAB_00169328;
      *(float *)(iVar3 + 0x144) = fVar4;
      goto LAB_00169318;
    }
    if ((uVar1 & 4) != 0) {
      fVar4 = *(float *)(iVar3 + 0x150);
      param_1 = *(float *)(iVar3 + 0x144) + param_1;
      *(float *)(iVar3 + 0x144) = param_1;
      if (param_1 < fVar4) {
        return;
      }
      if (*(int *)(iVar3 + 0x154) != 0) {
        uVar5 = *(undefined4 *)(iVar3 + 0x14c);
        goto LAB_001692d0;
      }
      uVar5 = 0x48;
      goto LAB_00169328;
    }
    param_1 = *(float *)(iVar3 + 0x144) - param_1;
    *(float *)(iVar3 + 0x144) = param_1;
    if (*(float *)(iVar3 + 0x14c) < param_1) {
      return;
    }
    iVar2 = *(int *)(iVar3 + 0x154);
    *(float *)(iVar3 + 0x144) = *(float *)(iVar3 + 0x14c);
  }
  else {
    param_1 = *(float *)(iVar3 + 0x144) - param_1;
    *(float *)(iVar3 + 0x144) = param_1;
    if (*(float *)(iVar3 + 0x14c) <= param_1) {
      return;
    }
    iVar2 = *(int *)(iVar3 + 0x154);
    *(float *)(iVar3 + 0x144) = param_1 + *(float *)(iVar3 + 0x150);
  }
  if (iVar2 == 0) {
    return;
  }
LAB_00169318:
  FUN_00169508(param_2);
  return;
}

