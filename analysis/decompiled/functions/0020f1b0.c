/* Ghidra pseudocode. PS2 address: 0020f1b0. Not validated source. */

undefined4
FUN_0020f1b0(float param_1,undefined8 param_2,undefined8 param_3,undefined1 (*param_4) [16],
            int param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  float fVar8;
  undefined4 uVar9;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined4 uStack_c4;
  int iStack_c0;
  
  iStack_c0 = param_5 * 0xc;
  iVar6 = (int)param_2;
  iVar2 = *(int *)(iVar6 + 0xa0);
  auVar10 = _lqc2(*(undefined1 (*) [16])param_3);
  auVar11 = _lqc2(*param_4);
  auVar10 = _vsub(auVar10,auVar11);
  auVar10 = _sqc2(auVar10);
  fVar8 = param_1 + *(float *)(iStack_c0 + *(int *)(iVar2 + 0x20));
  auVar11 = _lqc2(auVar10);
  auVar12 = _lqc2(auVar10);
  auVar13 = _vaddbc(in_vf0,in_vf0);
  auVar11 = _vmul(auVar11,auVar12);
  _vaddabc(auVar11,auVar11);
  _vmaddabc(auVar13,auVar11);
  auVar11 = _vmaddbc(auVar13,auVar11);
  auVar11 = _qmfc2(auVar11._0_4_);
  if (auVar11._0_4_ < fVar8 * fVar8) {
    bVar1 = *(byte *)(*(int *)(iVar2 + 0x28) + param_6);
    if ((*(int *)(iVar2 + 0xc) <= param_5) || (uVar5 = 0, bVar1 == 0)) {
      auVar10 = _lqc2(auVar10);
      auVar13 = _vaddbc(in_vf0,in_vf0);
      auVar12 = _vmul(auVar10,auVar10);
      _vaddabc(auVar12,auVar12);
      _vmaddabc(auVar13,auVar12);
      auVar12 = _vmaddbc(auVar13,auVar12);
      _vrsqrt(in_vf0,auVar12);
      uVar9 = _vwaitq();
      auVar10 = _vmulq(auVar10,uVar9);
      auVar10 = _sqc2(auVar10);
      fVar8 = fVar8 - SQRT(auVar11._0_4_);
      auVar12 = _lqc2(auVar10);
      auVar11 = _qmtc2(fVar8);
      auVar11 = _vmulbc(auVar12,auVar11);
      auVar11 = _sqc2(auVar11);
      auStack_e0._12_4_ = auVar11._12_4_;
      auStack_f0._8_4_ = auVar11._8_4_;
      puVar7 = (undefined4 *)param_7;
      *puVar7 = auVar11._0_4_;
      puVar7[1] = auVar11._4_4_;
      puVar7[2] = auStack_f0._8_4_;
      puVar7[3] = auStack_e0._12_4_;
      auVar11 = _lqc2(auVar10);
      auVar10 = _qmtc2(param_1 - fVar8);
      auVar10 = _vmulbc(auVar11,auVar10);
      auVar10 = _sqc2(auVar10);
      auVar11 = _lqc2(*(undefined1 (*) [16])param_3);
      auVar10 = _lqc2(auVar10);
      auVar10 = _vsub(auVar11,auVar10);
      auVar10 = _sqc2(auVar10);
      uStack_c4 = auVar10._12_4_;
      auStack_f0._4_4_ = auVar10._4_4_;
      auStack_f0._8_4_ = auVar10._8_4_;
      puVar7 = (undefined4 *)param_8;
      *puVar7 = auVar10._0_4_;
      puVar7[1] = auStack_f0._4_4_;
      puVar7[2] = auStack_f0._8_4_;
      puVar7[3] = uStack_c4;
      return 1;
    }
    uVar9 = *(undefined4 *)(iStack_c0 + *(int *)(iVar2 + 0x20) + 0x10);
    uVar3 = (uint)bVar1;
    do {
      if ((uVar3 & 1) != 0) {
        auVar11 = _lqc2(*(undefined1 (*) [16])(uVar5 * 0x10 + iVar6 + 0x10));
        auVar10 = _qmtc2(uVar9);
        auVar10 = _vmulbc(auVar11,auVar10);
        auStack_f0 = _sqc2(auVar10);
        auVar10 = _lqc2(*param_4);
        auVar11 = _lqc2(auStack_f0);
        auVar10 = _vadd(auVar10,auVar11);
        auStack_100 = _sqc2(auVar10);
        auStack_e0 = auStack_100;
        lVar4 = FUN_0020f1b0(param_1,param_2,param_3,auStack_100,param_5 + 1,
                             (uVar5 + 1) *
                             *(int *)(iStack_c0 + *(int *)(*(int *)(iVar6 + 0xa0) + 0x20) + 8) +
                             param_6,param_7,param_8);
        if (lVar4 != 0) {
          return 1;
        }
      }
      uVar5 = uVar5 + 1;
      uVar3 = (int)(uint)bVar1 >> (uVar5 & 0x1f);
    } while ((int)uVar5 < 8);
  }
  return 0;
}

