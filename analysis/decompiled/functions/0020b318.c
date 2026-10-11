/* Ghidra pseudocode. PS2 address: 0020b318. Not validated source. */

float FUN_0020b318(int param_1,float *param_2,undefined1 (*param_3) [16],undefined8 param_4)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_vf0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  
  *param_2 = 0.0;
  *(undefined4 *)*param_3 = 0;
  *(undefined4 *)(*param_3 + 4) = 0;
  *(undefined4 *)(*param_3 + 8) = 0;
  *(undefined4 *)(*param_3 + 0xc) = 0;
  FUN_0023bbd0(param_4,0,0x24);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    pauVar1 = (undefined1 (*) [16])(param_1 + 0x30);
    pfVar3 = (float *)&DAT_002bd400;
    fVar5 = *param_2;
    while( true ) {
      iVar2 = iVar2 + 1;
      fVar6 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      *param_2 = fVar5 + fVar6;
      auVar10 = _lqc2(*pauVar1);
      auVar9 = _qmtc2(fVar6);
      auVar9 = _vmulbc(auVar10,auVar9);
      auVar9 = _sqc2(auVar9);
      pauVar1 = pauVar1 + 2;
      auVar10 = _lqc2(*param_3);
      auVar9 = _lqc2(auVar9);
      auVar9 = _vadd(auVar10,auVar9);
      auVar9 = _sqc2(auVar9);
      *param_3 = auVar9;
      if (*(int *)(param_1 + 0x28) <= iVar2) break;
      fVar5 = *param_2;
    }
  }
  fStack_68 = *param_2;
  auVar9 = _qmtc2(fStack_68);
  _vdiv(in_vf0,0,auVar9,0);
  auVar9 = _lqc2(*param_3);
  uVar11 = _vwaitq();
  auVar9 = _vmulq(auVar9,uVar11);
  auVar9 = _sqc2(auVar9);
  *param_3 = auVar9;
  iVar2 = *(int *)(param_1 + 0x28);
  if (0 < iVar2) {
    pauVar1 = (undefined1 (*) [16])(param_1 + 0x30);
    pfVar3 = (float *)&DAT_002bd400;
    do {
      auVar9 = _lqc2(*pauVar1);
      auVar10 = _lqc2(*param_3);
      auVar9 = _vsub(auVar9,auVar10);
      auVar9 = _sqc2(auVar9);
      fVar7 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      fStack_70 = auVar9._0_4_;
      pauVar1 = pauVar1 + 2;
      pfVar4 = (float *)param_4;
      iVar2 = iVar2 + -1;
      fStack_6c = auVar9._4_4_;
      fStack_68 = auVar9._8_4_;
      fVar8 = fVar7 * fStack_70 * fStack_6c;
      fVar5 = fVar7 * fStack_6c * fStack_68;
      fVar6 = fVar7 * fStack_70 * fStack_68;
      *pfVar4 = *pfVar4 + fVar7 * (fStack_6c * fStack_6c + fStack_68 * fStack_68);
      pfVar4[4] = pfVar4[4] + fVar7 * (fStack_68 * fStack_68 + fStack_70 * fStack_70);
      pfVar4[8] = pfVar4[8] + fVar7 * (fStack_70 * fStack_70 + fStack_6c * fStack_6c);
      pfVar4[1] = pfVar4[1] - fVar8;
      pfVar4[2] = pfVar4[2] - fVar6;
      pfVar4[5] = pfVar4[5] - fVar5;
      pfVar4[3] = pfVar4[3] - fVar8;
      pfVar4[6] = pfVar4[6] - fVar6;
      pfVar4[7] = pfVar4[7] - fVar5;
    } while (iVar2 != 0);
  }
  return fStack_68;
}

