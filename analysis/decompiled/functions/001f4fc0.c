/* Ghidra pseudocode. PS2 address: 001f4fc0. Not validated source. */

int FUN_001f4fc0(float param_1,float param_2,int param_3)

{
  float fVar1;
  int iVar2;
  
  fVar1 = SQRT(param_1) - 0.5;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  iVar2 = 0;
  if ((fVar1 < param_2) && (0.0 < param_2)) {
    param_2 = (param_2 - fVar1) / param_2;
    iVar2 = (int)(param_2 * param_2 * (float)param_3);
  }
  return iVar2;
}

