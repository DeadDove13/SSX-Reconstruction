/* Ghidra pseudocode. PS2 address: 001196f0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001197bc) */

void FUN_001196f0(int param_1,undefined8 *param_2,undefined4 param_3)

{
  bool bVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar3 = FUN_002109b0();
  fVar7 = *(float *)(param_1 + 0x30) +
          ((float)(uVar3 & 0x7fffff | 0x3f800000) - 1.0) * DAT_002c1784 + DAT_002c1780;
  bVar1 = DAT_002c1788 < fVar7;
  *(float *)(param_1 + 0x30) = fVar7;
  if (bVar1) {
    *(float *)(param_1 + 0x30) = DAT_002c178c - fVar7;
  }
  if (*(float *)(param_1 + 0x30) < DAT_002c1790) {
    *(float *)(param_1 + 0x30) = DAT_002c1794 - *(float *)(param_1 + 0x30);
    iVar4 = *(int *)(param_1 + 0x50);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x50);
  }
  if (iVar4 < 0x4b) {
    *(int *)(param_1 + 0x50) = iVar4 + 1;
  }
  fVar2 = DAT_002c179c;
  fVar7 = DAT_002c1798;
  iVar4 = (*(int *)(param_1 + 0x54) + 0x4a) % 0x4b;
  *(int *)(param_1 + 0x54) = iVar4;
  iVar6 = param_1 + iVar4 * 0xa0 + 0x60;
  uVar5 = param_2[1];
  *(undefined8 *)(iVar6 + 0x80) = *param_2;
  *(undefined8 *)(iVar6 + 0x88) = uVar5;
  *(undefined4 *)(iVar6 + 0x9c) = param_3;
  iVar4 = *(int *)(param_1 + 4);
  fVar10 = *(float *)(iVar6 + 0x84);
  fVar8 = *(float *)(iVar6 + 0x88);
  fVar11 = *(float *)(iVar6 + 0x8c);
  *(int *)(param_1 + 4) = iVar4 + 1;
  fVar9 = (float)iVar4 * 0.25;
  fVar7 = (fVar10 + fVar8 + fVar11) * fVar7;
  *(float *)(iVar6 + 0x84) = fVar10 + (fVar7 - fVar10) * fVar2;
  *(float *)(iVar6 + 0x88) = fVar8 + (fVar7 - fVar8) * fVar2;
  *(float *)(iVar6 + 0x8c) = fVar11 + (fVar7 - fVar11) * fVar2;
  *(float *)(iVar6 + 0x90) = fVar9 - ((float)(int)(fVar9 * 0.015625) * 64.0 + 32.0);
  return;
}

