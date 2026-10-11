/* Ghidra pseudocode. PS2 address: 001c1cf0. Not validated source. */

void FUN_001c1cf0(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  iVar3 = 7;
  piVar2 = (int *)(param_1 + 0x10);
  fVar4 = *(float *)(param_1 + 0x4b8);
  fVar8 = *(float *)(param_1 + 0x4b4);
  fVar9 = 128.0;
  fVar4 = (fVar4 * fVar4 * fVar4) / DAT_002c359c;
  do {
    fVar5 = *(float *)(param_1 + 0x4bc);
    iVar3 = iVar3 + -1;
    fVar6 = *(float *)(param_1 + 0x4c0);
    *piVar2 = (int)(fVar8 * fVar4);
    piVar2[1] = (int)((fVar5 + fVar5) - fVar6);
    piVar2[2] = (int)(*(float *)(param_1 + 0x4c0) - *(float *)(param_1 + 0x4bc));
    uVar1 = FUN_002109b0();
    piVar2[4] = (int)(((float)(uVar1 & 0x7fffff | 0x3f800000) - 1.0) + 1.0);
    uVar1 = FUN_002109b0();
    piVar2[6] = (int)(((float)(uVar1 & 0x7fffff | 0x3f800000) - 1.0) + 1.0);
    uVar1 = FUN_002109b0();
    piVar2[7] = (int)(((float)(uVar1 & 0x7fffff | 0x3f800000) - 1.0) + 1.0);
    uVar1 = FUN_002109b0();
    piVar2[5] = (int)(((float)(uVar1 & 0x7fffff | 0x3f800000) - 1.0) + 1.0);
    piVar2[0xc] = *(int *)(param_1 + 0x4b8);
    piVar2[0xd] = 0;
    piVar2[0xe] = 0;
    piVar2[0xf] = 0;
    iVar7 = *(int *)(param_1 + 0x4b8);
    piVar2[0x10] = 0;
    piVar2[0x11] = iVar7;
    piVar2[0x12] = 0;
    piVar2[0x13] = 0;
    iVar7 = *(int *)(param_1 + 0x4b8);
    piVar2[0x14] = 0;
    piVar2[0x15] = 0;
    piVar2[0x16] = iVar7;
    piVar2[0x17] = 0;
    fVar5 = *(float *)(param_1 + 0x4b0);
    piVar2[0x18] = (int)fVar9;
    piVar2[0x19] = (int)fVar9;
    piVar2[0x1a] = (int)fVar9;
    piVar2[0x1b] = (int)(fVar5 * fVar9);
    piVar2[0x1c] = 0;
    piVar2[0x1d] = 0;
    piVar2[0x1e] = 0;
    piVar2[0x1f] = 0;
    piVar2[0x20] = 0x3f800000;
    piVar2[0x21] = 0x3f800000;
    piVar2[0x22] = 0;
    piVar2[0x23] = 0;
    piVar2 = piVar2 + 0x24;
  } while (-1 < iVar3);
  return;
}

