/* Ghidra pseudocode. PS2 address: 00187e10. Not validated source. */

void FUN_00187e10(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)DAT_002915dc * 0.0078125;
  fVar2 = (float)DAT_002915e0 * 0.0078125;
  DAT_002915ec = param_1 + 0.5;
  fVar3 = (float)DAT_002915e4 * 0.0078125;
  if (DAT_002915ec < 0.0) {
    DAT_002915ec = 0.0;
  }
  else if (2.0 < DAT_002915ec) {
    DAT_002915ec = 2.0;
  }
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  else if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  DAT_002915dc = FUN_00258848(fVar1 * 128.0);
  fVar1 = 0.0;
  if ((0.0 <= fVar2) && (fVar1 = fVar2, 1.0 < fVar2)) {
    fVar1 = 1.0;
  }
  DAT_002915e0 = FUN_00258848(fVar1 * 128.0);
  fVar2 = 0.0;
  if ((0.0 <= fVar3) && (fVar2 = fVar3, 1.0 < fVar3)) {
    fVar2 = 1.0;
  }
  DAT_002915e4 = FUN_00258848(fVar2 * 128.0);
  if (param_1 != DAT_0027acfc) {
    DAT_0027bbfc = 1;
    DAT_0027acfc = param_1;
  }
  return;
}

