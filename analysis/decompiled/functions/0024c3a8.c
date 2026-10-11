/* Ghidra pseudocode. PS2 address: 0024c3a8. Not validated source. */

void FUN_0024c3a8(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8,uint param_9,uint param_10,int param_11)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  
  puVar3 = PTR_DAT_002a52a0;
  iVar5 = DAT_002a5b38 * 0x140;
  iVar1 = *(int *)(&DAT_002a59e4 + iVar5);
  iVar14 = ((int)param_8 >> 1) + param_6;
  puVar12 = (undefined4 *)(iVar5 + iVar1 * 0x1c + 0x2a5970);
  puVar10 = (undefined4 *)(iVar5 + iVar1 * 0x1c + 0x2a5900);
  iVar5 = (int)param_9 >> 1;
  if (param_10 != 0) {
    iVar5 = iVar5 << 1;
  }
  iVar8 = iVar5 + param_7 + param_4 + param_2;
  iVar5 = param_1[4];
  iVar11 = iVar14 >> 4;
  iVar13 = iVar8 >> 4;
  puVar6 = PTR_DAT_002a52a0 + (param_3 + param_4) * 0x20;
  puVar10[1] = iVar14 + iVar11 * -0x10;
  iVar5 = iVar11 * iVar5 + iVar13;
  iVar8 = iVar8 + iVar13 * -0x10;
  *puVar10 = puVar6;
  if ((param_9 & 1) == 0) {
    if (iVar8 + (param_5 << (param_10 & 0x1f)) < 0x11) {
      puVar10[2] = param_5;
      goto LAB_0024c52c;
    }
    iVar14 = (0x10 >> (param_10 & 0x1f)) - (iVar8 >> (param_10 & 0x1f));
    puVar10[2] = iVar14;
    puVar10[3] = param_5 - iVar14;
  }
  else if (iVar8 + (param_5 << (param_10 & 0x1f)) < 0x10) {
    puVar10[2] = param_5;
LAB_0024c52c:
    puVar10[3] = 0;
  }
  else {
    iVar14 = ((0x10 >> (param_10 & 0x1f)) - (iVar8 >> (param_10 & 0x1f))) + -1;
    puVar10[2] = iVar14;
    puVar10[3] = param_5 - iVar14;
  }
  iVar7 = (&DAT_002a58b8)[DAT_002a5b38 * 0x50] + iVar1 * 0x600;
  puVar10[4] = 0x10 << (param_10 & 0x1f);
  iVar15 = ((int)(param_8 - ((int)param_8 >> 0x1f)) >> 2) + (param_6 >> 1);
  puVar10[5] = iVar7 + iVar8 * 0x10;
  param_4 = param_4 >> 1;
  puVar10[6] = iVar7 + iVar8 * 0x10 + 0x300;
  param_5 = param_5 >> 1;
  iVar14 = (int)(param_9 - ((int)param_9 >> 0x1f)) >> 2;
  if (param_10 == 0) {
    iVar14 = iVar14 + (param_7 >> 1) + param_4 + param_2;
  }
  else {
    iVar14 = iVar14 * 2 + (param_7 >> 1) + param_4 + param_2;
  }
  iVar9 = iVar15 >> 3;
  uVar16 = (int)param_9 / 2 & 1;
  puVar12[1] = iVar15 + iVar9 * -8;
  iVar8 = iVar14 + (iVar14 >> 3) * -8;
  *puVar12 = puVar3 + (param_3 + param_4) * 0x10 + 0x200;
  if (uVar16 == 0) {
    if (8 < iVar8 + (param_5 << (param_10 & 0x1f))) {
      iVar15 = (8 >> (param_10 & 0x1f)) - (iVar8 >> (param_10 & 0x1f));
      puVar12[2] = iVar15;
      puVar12[3] = param_5 - iVar15;
      goto LAB_0024c6b0;
    }
    puVar12[2] = param_5;
  }
  else {
    if (7 < iVar8 + (param_5 << (param_10 & 0x1f))) {
      iVar15 = ((8 >> (param_10 & 0x1f)) - (iVar8 >> (param_10 & 0x1f))) + -1;
      puVar12[2] = iVar15;
      puVar12[3] = param_5 - iVar15;
      goto LAB_0024c6b0;
    }
    puVar12[2] = param_5;
  }
  puVar12[3] = 0;
LAB_0024c6b0:
  puVar12[4] = 8 << (param_10 & 0x1f);
  iVar4 = DAT_002a5b38 * 0x140;
  iVar15 = param_1[4];
  iVar2 = *param_1;
  iVar7 = ((iVar9 - iVar11) * 2 + ((iVar14 >> 3) - iVar13)) * 0x180 + iVar7;
  iVar14 = iVar1 * 4 + iVar4;
  puVar12[5] = iVar7 + iVar8 * 8 + 0x100;
  puVar3 = (&PTR_LAB_002a5b88)[param_11 << 2 | (param_8 & 1) << 1 | param_9 & 1];
  iVar1 = *(int *)(&DAT_002a59e4 + iVar4);
  puVar12[6] = iVar7 + iVar8 * 8 + 0x400;
  puVar6 = (&PTR_LAB_002a5ba8)[param_11 << 2 | ((int)param_8 / 2 & 1U) << 1 | uVar16];
  *(int *)(&DAT_002a58c0 + iVar14) = iVar2 + iVar5 * 0x180;
  *(undefined **)(&DAT_002a58e0 + iVar14) = puVar3;
  *(int *)(&DAT_002a58d0 + iVar14) = (iVar5 + iVar15) * 0x180 + iVar2;
  *(undefined **)(&DAT_002a58f0 + iVar14) = puVar6;
  *(int *)(&DAT_002a59e4 + iVar4) = iVar1 + 1;
  return;
}

