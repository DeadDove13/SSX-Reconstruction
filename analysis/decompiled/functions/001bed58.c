/* Ghidra pseudocode. PS2 address: 001bed58. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001bed58(undefined8 param_1,int *param_2,int param_3,undefined1 (*param_4) [16],
                 undefined8 *param_5,int param_6,int param_7)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  uint *puVar3;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  ulong in_hi;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined1 in_vf0 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  int iStack_d0;
  undefined1 (*pauStack_cc) [16];
  int iStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined1 (*pauStack_bc) [16];
  undefined8 *puStack_b8;
  long lVar4;
  
  if ((param_2[1] & 1U) == 0) {
    uStack_c0 = DAT_002913b8;
    iStack_d0 = param_3;
    pauStack_cc = param_4;
    iStack_c8 = param_6;
    iStack_c4 = param_7;
    FUN_001c5148(0x2913b0,3,1);
    piVar12 = param_2 + 9;
    iVar14 = param_2[4];
    iVar10 = 0;
    iVar15 = param_2[5];
    iVar13 = param_2[6];
    if (0 < *param_2) {
      pauStack_bc = (undefined1 (*) [16])&iStack_120;
      puStack_b8 = &uStack_160;
      iVar11 = *piVar12;
      while( true ) {
        lVar4 = ((long)iStack_d0 | in_hi) + (long)(*(int *)(iVar11 + 0x24) * 0xc);
        puVar3 = (uint *)lVar4;
        in_hi = (ulong)(int)((ulong)lVar4 >> 0x20);
        FUN_001c5048(0x2913b0,(short)puVar3[1],1);
        uVar1 = *puVar3;
        if ((uVar1 & 1) == 0) {
          FUN_001c5310(0x2913b0,0,0);
        }
        else if ((uVar1 & 0x20) == 0) {
          if ((uVar1 & 0x10) != 0) {
            FUN_001c5310(0x2913b0,1,0);
          }
        }
        else {
          auVar21 = _lqc2(_DAT_002915b0);
          auVar22 = _lqc2(*pauStack_cc);
          auVar17 = _lqc2(_DAT_00291530);
          auVar18 = _lqc2(_DAT_00291540);
          auVar19 = _lqc2(_DAT_00291550);
          auVar20 = _lqc2(_DAT_00291560);
          _vmulabc(auVar17,auVar22);
          _vmaddabc(auVar18,auVar22);
          _vmaddabc(auVar19,auVar22);
          auVar17 = _vmaddbc(auVar20,auVar22);
          auVar17 = _vmulbc(auVar17,auVar21);
          auVar17 = _vmaxbc(auVar17,in_vf0);
          auVar17 = _vminibc(auVar17,auVar21);
          auVar17 = _vftoi0(auVar17);
          uVar16 = _vmtir(auVar17);
          uVar8 = _cfc2(uVar16);
          FUN_001c5310(0x2913b0,2,uVar8);
        }
        puVar5 = DAT_00292808;
        *DAT_00292808 = 0x1000000c;
        DAT_00292808[3] = 0x6c0b800000000000;
        puVar9 = DAT_00292808 + 1;
        DAT_00292808 = DAT_00292808 + 4;
        *puVar9 = 0;
        puVar5[2] = 0;
        pauVar2 = *(undefined1 (**) [16])(iVar10 * 4 + iStack_c8);
        *(undefined4 *)(*pauStack_bc + 0xc) = 0x3f800000;
        auVar17 = _lqc2(*pauStack_bc);
        auVar18 = _lqc2(*pauVar2);
        auVar19 = _lqc2(pauVar2[1]);
        auVar20 = _lqc2(pauVar2[2]);
        auVar21 = _lqc2(pauVar2[3]);
        auVar18 = _vmulbc(auVar18,auVar17);
        auVar19 = _vmulbc(auVar19,auVar17);
        auVar20 = _vmulbc(auVar20,auVar17);
        auVar17 = _vmulbc(auVar21,auVar17);
        auStack_110 = _sqc2(auVar18);
        auStack_100 = _sqc2(auVar19);
        auStack_f0 = _sqc2(auVar20);
        auStack_e0 = _sqc2(auVar17);
        *(int *)puStack_b8 = auStack_110._0_4_;
        *(int *)((int)puStack_b8 + 4) = auStack_110._4_4_;
        *(undefined4 *)(puStack_b8 + 1) = auStack_110._8_4_;
        *(undefined4 *)((int)puStack_b8 + 0xc) = auStack_110._12_4_;
        *(undefined4 *)(puStack_b8 + 2) = auStack_100._0_4_;
        *(undefined4 *)((int)puStack_b8 + 0x14) = auStack_100._4_4_;
        *(undefined4 *)(puStack_b8 + 3) = auStack_100._8_4_;
        *(undefined4 *)((int)puStack_b8 + 0x1c) = auStack_100._12_4_;
        *(undefined4 *)(puStack_b8 + 4) = auStack_f0._0_4_;
        *(undefined4 *)((int)puStack_b8 + 0x24) = auStack_f0._4_4_;
        *(undefined4 *)(puStack_b8 + 5) = auStack_f0._8_4_;
        *(undefined4 *)((int)puStack_b8 + 0x2c) = auStack_f0._12_4_;
        *(undefined4 *)(puStack_b8 + 6) = auStack_e0._0_4_;
        *(undefined4 *)((int)puStack_b8 + 0x34) = auStack_e0._4_4_;
        *(undefined4 *)(puStack_b8 + 7) = auStack_e0._8_4_;
        *(undefined4 *)((int)puStack_b8 + 0x3c) = auStack_e0._12_4_;
        puVar6 = DAT_00292808;
        puVar9 = (undefined8 *)(iStack_c4 + iVar10 * 0x10);
        iVar10 = iVar10 + 1;
        piVar12 = piVar12 + 1;
        *DAT_00292808 = uStack_160;
        puVar7 = DAT_00292808 + 0x18;
        DAT_00292808[1] = uStack_158;
        DAT_00292808[2] = uStack_150;
        DAT_00292808[3] = uStack_148;
        DAT_00292808[4] = uStack_140;
        DAT_00292808[5] = uStack_138;
        DAT_00292808[6] = *puVar9;
        DAT_00292808[7] = puVar9[1];
        DAT_00292808[8] = *param_5;
        DAT_00292808[9] = param_5[1];
        DAT_00292808[10] = param_5[2];
        DAT_00292808[0xb] = param_5[3];
        DAT_00292808[0xc] = param_5[4];
        DAT_00292808[0xd] = param_5[5];
        DAT_00292808[0xe] = param_5[8];
        DAT_00292808[0xf] = param_5[9];
        DAT_00292808[0x10] = param_5[10];
        DAT_00292808[0x11] = param_5[0xb];
        DAT_00292808[0x12] = param_5[0xc];
        DAT_00292808[0x13] = param_5[0xd];
        DAT_00292808[0x14] = param_5[0xe];
        DAT_00292808[0x15] = param_5[0xf];
        uVar1 = *(uint *)(iVar11 + 0x30);
        puVar9 = DAT_00292808 + 0x17;
        DAT_00292808 = DAT_00292808 + 0x1a;
        *puVar9 = 0;
        puVar6[0x16] = (ulong)uVar1 << 0x20 | 0x50000000;
        iStack_120 = iVar14;
        iStack_11c = iVar15;
        iStack_118 = iVar13;
        FUN_001d39e8(uStack_c0,puVar5,puVar7,0);
        if (*param_2 <= iVar10) break;
        iVar11 = *piVar12;
      }
    }
    FUN_001c5310(0x2913b0,0,0);
  }
  return;
}

