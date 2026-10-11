/* Ghidra pseudocode. PS2 address: 0013f758. Not validated source. */

float FUN_0013f758(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 in_vf0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (((*(float *)(iVar1 + 0x18c) <= 0.0) && (*(int *)(iVar1 + 0x350) != 0xb)) &&
     (*(int *)(iVar1 + 0x350) != 0xc)) {
    auVar8 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0xd0));
    auVar9 = _lqc2(*(undefined1 (*) [16])(iVar1 + 0x110));
    auVar10 = _vaddbc(in_vf0,in_vf0);
    auVar8 = _vmul(auVar8,auVar9);
    _vaddabc(auVar8,auVar8);
    _vmaddabc(auVar10,auVar8);
    auVar8 = _vmaddbc(auVar10,auVar8);
    auVar8 = _qmfc2(auVar8._0_4_);
    fVar7 = 0.0;
    if (0.0 <= auVar8._0_4_) {
      fVar4 = *(float *)(iVar1 + 0x140) - *(float *)(iVar1 + 0x2e0);
      fVar3 = fVar4 * DAT_002c20bc + 0.5;
      fVar5 = (float)(int)fVar3;
      if (fVar3 < fVar5) {
        fVar5 = fVar5 - 1.0;
      }
      fVar3 = (DAT_002c20c4 - ABS(fVar4 - fVar5 * DAT_002c20c0)) / DAT_002c20c8;
      if (1.0 <= fVar3) {
        fVar3 = 1.0;
      }
      fVar4 = *(float *)(iVar1 + 0xa8);
      if ((0.0 < *(float *)(iVar1 + 0xac)) && (fVar4 < fVar3 * 5.5)) {
        fVar4 = fVar3 * 5.5;
      }
      if ((0.0 < fVar4) && (fVar5 = DAT_002c20cc - ABS(*(float *)(iVar1 + 0x1a4)), 0.0 < fVar5)) {
        fVar7 = DAT_002c20d0;
        if (0.0 <= *(float *)(iVar1 + 0x298)) {
          fVar7 = *(float *)(iVar1 + 0x298) * DAT_002c20d4 + DAT_002c20d8;
        }
        fVar7 = fVar4 * fVar5 * fVar7 + 0.0;
      }
      fVar5 = *(float *)(param_2 + 0x28) * DAT_002c20dc - *(float *)(iVar1 + 0xe0);
      fVar4 = DAT_002c20e0;
      if (fVar5 < DAT_002c20e0) {
        fVar4 = fVar5;
      }
      fVar5 = 0.0;
      if (0.0 < fVar4) {
        fVar6 = 0.0;
        fVar2 = (float)*(byte *)(*(int *)(iVar1 + 0x394) + 0xe) * DAT_002c20e4 * DAT_002c20e8 +
                DAT_002c20ec;
        if (0.0 <= fVar3) {
          fVar6 = fVar3 * fVar2 * fVar4 + 0.0;
        }
        if (*(int *)(*(int *)(iVar1 + 0x6cf4) + 8) == 0x50) {
          fVar5 = fVar2 * DAT_002c20f0 * fVar4 + 0.0;
        }
        if (fVar5 < fVar6) {
          fVar7 = fVar7 + fVar6;
        }
        else {
          fVar7 = fVar7 + fVar5;
        }
      }
      return *(float *)(param_2 + 0x2c) * fVar7;
    }
  }
  return 0.0;
}

