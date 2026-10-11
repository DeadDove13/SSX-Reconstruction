/* Ghidra pseudocode. PS2 address: 001111f0. Not validated source. */

void FUN_001111f0(float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = ABS(param_1 - *(float *)(param_2 + 0x1a4)) * DAT_002c138c;
  fVar2 = DAT_002c1390;
  if ((DAT_002c1390 <= fVar1) && (fVar2 = fVar1, DAT_002c1394 < fVar1)) {
    fVar2 = DAT_002c1394;
  }
  *(float *)(param_2 + 0x1a8) = fVar2;
  *(float *)(param_2 + 0x1ac) = param_1;
  return;
}

