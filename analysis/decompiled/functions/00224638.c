/* Ghidra pseudocode. PS2 address: 00224638. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00224738) */
/* WARNING: Removing unreachable block (ram,0x0022473c) */
/* WARNING: Removing unreachable block (ram,0x00224790) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x0029a848 : 0x002247d4 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

long FUN_00224638(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *PTR_s_SNDAUTHOR__Dave_Mercier__Tuesday_002a1b08 = 0x53;
  if (DAT_0029a888 == '\0') {
    FUN_0022d8c8(param_1,param_2);
    FUN_00225488(param_1,param_2);
    if (DAT_0029a890 == 0) {
      lVar3 = 0;
      puVar1 = &DAT_0029a808;
      puVar2 = &DAT_0029a808;
      if (DAT_0029a7b4 == 0) {
        lVar3 = FUN_0022ada0();
        DAT_0029a820._4_2_ = 0x10;
        DAT_0029a7b4 = 1;
        DAT_0029a858 = CONCAT26(DAT_0029a820._6_2_,CONCAT24(0x10,(undefined4)DAT_0029a820));
        DAT_0029a860 = CONCAT71(DAT_0029a828._1_7_,(char)DAT_0029a828);
        DAT_0029a868 = DAT_0029a830;
        DAT_0029a870 = DAT_0029a838;
        DAT_0029a878 = DAT_0029a840;
        DAT_0029a880 = DAT_0029a848;
      }
      do {
        puVar4 = puVar2;
        puVar5 = puVar1;
        uVar6 = puVar5[1];
        uVar8 = puVar5[2];
        uVar7 = puVar5[3];
        *puVar4 = *puVar5;
        puVar4[1] = uVar6;
        puVar4[2] = uVar8;
        puVar4[3] = uVar7;
        puVar1 = puVar5 + 4;
        puVar2 = puVar4 + 4;
      } while (puVar5 + 4 != &DAT_0029a848);
      uVar7 = puVar5[5];
      puVar4[4] = DAT_0029a848;
      puVar4[5] = uVar7;
      if (lVar3 < 0) {
        return lVar3;
      }
      FUN_0022aec0();
      DAT_0029a858 = CONCAT26(DAT_0029a820._6_2_,
                              CONCAT24(DAT_0029a820._4_2_,(undefined4)DAT_0029a820));
      DAT_0029a860 = CONCAT71(DAT_0029a828._1_7_,(char)DAT_0029a828);
      DAT_0029a868 = DAT_0029a830;
      DAT_0029a870 = DAT_0029a838;
      DAT_0029a878 = DAT_0029a840;
      DAT_0029a880 = DAT_0029a848;
    }
    DAT_0029a8f0 = FUN_00225218(DAT_0029a890 * 0x6c);
    DAT_0029a8f4 = FUN_00225218((uint)DAT_0029a820._4_2_ * 0xc);
    if (DAT_0029a898 == (code *)0x0) {
      DAT_0029a898 = FUN_00224e30;
    }
    FUN_0022c0e8();
    DAT_0029a894 = 0;
    DAT_0029a889 = 0x7f;
    DAT_0029a88e = 0;
    DAT_0029a88c = 0;
    DAT_0029a88d = 0;
    lVar3 = FUN_0022b1a8();
    if (lVar3 < 0) {
      FUN_0022c198();
      FUN_0022c060();
      return lVar3;
    }
    DAT_0029a888 = '\x01';
    if ((char)DAT_0029a828 == '\x02') {
      DAT_0029a910 = 0xc000;
      DAT_0029a912 = 0x4000;
    }
    else {
      DAT_0029a910 = 0xe000;
      DAT_0029a912 = 0x2000;
    }
    FUN_0022a770();
  }
  return 0;
}

