/* Ghidra pseudocode. PS2 address: 00255808. Not validated source. */

float FUN_00255808(float param_1,long param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = (int)((uint)param_1 & 0x7f800000) >> 0x17;
  if (iVar1 == 0) {
    if (ABS(param_1) == 0.0) {
      return param_1;
    }
    param_1 = param_1 * 33554432.0;
    iVar1 = ((int)((uint)param_1 & 0x7f800000) >> 0x17) + -0x19;
    if (param_2 < -50000) {
      return param_1 * 1e-30;
    }
  }
  iVar2 = iVar1 + (int)param_2;
  if (iVar1 == 0xff) {
    return param_1 + param_1;
  }
  if (iVar2 < 0xff) {
    if (0 < iVar2) {
      return (float)((uint)param_1 & 0x807fffff | iVar2 * 0x800000);
    }
    if (-0x19 < iVar2) {
      return (float)((uint)param_1 & 0x807fffff | (iVar2 + 0x19) * 0x800000) * 2.9802322e-08;
    }
    fVar4 = 1e-30;
    if (param_2 < 0xc351) goto LAB_00255918;
  }
  fVar4 = 1e+30;
LAB_00255918:
  fVar3 = (float)FUN_002559b0(fVar4,param_1);
  return fVar3 * fVar4;
}

