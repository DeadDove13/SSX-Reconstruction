/* Ghidra pseudocode. PS2 address: 00252fe0. Not validated source. */

float FUN_00252fe0(float param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar3 = 0;
  if ((int)param_1 < 0x800000) {
    if (ABS(param_1) == 0.0) {
      return DAT_002bf904;
    }
    iVar3 = -0x19;
    if ((int)param_1 < 0) {
      return (param_1 - param_1) / 0.0;
    }
    param_1 = param_1 * 33554432.0;
  }
  if (0x7f7fffff < (int)param_1) {
    return param_1 + param_1;
  }
  uVar2 = (uint)param_1 & 0x7fffff;
  uVar1 = uVar2 + 0x4afb20 & 0x800000;
  iVar3 = iVar3 + -0x7f + ((int)param_1 >> 0x17) + ((int)uVar1 >> 0x17);
  fVar8 = (float)(uVar2 | uVar1 ^ 0x3f800000) - 1.0;
  if ((uVar2 + 0xf & 0x7fffff) < 0x10) {
    fVar4 = 0.0;
    if (fVar8 != 0.0) {
      fVar4 = fVar8 * fVar8 * (0.5 - fVar8 * 0.33333334);
      if (iVar3 == 0) {
        return fVar8 - fVar4;
      }
      return (float)iVar3 * 0.6931381 - ((fVar4 - (float)iVar3 * 9.058001e-06) - fVar8);
    }
    if (iVar3 != 0) {
      return (float)iVar3 * 0.6931381 + (float)iVar3 * 9.058001e-06;
    }
  }
  else {
    fVar7 = fVar8 / (fVar8 + 2.0);
    fVar6 = (float)iVar3;
    fVar5 = fVar7 * fVar7;
    fVar4 = fVar5 * fVar5;
    fVar4 = fVar5 * (fVar4 * (fVar4 * (fVar4 * 0.14798199 + 0.18183573) + 0.2857143) + 0.6666667) +
            fVar4 * (fVar4 * (fVar4 * 0.15313838 + 0.22222199) + 0.4);
    if (0 < (int)(uVar2 - 0x30a3d0 | 0x35c288 - uVar2)) {
      fVar5 = fVar8 * 0.5 * fVar8;
      if (iVar3 == 0) {
        return fVar8 - (fVar5 - fVar7 * (fVar5 + fVar4));
      }
      return fVar6 * 0.6931381 -
             ((fVar5 - (fVar7 * (fVar5 + fVar4) + fVar6 * 9.058001e-06)) - fVar8);
    }
    if (iVar3 == 0) {
      return fVar8 - fVar7 * (fVar8 - fVar4);
    }
    fVar4 = fVar6 * 0.6931381 - ((fVar7 * (fVar8 - fVar4) - fVar6 * 9.058001e-06) - fVar8);
  }
  return fVar4;
}

