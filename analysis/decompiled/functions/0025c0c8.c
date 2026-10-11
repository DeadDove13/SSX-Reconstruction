/* Ghidra pseudocode. PS2 address: 0025c0c8. Not validated source. */

undefined8 FUN_0025c0c8(undefined8 param_1,undefined1 (*param_2) [16],uint param_3)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 in_a0_udw;
  uint uVar14;
  char *pcVar15;
  undefined8 in_a3_udw;
  uint uVar16;
  undefined8 in_t1_udw;
  undefined1 auVar17 [16];
  undefined8 in_t2_udw;
  undefined1 auVar18 [16];
  
  pcVar15 = (char *)param_1;
  uVar14 = (uint)param_2 | (uint)pcVar15;
  if ((uVar14 & 7) != 0) goto LAB_0025c230;
  uVar16 = 8;
  if ((uVar14 & 0xf) == 0) {
    uVar16 = 0x10;
  }
  if ((uVar14 & 0xf) == 0) {
    if (param_3 < uVar16) goto LAB_0025c230;
    auVar12._8_8_ = in_a3_udw;
    auVar12._0_8_ = 0x101010101010101;
    auVar3._8_8_ = in_a3_udw;
    auVar3._0_8_ = 0x101010101010101;
    auVar17 = _pcpyld(auVar12,auVar3);
    auVar11 = _psubb(~*param_2,auVar17);
    auVar4._8_8_ = in_a3_udw;
    auVar4._0_8_ = 0x8080808080808080;
    auVar5._8_8_ = in_a3_udw;
    auVar5._0_8_ = 0x8080808080808080;
    auVar18 = _pcpyld(auVar4,auVar5);
    auVar11 = _pand(auVar11,~*param_2);
    auVar12 = _pand(auVar11,auVar18);
    auVar11._8_8_ = in_a0_udw;
    auVar11._0_8_ = param_1;
    auVar11 = _pcpyud(auVar12,auVar11);
    if (auVar12._0_8_ != 0 || auVar11._0_8_ != 0) goto LAB_0025c230;
    puVar10 = *param_2;
    uVar6 = *(undefined4 *)(*param_2 + 4);
    uVar7 = *(undefined4 *)(*param_2 + 8);
    uVar8 = *(undefined4 *)(*param_2 + 0xc);
    param_3 = param_3 - 0x10;
    param_2 = param_2 + 1;
    *(undefined4 *)pcVar15 = *(undefined4 *)puVar10;
    *(undefined4 *)(pcVar15 + 4) = uVar6;
    *(undefined4 *)(pcVar15 + 8) = uVar7;
    *(undefined4 *)(pcVar15 + 0xc) = uVar8;
    pcVar15 = pcVar15 + 0x10;
    if (param_3 < 0x10) goto LAB_0025c230;
    auVar11 = _psubb(*param_2,auVar17);
    auVar11 = _pand(auVar11,~*param_2);
    auVar11 = _pand(auVar11,auVar18);
    auVar2._8_8_ = in_a0_udw;
    auVar2._0_8_ = param_1;
    auVar12 = _pcpyud(auVar11,auVar2);
    if (auVar11._0_8_ != 0 || auVar12._0_8_ != 0) goto LAB_0025c230;
    uVar13 = *(undefined8 *)*param_2;
  }
  else {
    if (param_3 < uVar16) goto LAB_0025c230;
    auVar17._8_8_ = in_t1_udw;
    auVar17._0_8_ = 0x101010101010101;
    auVar18._8_8_ = in_t2_udw;
    auVar18._0_8_ = 0x8080808080808080;
    if ((*(ulong *)*param_2 + 0xfefefefefefefeff & ~*(ulong *)*param_2 & 0x8080808080808080) != 0)
    goto LAB_0025c230;
    uVar13 = *(undefined8 *)*param_2;
  }
  while( true ) {
    param_3 = param_3 - 8;
    param_2 = (undefined1 (*) [16])(*param_2 + 8);
    *(undefined8 *)pcVar15 = uVar13;
    pcVar15 = pcVar15 + 8;
    if ((param_3 < 8) ||
       ((*(ulong *)*param_2 - auVar17._0_8_ & ~*(ulong *)*param_2 & auVar18._0_8_) != 0)) break;
    uVar13 = *(undefined8 *)*param_2;
  }
LAB_0025c230:
  do {
    uVar14 = param_3;
    if (uVar14 == 0) {
      return param_1;
    }
    cVar1 = (*param_2)[0];
    param_2 = (undefined1 (*) [16])(*param_2 + 1);
    *pcVar15 = cVar1;
    pcVar15 = pcVar15 + 1;
    param_3 = uVar14 - 1;
  } while (cVar1 != '\0');
  uVar16 = uVar14 - 2;
  uVar14 = uVar14 - 1;
  while (uVar9 = uVar16, uVar14 != 0) {
    *pcVar15 = '\0';
    pcVar15 = pcVar15 + 1;
    uVar16 = uVar9 - 1;
    uVar14 = uVar9;
  }
  return param_1;
}

