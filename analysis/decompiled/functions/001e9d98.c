/* Ghidra pseudocode. PS2 address: 001e9d98. Not validated source. */

void FUN_001e9d98(ushort *param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  short sVar4;
  short sVar5;
  int iVar6;
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  undefined8 in_a1_udw;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  undefined8 in_t1_udw;
  int iVar16;
  uint uVar17;
  short sVar18;
  short sStack_4e;
  short sStack_4c;
  
  iVar6 = ((uint)*param_2 - (uint)*param_1) * 0x10000;
  iVar8 = iVar6 >> 0x10;
  param_3 = param_3 & 0xffff;
  if (iVar8 < 1) {
    iVar16 = (iVar8 + 0x2000) * 0x10000 >> 0x10;
    sVar5 = -0x2000;
    if (iVar16 < 1) {
      iVar16 = iVar16 * -0x10000 >> 0x10;
      iVar8 = (iVar8 + 0x4000) * 0x10000 >> 0x10;
      sVar18 = -0x4000;
      goto LAB_001e9e50;
    }
    sVar4 = -(short)((uint)iVar6 >> 0x10);
    sVar18 = 0;
  }
  else {
    iVar6 = (iVar8 + -0x2000) * 0x10000;
    iVar16 = iVar6 >> 0x10;
    sVar5 = 0x2000;
    if (iVar16 < 1) {
      sVar18 = 0;
      iVar16 = iVar16 * -0x10000 >> 0x10;
      goto LAB_001e9e50;
    }
    sVar18 = 0x4000;
    sVar4 = 0x4000 - (short)((uint)iVar6 >> 0x10);
  }
  iVar8 = (int)sVar4;
LAB_001e9e50:
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  iVar6 = ((uint)uVar1 + (uint)uVar2) * 0x10000;
  iVar9 = iVar6 >> 0x10;
  uVar17 = (uint)uVar2;
  if (iVar9 < 1) {
    iVar9 = iVar9 + 0x2000;
    sStack_4e = (short)((-0x2000 - uVar17) * 0x10000 >> 0x10);
  }
  else {
    iVar9 = (0x2000 - uVar17) * 0x10000;
    sStack_4e = (short)((uint)iVar9 >> 0x10);
    iVar9 = (uint)uVar1 - (iVar9 >> 0x10);
  }
  iVar9 = iVar9 * 0x10000 >> 0x10;
  if (iVar9 < 0) {
    iVar9 = iVar9 * -0x10000 >> 0x10;
  }
  iVar6 = (int)(short)((short)((uint)iVar6 >> 0x10) + -0x6000);
  if (iVar6 < 0) {
    iVar6 = iVar6 * -0x10000 >> 0x10;
  }
  if (iVar6 < iVar9) {
    sStack_4e = (short)((0x6000 - uVar17) * 0x10000 >> 0x10);
    iVar9 = iVar6;
  }
  iVar6 = (int)((uVar1 - uVar17) * 0x10000) >> 0x10;
  iVar14 = (iVar6 + 0x4000) * 0x10000 >> 0x10;
  if (iVar14 < 0) {
    iVar14 = iVar14 * -0x10000 >> 0x10;
  }
  auVar7._8_8_ = in_a1_udw;
  auVar7._0_8_ = (long)iVar6;
  auVar7 = _pabsw(auVar7);
  auVar7 = _pextlw(0,auVar7._0_8_);
  iVar10 = (int)auVar7._0_2_;
  sVar4 = 0;
  if (iVar14 <= iVar10) {
    sVar4 = -0x4000;
    iVar10 = iVar14;
  }
  iVar6 = (iVar6 + -0x4000) * 0x10000 >> 0x10;
  if (iVar6 < 0) {
    iVar6 = iVar6 * -0x10000 >> 0x10;
  }
  if (iVar6 < iVar10) {
    sVar4 = 0x4000;
    iVar10 = iVar6;
  }
  iVar6 = ((uint)param_2[2] - (uint)param_1[2]) * 0x10000;
  iVar15 = iVar6 >> 0x10;
  iVar14 = (iVar15 + 0x4000) * 0x10000 >> 0x10;
  uVar13 = (ulong)iVar14;
  if ((long)uVar13 < 0) {
    uVar13 = (ulong)(iVar14 * -0x10000 >> 0x10);
  }
  auVar3._4_4_ = iVar6 >> 0x1f;
  auVar3._0_4_ = iVar15;
  auVar3._8_8_ = in_t1_udw;
  auVar7 = _pabsw(auVar3);
  auVar7 = _pextlw(0,auVar7._0_8_);
  sStack_4c = 0;
  if ((long)(int)auVar7._0_2_ < (long)uVar13) {
    uVar13 = (ulong)(int)auVar7._0_2_;
  }
  else {
    sStack_4c = -0x4000;
  }
  iVar14 = (iVar15 + -0x4000) * 0x10000;
  iVar6 = iVar14 >> 0x10;
  sVar11 = (short)(iVar15 + -0x4000);
  if (iVar14 >> 0x1f < 0) {
    sVar11 = -(short)((uint)iVar14 >> 0x10);
    iVar6 = iVar6 * -0x10000 >> 0x10;
  }
  if ((long)iVar6 < (long)uVar13) {
    uVar13 = (ulong)(uint)(int)sVar11;
    sStack_4c = 0x4000;
  }
  iVar6 = (iVar15 + 0x2000) * 0x10000 >> 0x10;
  uVar12 = (ulong)iVar6;
  if ((long)uVar12 < 0) {
    uVar12 = (ulong)(iVar6 * -0x10000 >> 0x10);
  }
  iVar14 = (iVar15 + -0x2000) * 0x10000;
  iVar6 = iVar14 >> 0x10;
  sVar11 = (short)(iVar15 + -0x2000);
  if (iVar14 >> 0x1f < 0) {
    sVar11 = -(short)((uint)iVar14 >> 0x10);
    iVar6 = iVar6 * -0x10000 >> 0x10;
  }
  if ((long)iVar6 < (long)uVar12) {
    uVar12 = (ulong)(uint)(int)sVar11;
    sVar11 = 0x2000;
  }
  else {
    sVar11 = -0x2000;
  }
  if (iVar16 + iVar9 + (int)uVar12 < iVar8 + iVar10 + (int)uVar13) {
    sVar5 = sVar5 + *param_1;
    sStack_4c = sVar11;
  }
  else {
    sStack_4e = sVar4 + uVar2;
    sVar5 = sVar18 + *param_1;
  }
  sStack_4c = sStack_4c + param_1[2];
  *param_1 = sVar5 + (short)((int)(((int)(short)*param_2 - (int)sVar5) * param_3) >> 0xf);
  param_1[1] = sStack_4e +
               (short)((int)(((int)(short)param_2[1] - (int)sStack_4e) * param_3) >> 0xf);
  param_1[2] = sStack_4c +
               (short)((int)(((int)(short)param_2[2] - (int)sStack_4c) * param_3) >> 0xf);
  return;
}

