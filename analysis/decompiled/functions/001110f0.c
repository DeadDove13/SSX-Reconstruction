/* Ghidra pseudocode. PS2 address: 001110f0. Not validated source. */

void FUN_001110f0(float param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(float *)(param_2 + 0xa8) == 0.0) {
    fVar4 = DAT_002c1368;
    if ((DAT_002c1368 <= param_1) && (fVar4 = param_1, DAT_002c136c < param_1)) {
      fVar4 = DAT_002c136c;
    }
    iVar1 = *(int *)(param_2 + 0x344);
  }
  else {
    iVar1 = *(int *)(param_2 + 0x344);
    fVar4 = param_1;
  }
  fVar2 = DAT_002c1370;
  if ((iVar1 != 2) && (fVar2 = DAT_002c1374, iVar1 == 0)) {
    fVar2 = DAT_002c1378;
  }
  fVar2 = *(float *)(param_2 + 0xe0) / fVar2;
  if (fVar2 < 1.0) {
    fVar4 = fVar4 * fVar2;
  }
  fVar3 = ABS(fVar4 - *(float *)(param_2 + 0x1a4)) * DAT_002c137c;
  fVar2 = DAT_002c1380;
  if ((DAT_002c1380 <= fVar3) && (fVar2 = fVar3, DAT_002c1384 < fVar3)) {
    fVar2 = DAT_002c1384;
  }
  if (*(int *)(param_2 + 0x210) - 3U < 2) {
    fVar2 = fVar2 * DAT_002c1388;
  }
  *(float *)(param_2 + 0x1a8) = fVar2;
  *(float *)(param_2 + 0x1ac) = fVar4;
  return;
}

