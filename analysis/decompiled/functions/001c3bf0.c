/* Ghidra pseudocode. PS2 address: 001c3bf0. Not validated source. */

void FUN_001c3bf0(int param_1,ulong param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  short *psVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  float fVar15;
  
  uVar4 = *(int *)(param_1 + 0x26c) + 1;
  *(uint *)(param_1 + 0x26c) = uVar4;
  if (*(int *)(param_1 + 0x228) == 0) {
    if ((uVar4 & 1) != 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x270);
      uVar8 = *(undefined4 *)(param_1 + 0x274);
      goto LAB_001c3c54;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x274);
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x274);
  }
  uVar8 = *(undefined4 *)(param_1 + 0x270);
LAB_001c3c54:
  *(undefined4 *)(param_1 + 0x278) = uVar5;
  *(undefined4 *)(param_1 + 0x27c) = uVar8;
  do {
    uVar4 = REG_DMAC_1_VIF1_CHCR;
  } while ((uVar4 & 0x100) != 0);
  do {
    uVar4 = REG_DMAC_2_GIF_CHCR;
  } while ((uVar4 & 0x100) != 0);
  do {
    uVar4 = REG_VIF1_STAT;
  } while ((uVar4 & 0x1f000003) != 0);
  do {
    uVar7 = REG_GS_CSR;
  } while ((uVar7 & 0xc000) != 0x4000);
  if (param_3 != 0) {
    REG_GS_CSR = 8;
    do {
      uVar7 = REG_GS_CSR;
    } while ((uVar7 & 8) == 0);
  }
  REG_GS_PMODE = param_2 & 0xffffffff | 0xff20;
  REG_GS_SMODE2 = (long)*(short *)(param_1 + 0x250) | (long)*(short *)(param_1 + 0x252) << 1;
  REG_GS_DISPFB1 =
       (ulong)*(uint *)(param_1 + 0x27c) | (ulong)*(uint *)(param_1 + 600) << 9 |
       (ulong)*(uint *)(param_1 + 0x248) << 0xf;
  if (*(short *)(param_1 + 0x250) == 0) {
    iVar10 = 1;
  }
  else {
    iVar10 = 1;
    if (*(short *)(param_1 + 0x252) == 1) {
      iVar10 = 2;
    }
  }
  psVar6 = (short *)FUN_00243b40();
  uVar7 = 0x19291;
  if (*psVar6 != 0) {
    uVar7 = 0x32291;
  }
  REG_GS_DISPLAY1 =
       (ulong)*(uint *)(param_1 + 0x260) << 0x17 |
       (long)((*(int *)(param_1 + 0x244) + -1) * iVar10) << 0x2c |
       (ulong)*(uint *)(param_1 + 0x25c) << 0x1b | uVar7 | 0xa0000000000;
  uVar4 = *(uint *)(param_1 + 600);
  puVar14 = &DAT_002cc7a0;
  REG_GS_BGCOLOR = 0;
  uVar12 = *(uint *)(param_1 + 0x248);
  uVar1 = *(uint *)(param_1 + 0x278);
  uVar2 = *(uint *)(param_1 + 0x244);
  uVar3 = *(uint *)(param_1 + 0x240);
  if (*(int *)(param_1 + 0x228) != 0) {
    DAT_002cc7a0 = 0x1000000000000009;
    DAT_002cc7a8 = 0xe;
    DAT_002cc810 = (ulong)(uVar3 - 1) << 0x10 | (long)(int)(uVar2 - 1) << 0x30;
    DAT_002cc7b0 = (ulong)*(uint *)(param_1 + 0x27c) | (ulong)uVar4 << 0x10 | (ulong)uVar12 << 0x18;
    DAT_002cc7d0 = (ulong)(uVar1 << 5) | 0x240000000 | (ulong)uVar12 << 0x14 | (ulong)uVar4 << 0xe |
                   0x28000000;
    DAT_002cc850 = (ulong)(*(uint *)(param_1 + 0x238) != 0x80) << 6 | 0x11e;
    DAT_002cc7b8 = 0x4c;
    DAT_002cc7c0 = 0x61;
    DAT_002cc7c8 = 0x14;
    DAT_002cc7d8 = 6;
    DAT_002cc7e0 = 0x30002;
    DAT_002cc7e8 = 0x47;
    DAT_002cc7f0 = 0x8000000044;
    DAT_002cc7f8 = 0x42;
    DAT_002cc800 = 5;
    DAT_002cc808 = 8;
    DAT_002cc818 = 0x40;
    DAT_002cc828 = 0x41;
    DAT_002cc838 = 0x3f;
    DAT_002cc840 = 0xa400000000000001;
    DAT_002cc848 = 0x5353535310;
    DAT_002cc830 = 0;
    if ((int)*(uint *)(param_1 + 0x22c) < 0) {
      fVar15 = *(float *)(param_1 + 0x23c);
    }
    else {
      fVar15 = *(float *)(param_1 + 0x23c);
    }
    iVar11 = (uVar3 >> 1) * -0x10;
    DAT_002cc858 = (long)(int)((float)*(uint *)(param_1 + 0x22c) * fVar15) | 0x3f80000000000000U |
                   (long)(int)((float)*(uint *)(param_1 + 0x234) * fVar15) << 0x10 |
                   (long)(int)((float)*(uint *)(param_1 + 0x230) * fVar15) << 8 |
                   (ulong)*(uint *)(param_1 + 0x238) << 0x18;
    DAT_002cc860 = 0x80000;
    iVar10 = (uVar3 >> 1) * 0x10;
    iVar13 = (uVar2 >> 1) * 0x10;
    DAT_002cc868 = (ulong)(iVar11 + 0x7ff8) | (ulong)((uVar2 >> 1) * -0x10 + 0x7ff8) << 0x10 |
                   0x800000000000;
    DAT_002cc880 = (ulong)(uVar2 * 0x10 - 8) << 0x10;
    DAT_002cc870 = uVar3 << 4 | DAT_002cc880;
    uVar7 = (ulong)(iVar13 + 0x7fe8) << 0x10;
    DAT_002cc878 = iVar10 + 0x7ff8 | uVar7 | 0x800000000000;
    DAT_002cc888 = iVar11 + 0x8000 | uVar7 | 0x800000000000;
    DAT_002cc898 = (ulong)(iVar10 + 0x8000) | (ulong)(iVar13 + 0x7ff8) << 0x10 | 0x800000000000;
    puVar14 = &DAT_002cc8a0;
    DAT_002cc820 = DAT_002cc810;
    DAT_002cc890 = DAT_002cc870;
  }
  *puVar14 = 0x1000000000008010;
  uVar7 = (ulong)uVar1 | (ulong)uVar4 << 0x10 | (ulong)uVar12 << 0x18;
  puVar14[1] = 0xe;
  iVar10 = *(int *)(param_1 + 0x24c);
  puVar14[2] = uVar7;
  puVar14[3] = 0x4c;
  puVar14[4] = uVar7;
  puVar14[5] = 0x4d;
  uVar12 = (0x800 - (uVar3 >> 1)) * 0x10;
  uVar4 = (0x800 - (uVar2 >> 1)) * 0x10;
  uVar7 = (ulong)*(uint *)(param_1 + 0x12c0) | (ulong)(iVar10 - 0x30) << 0x18;
  puVar14[6] = uVar7;
  puVar14[7] = 0x4e;
  puVar14[8] = uVar7;
  uVar9 = CONCAT44(uVar4,uVar12);
  puVar14[9] = 0x4f;
  puVar14[10] = uVar9;
  puVar14[0xb] = 0x18;
  puVar14[0xc] = uVar9;
  puVar14[0xd] = 0x19;
  puVar14[0xe] = 0;
  puVar14[0xf] = 0x4a;
  puVar14[0x10] = 0;
  puVar14[0x11] = 0x4b;
  puVar14[0x12] = 0x8000000000;
  puVar14[0x13] = 0x3b;
  puVar14[0x14] = 1;
  puVar14[0x15] = 0x1a;
  puVar14[0x16] = 1;
  puVar14[0x17] = 0x46;
  puVar14[0x18] = (ulong)*(uint *)(param_1 + 0x21c);
  puVar14[0x19] = 0x45;
  puVar14[0x1a] = *(undefined8 *)(param_1 + 0x220);
  puVar14[0x1b] = 0x44;
  puVar14[0x1c] = 0;
  puVar14[0x1d] = 0x49;
  iVar10 = *(int *)(param_1 + 0x12d4);
  puVar14[0x1e] = 0;
  puVar14[0x1f] = 0x22;
  puVar14[0x20] = 0;
  puVar14[0x21] = 0x3f;
  puVar14[0x22] = 0x1000000000008006;
  puVar14[0x23] = 0xe;
  puVar14[0x24] = 0x30000;
  puVar14[0x25] = 0x47;
  puVar14[0x26] = 6;
  puVar14[0x27] = 0;
  puVar14[0x28] = ((long)iVar10 | 0xffffffff80000000U) & 0xffffffff | 0x3f80000000000000;
  puVar14[0x29] = 1;
  puVar14[0x2a] = (ulong)uVar12 | (ulong)uVar4 << 0x10;
  puVar14[0x2b] = 5;
  puVar14[0x2c] =
       (ulong)(((uVar3 >> 1) + 0x800) * 0x10) | (ulong)(((uVar2 >> 1) + 0x800) * 0x10) << 0x10;
  puVar14[0x2d] = 5;
  puVar14[0x2e] = 0x500ad;
  puVar14[0x2f] = 0x47;
  FlushCache(0);
  FUN_00216198(0x2cc7a0,(uint)(puVar14 + -0x598c4) >> 4,6);
  return;
}

