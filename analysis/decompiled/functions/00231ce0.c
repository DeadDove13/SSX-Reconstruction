/* Ghidra pseudocode. PS2 address: 00231ce0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00231d98) */

void FUN_00231ce0(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  
  bVar1 = *param_1;
  param_2[2] = 7;
  param_2[1] = (uint)(bVar1 >> 1);
  *param_2 = param_1 + 1;
  bVar2 = param_1[1];
  param_2[2] = 0xf;
  *param_2 = param_1 + 2;
  uVar4 = (uint)(bVar1 >> 1) | (uint)bVar2 << 7;
  param_2[1] = uVar4;
  uVar3 = DAT_002a2d40;
  uVar8 = (uint)(bVar2 >> 1);
  param_2[1] = uVar4 >> 4;
  param_2[2] = 0xb;
  param_2[3] = 0x20 - (uVar4 & uVar3);
  uVar3 = DAT_002a2d40;
  param_2[1] = uVar8;
  param_2[2] = 7;
  bVar1 = param_1[2];
  *param_2 = param_1 + 3;
  param_2[2] = 0xf;
  param_2[1] = uVar8 | (uint)bVar1 << 7;
  iVar5 = param_2[2];
  uVar10 = (uint)param_2[1] >> 6;
  uVar11 = param_2[1] & DAT_002a2d48;
  uVar8 = iVar5 - 6;
  param_2[1] = uVar10;
  param_2[4] = (float)((uVar4 >> 4 & uVar3) + 1) * 8.0;
  param_2[2] = uVar8;
  if ((int)uVar8 < 8) {
    bVar1 = *(byte *)*param_2;
    param_2[2] = iVar5 + 2;
    *param_2 = (byte *)*param_2 + 1;
    param_2[1] = uVar10 | (uint)bVar1 << (uVar8 & 0x1f);
  }
  pfVar6 = (float *)(param_2 + 5);
  puVar7 = param_2 + 0x44;
  puVar9 = param_2 + 0x50;
  iVar5 = 0x3e;
  do {
    iVar5 = iVar5 + -1;
    *pfVar6 = pfVar6[-1] * ((float)uVar11 * 0.001 + 1.04);
    pfVar6 = pfVar6 + 1;
  } while (-1 < iVar5);
  iVar5 = 0xb;
  do {
    *puVar7 = 0;
    iVar5 = iVar5 + -1;
    *puVar9 = 0;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  } while (-1 < iVar5);
  param_2 = param_2 + 0x19f;
  iVar5 = 0x143;
  do {
    *param_2 = 0;
    iVar5 = iVar5 + -1;
    param_2 = param_2 + -1;
  } while (-1 < iVar5);
  return;
}

