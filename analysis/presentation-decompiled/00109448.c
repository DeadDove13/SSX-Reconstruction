
/* WARNING: Removing unreachable block (ram,0x001097f4) */
/* WARNING: Removing unreachable block (ram,0x00109840) */

void FUN_00109448(undefined4 param_1,float param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,long param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 in_vc6;
  undefined1 in_vf0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uStack_180;
  undefined4 uStack_17c;
  float fStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  float fStack_168;
  undefined4 uStack_164;
  undefined1 auStack_160 [24];
  int iStack_148;
  int iStack_144;
  undefined8 uStack_140;
  int iStack_138;
  int iStack_134;
  undefined1 auStack_120 [160];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  uVar2 = *param_4;
  iVar3 = *(int *)(param_4 + 1);
  iVar4 = *(int *)((int)param_4 + 0xc);
  piVar6 = (int *)param_3;
  piVar6[0x30] = (int)uVar2;
  piVar6[0x31] = (int)((ulong)uVar2 >> 0x20);
  piVar6[0x32] = iVar3;
  piVar6[0x33] = iVar4;
  iVar3 = 0x3f800000;
  uVar2 = *param_5;
  iVar4 = *(int *)(param_5 + 1);
  iVar5 = *(int *)((int)param_5 + 0xc);
  piVar6[0x34] = (int)uVar2;
  piVar6[0x35] = (int)((ulong)uVar2 >> 0x20);
  piVar6[0x36] = iVar4;
  piVar6[0x37] = iVar5;
  auVar10 = _lqc2(*(undefined1 (*) [16])(piVar6 + 0x34));
  auVar11 = _vaddbc(in_vf0,in_vf0);
  auVar10 = _vmul(auVar10,auVar10);
  _vaddabc(auVar10,auVar10);
  _vmaddabc(auVar11,auVar10);
  auVar10 = _vmaddbc(auVar11,auVar10);
  _vsqrt(auVar10);
  _vwaitq();
  uVar2 = _cfc2(in_vc6);
  piVar6[0x55] = 0;
  piVar6[0x38] = (int)uVar2;
  FUN_00112980();
  uStack_180 = 0;
  uStack_17c = 0;
  uStack_174 = 0;
  fStack_178 = (float)iVar3;
  FUN_001129e8(param_1,param_3,&uStack_180);
  piVar6[0x58] = 0;
  piVar6[0x59] = 0;
  piVar6[0x65] = 0;
  piVar6[99] = 0;
  piVar6[100] = 0;
  piVar6[0x68] = 0;
  piVar6[0x66] = 0;
  piVar6[0x67] = 0;
  piVar6[0x6b] = 0;
  piVar6[0x69] = 0;
  piVar6[0x6a] = 0;
  piVar6[0x6e] = 0;
  piVar6[0x6c] = 0;
  piVar6[0x6d] = 0;
  piVar6[0x71] = 0;
  piVar6[0x6f] = 0;
  piVar6[0x70] = 0;
  piVar6[0x77] = 0;
  piVar6[0x75] = 0;
  piVar6[0x76] = 0;
  piVar6[0x62] = 0;
  piVar6[0x60] = 0;
  piVar6[0x61] = 0;
  piVar6[0x74] = 0;
  piVar6[0x72] = 0;
  piVar6[0x73] = 0;
  piVar6[0x7a] = 0;
  piVar6[0x78] = 0;
  piVar6[0x79] = 0;
  piVar6[0x7d] = 0;
  piVar6[0x5b] = 0;
  piVar6[0x5c] = 0;
  piVar6[0x7b] = 0;
  piVar6[0x7c] = 0;
  piVar6[0x77] = 0;
  piVar6[0x75] = 0;
  piVar6[0x76] = 0;
  piVar6[0x80] = 0;
  piVar6[0x7e] = 0;
  piVar6[0x7f] = 0;
  piVar6[0x83] = 0;
  piVar6[0x81] = 0;
  piVar6[0x82] = 0;
  piVar6[0x88] = 0;
  piVar6[0x89] = 0;
  piVar6[0x8a] = iVar3;
  piVar6[0x8b] = 0;
  if (param_6 == 0) {
    uStack_174 = *(undefined4 *)((int)param_4 + 0xc);
    uStack_180 = (undefined4)*param_4;
    uStack_17c = (undefined4)((ulong)*param_4 >> 0x20);
    uStack_164 = *(undefined4 *)((int)param_4 + 0xc);
    uStack_170 = (undefined4)*param_4;
    uStack_16c = (undefined4)((ulong)*param_4 >> 0x20);
    fStack_178 = *(float *)(param_4 + 1) - (param_2 + 200.0);
    fStack_168 = *(float *)(param_4 + 1) + 200.0;
    FUN_00220610(0,auStack_120,&uStack_180,&uStack_170,2);
    fVar8 = (float)FUN_0021e000(0x299cc8,auStack_120,auStack_160,piVar6 + 0xd5);
    if (0.0 < fVar8) {
      piVar6[0x30] = (int)auStack_160._16_8_;
      piVar6[0x31] = SUB84(auStack_160._16_8_,4);
      piVar6[0x32] = iStack_148;
      piVar6[0x33] = iStack_144;
      fVar8 = DAT_002c1194;
      piVar6[0x88] = (int)uStack_140;
      piVar6[0x89] = (int)((ulong)uStack_140 >> 0x20);
      piVar6[0x8a] = iStack_138;
      piVar6[0x8b] = iStack_134;
      auVar10 = _lqc2(*(undefined1 (*) [16])(piVar6 + 0x88));
      auVar11 = _lqc2(*(undefined1 (*) [16])(piVar6 + 0x4c));
      _vopmula(auVar10,auVar11);
      auVar10 = _vopmsub(auVar11,auVar10);
      auVar10 = _vsub(auVar10,auVar10);
      auStack_70 = _sqc2(auVar10);
      auVar10 = _lqc2(auStack_70);
      auVar11 = _vaddbc(in_vf0,in_vf0);
      auVar10 = _vmul(auVar10,auVar10);
      _vaddabc(auVar10,auVar10);
      _vmaddabc(auVar11,auVar10);
      auVar10 = _vmaddbc(auVar11,auVar10);
      _vsqrt(auVar10);
      _vwaitq();
      uVar2 = _cfc2(in_vc6);
      fVar7 = (float)uVar2;
      auStack_80 = auStack_70;
      if (fVar8 < fVar7) {
        auVar10 = _qmtc2(fVar7);
        _vdiv(in_vf0,0,auVar10,0);
        auVar10 = _lqc2(auStack_70);
        uVar9 = _vwaitq();
        auVar10 = _vmulq(auVar10,uVar9);
        auStack_80 = _sqc2(auVar10);
        if (DAT_002c1198 < fVar7) {
          fVar7 = DAT_002c1198;
        }
        fVar8 = (float)FUN_00218410(fVar7);
        FUN_001129e8(-fVar8,param_3,auStack_80);
      }
    }
  }
  else {
    piVar6[0xcd] = -1;
    piVar6[0xb9] = -0x40800000;
    piVar6[0xba] = -0x40800000;
    piVar6[0x28] = 0;
  }
  piVar6[0x90] = (int)*(undefined8 *)(piVar6 + 0x88);
  piVar6[0x91] = (int)((ulong)*(undefined8 *)(piVar6 + 0x88) >> 0x20);
  piVar6[0x92] = piVar6[0x8a];
  piVar6[0x93] = piVar6[0x8b];
  uStack_180 = 0;
  uStack_17c = 0;
  fStack_178 = 0.0;
  uStack_174 = 0;
  piVar6[0xa8] = 0;
  piVar6[0xa9] = 0;
  piVar6[0xaa] = 0;
  piVar6[0xab] = 0;
  piVar6[0x32] = (int)((float)piVar6[0x32] + param_2);
  FUN_0010e208(piVar6 + 0x20c0);
  if (param_6 == 0) {
    iVar3 = piVar6[0x1b3d];
    if (iVar3 == 0) {
      iVar3 = piVar6[0x1b3e];
    }
    else {
      (**(code **)(*(int *)(iVar3 + 0x3d4) + 0x14))
                (iVar3 + *(short *)(*(int *)(iVar3 + 0x3d4) + 0x10));
      iVar3 = piVar6[0x1b3e];
    }
    if (iVar3 == 0) {
      iVar3 = piVar6[0xe5];
    }
    else {
      (**(code **)(*(int *)(iVar3 + 0x3d4) + 0x14))
                (iVar3 + *(short *)(*(int *)(iVar3 + 0x3d4) + 0x10));
      iVar3 = piVar6[0xe5];
    }
  }
  else {
    iVar3 = piVar6[0xe5];
  }
  if (*(int *)(iVar3 + 0x28) == 0) {
    iVar3 = piVar6[0x1b3d];
    piVar6[0x51] = 0;
    if (iVar3 == 0) goto LAB_0010986c;
    fVar8 = 0.0;
    fVar7 = DAT_002c11a4 * 0.0;
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  else {
    iVar3 = piVar6[0x1b3d];
    piVar6[0x51] = 1;
    fVar8 = DAT_002c11a0;
    if (iVar3 == 0) goto LAB_0010986c;
    fVar7 = DAT_002c119c * 1.0;
    *(undefined4 *)(iVar3 + 0xc) = 1;
  }
  *(float *)(iVar3 + 0x18) = fVar8 - fVar7;
LAB_0010986c:
  if (param_6 == 0) {
    if (0.0 < param_2) {
      FUN_0010b340(param_3,1);
      FUN_0010b330(param_3,0xd);
      if (piVar6[0x1b3d] != 0) {
        FUN_0014cd18(piVar6[0x1b3d],0x52,0,5);
      }
      FUN_0010e260(piVar6 + 0x20c0);
      piVar6[0x5e] = 3;
    }
    else {
      FUN_001125e8(param_3);
      FUN_0010b340(param_3,2);
      FUN_0010b330(param_3,3);
    }
  }
  else {
    FUN_0010b340(param_3,4);
    FUN_0010b330(param_3,1);
  }
  FUN_00110e58(param_3);
  if (piVar6[0xa1] == 0) {
    uVar9 = FUN_00136c30(piVar6 + 0x20dc);
    FUN_00107cb0(uVar9,param_3);
  }
  else {
    FUN_00136c30(piVar6 + 0x20dc);
    piVar6[0xa1] = 0;
  }
  iVar3 = *piVar6;
  pcVar1 = *(code **)(iVar3 + 0x8c);
  *(undefined4 *)(piVar6[0x2161] + 0x71c) = 0;
  iVar4 = piVar6[0x2161];
  *(undefined4 *)(iVar4 + 0x1e0) = 0;
  *(undefined4 *)(iVar4 + 0x1e4) = 0;
  *(undefined4 *)(iVar4 + 0x3c0) = 0;
  *(undefined4 *)(iVar4 + 0x3c4) = 0;
  (*pcVar1)((int)piVar6 + (int)*(short *)(iVar3 + 0x88));
  return;
}

