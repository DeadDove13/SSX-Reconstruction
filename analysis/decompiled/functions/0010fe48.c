/* Ghidra pseudocode. PS2 address: 0010fe48. Not validated source. */

void FUN_0010fe48(float param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                 )

{
  float fVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [16];
  
  piVar6 = (int *)param_2;
  if (piVar6[0xd4] != 0x17) {
    fVar9 = *(float *)(param_3 + 0xec);
    fVar10 = *(float *)(param_3 + 0xf8);
    iVar7 = (int)param_5;
    if (fVar9 == 0.0) {
      FUN_0010f278(param_2,iVar7 + 0x20,1);
    }
    else {
      iVar5 = iVar7 + 0x20;
      FUN_001100d8(param_2,iVar5);
      FUN_001110c0(0xbf800000,&uStack_c0,iVar5);
      iVar4 = *(int *)(param_3 + 0x100);
      auVar11._4_4_ = uStack_bc;
      auVar11._0_4_ = uStack_c0;
      auVar11._8_4_ = uStack_b8;
      auVar11._12_4_ = uStack_b4;
      auVar11 = _lqc2(auVar11);
      auVar12 = _lqc2(*(undefined1 (*) [16])(piVar6 + 0x34));
      auVar13 = _vaddbc(in_vf0,in_vf0);
      auVar11 = _vmul(auVar11,auVar12);
      _vaddabc(auVar11,auVar11);
      _vmaddabc(auVar13,auVar11);
      auVar11 = _vmaddbc(auVar13,auVar11);
      auVar11 = _qmfc2(auVar11._0_4_);
      fVar1 = auVar11._0_4_;
      if ((iVar4 == 0) ||
         (lVar2 = (**(code **)(*(int *)(iVar4 + 8) + 0x54))
                            (iVar4 + *(short *)(*(int *)(iVar4 + 8) + 0x50)), lVar2 != 0)) {
        auVar12 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0x20));
        auVar11 = _qmtc2(param_1 * DAT_002c1304);
        auVar11 = _vmulbc(auVar12,auVar11);
        auStack_b0 = _sqc2(auVar11);
        uStack_c0 = auStack_b0._0_4_;
        uStack_bc = auStack_b0._4_4_;
        uStack_b8 = auStack_b0._8_4_;
        uStack_b4 = auStack_b0._12_4_;
        auVar11 = _lqc2(*(undefined1 (*) [16])(piVar6 + 0x30));
        auVar12 = _lqc2(auStack_b0);
        auVar11 = _vadd(auVar11,auVar12);
        auVar11 = _sqc2(auVar11);
        *(undefined1 (*) [16])(piVar6 + 0x30) = auVar11;
        FUN_00110ea8(param_2,&uStack_c0);
        fVar9 = fVar10 * fVar1 + fVar1;
        if (fVar9 < fVar1 + DAT_002c1308) {
          fVar9 = fVar1 + DAT_002c1308;
        }
        if (piVar6[0xd3] == 2) {
          FUN_0010fc30(param_2,param_5);
          iVar4 = *piVar6;
        }
        else {
          iVar4 = *piVar6;
        }
      }
      else {
        fVar8 = (float)FUN_0010a030(param_2);
        fVar8 = 1.0 / (fVar8 / fVar9 + 1.0);
        fVar9 = fVar1 * fVar8;
        fVar10 = fVar9 * fVar9 - (1.0 - fVar10) * fVar8;
        if (fVar10 < 0.0) {
          fVar10 = 0.0;
        }
        fVar9 = SQRT(fVar10) - fVar9;
        iVar4 = *piVar6;
      }
      (**(code **)(iVar4 + 0x6c))(fVar1 * DAT_002c130c,(int)piVar6 + (int)*(short *)(iVar4 + 0x68));
      auVar12 = _lqc2(*(undefined1 (*) [16])(iVar7 + 0x20));
      auVar11 = _qmtc2(fVar9);
      auVar11 = _vmulbc(auVar12,auVar11);
      auStack_b0 = _sqc2(auVar11);
      uStack_c0 = auStack_b0._0_4_;
      uStack_bc = auStack_b0._4_4_;
      uStack_b8 = auStack_b0._8_4_;
      uStack_b4 = auStack_b0._12_4_;
      auVar11 = _lqc2(*(undefined1 (*) [16])(piVar6 + 0x34));
      auVar12 = _lqc2(auStack_b0);
      auVar11 = _vadd(auVar11,auVar12);
      auVar11 = _sqc2(auVar11);
      *(undefined1 (*) [16])(piVar6 + 0x34) = auVar11;
      auVar11 = _lqc2(*(undefined1 (*) [16])(piVar6 + 0x34));
      auVar12 = _vaddbc(in_vf0,in_vf0);
      auVar11 = _vmul(auVar11,auVar11);
      _vaddabc(auVar11,auVar11);
      _vmaddabc(auVar12,auVar11);
      auVar11 = _vmaddbc(auVar12,auVar11);
      _vsqrt(auVar11);
      _vwaitq();
      uVar3 = _cfc2(in_vc6);
      piVar6[0x38] = (int)uVar3;
      FUN_00110cb0(fVar9,param_2,param_4,iVar5);
    }
  }
  return;
}

