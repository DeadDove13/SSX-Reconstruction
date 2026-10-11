/* Ghidra pseudocode. PS2 address: 0013a600. Not validated source. */

void FUN_0013a600(int param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *(float *)(*(int *)(param_1 + 0x14) + 0x1c8);
  fVar7 = 0.5 - ((float)((*param_2 << 0x1a) >> 0x1a) / 31.0) * 0.5;
  uVar3 = FUN_0010af30();
  fVar4 = DAT_002c1dac;
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 0x150) = uVar3;
  fVar2 = ABS(fVar7 - *(float *)(iVar1 + 0x1c8));
  fVar5 = DAT_002c1db8;
  if (DAT_002c1db8 <= fVar2) {
    fVar5 = fVar2;
  }
  fVar5 = ((float)*(byte *)(*(int *)(iVar1 + 0x394) + 0x15) * fVar4 * DAT_002c1db0 + DAT_002c1db4) *
          DAT_002c1dbc * fVar5;
  iVar1 = *(int *)(param_1 + 0x14);
  *(float *)(iVar1 + 0x1d0) = fVar7;
  *(float *)(iVar1 + 0x1cc) = fVar5;
  fVar4 = *(float *)(iVar1 + 0x1c8);
  fVar5 = fVar5 * DAT_002c1dc0;
  if (fVar7 + fVar5 < fVar4) {
    fVar7 = fVar4 - fVar5;
  }
  else if (fVar4 < fVar7 - fVar5) {
    fVar7 = fVar4 + fVar5;
  }
  *(float *)(iVar1 + 0x1c8) = fVar7;
  fVar5 = *(float *)(iVar1 + 0x1c8);
  if (fVar6 == fVar5) {
    *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + DAT_002c1dc4;
  }
  else {
    *(undefined4 *)(param_1 + 8) = 0;
    if (fVar6 < fVar5) {
      *(float *)(param_1 + 0x10) = fVar5;
    }
    else {
      *(float *)(param_1 + 0xc) = fVar5;
    }
  }
  return;
}

