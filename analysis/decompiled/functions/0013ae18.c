/* Ghidra pseudocode. PS2 address: 0013ae18. Not validated source. */

void FUN_0013ae18(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0.0 < *(float *)(*(int *)(param_1 + 0x60) + 0xb0)) {
    fVar5 = *(float *)(param_1 + 0x2c) * DAT_002c1e04;
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) * DAT_002c1e04;
    *(float *)(param_1 + 0x2c) = fVar5;
    *(undefined4 *)(*(int *)(param_1 + 0x60) + 0xb0) = 0;
    iVar2 = *(int *)(param_1 + 0x60);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x60);
  }
  if (*(int *)(iVar2 + 0x144) == *(int *)(*(int *)(iVar2 + 0x394) + 0x28)) {
    fVar5 = *(float *)(param_1 + 0x2c);
  }
  else {
    fVar5 = *(float *)(param_1 + 0x30) * DAT_002c1e08;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) * DAT_002c1e08;
    *(float *)(param_1 + 0x30) = fVar5;
    fVar5 = *(float *)(param_1 + 0x2c);
  }
  fVar3 = DAT_002c1e18;
  fVar4 = DAT_002c1e10;
  if (0.0 < fVar5) {
    fVar3 = fVar5 * DAT_002c1e0c;
    *(float *)(param_1 + 0x14) = fVar5;
    *(float *)(param_1 + 0x18) = fVar3;
    fVar3 = fVar5;
    if (fVar4 <= fVar5) {
      fVar3 = fVar4;
    }
LAB_0013af1c:
    uVar1 = DAT_002c56e8;
    *(float *)(param_1 + 0x1c) = fVar3;
    FUN_00200780(uVar1,*(undefined4 *)(param_1 + 0x60));
    fVar5 = *(float *)(param_1 + 0x30);
  }
  else {
    if (fVar5 < 0.0) {
      fVar4 = fVar5 * DAT_002c1e14;
      *(float *)(param_1 + 0x18) = fVar5;
      *(float *)(param_1 + 0x14) = fVar4;
      if (-fVar5 < fVar3) {
        fVar3 = -fVar5;
      }
      goto LAB_0013af1c;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    fVar5 = *(float *)(param_1 + 0x30);
  }
  fVar3 = DAT_002c1e28;
  fVar4 = DAT_002c1e20;
  if (0.0 < fVar5) {
    fVar3 = fVar5 * DAT_002c1e1c;
    *(float *)(param_1 + 0x20) = fVar5;
    *(float *)(param_1 + 0x24) = fVar3;
    fVar3 = fVar5;
    if (fVar4 <= fVar5) {
      fVar3 = fVar4;
    }
  }
  else {
    if (0.0 <= fVar5) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      goto LAB_0013afdc;
    }
    fVar4 = fVar5 * DAT_002c1e24;
    *(float *)(param_1 + 0x24) = fVar5;
    *(float *)(param_1 + 0x20) = fVar4;
    if (-fVar5 < fVar3) {
      fVar3 = -fVar5;
    }
  }
  uVar1 = DAT_002c56e8;
  *(float *)(param_1 + 0x28) = fVar3;
  FUN_002004e8(uVar1,*(undefined4 *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 8) = 0;
LAB_0013afdc:
  FUN_0010a2c0(*(undefined4 *)(param_1 + 0x60),param_1 + 0x40,param_1 + 0x34);
  return;
}

