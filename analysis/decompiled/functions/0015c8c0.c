/* Ghidra pseudocode. PS2 address: 0015c8c0. Not validated source. */

void FUN_0015c8c0(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = DAT_002c2510;
  if (DAT_002c46b8 == 0) {
    *(undefined4 *)(param_1 + 0x43c) = 0;
  }
  else {
    fVar4 = (float)FUN_001624f8(DAT_002c2514,0,DAT_002c2518,0,DAT_002c46bc / DAT_002c2510);
    fVar3 = DAT_002c251c;
    bVar1 = DAT_002c251c < fVar4;
    *(float *)(param_1 + 0x43c) = fVar4;
    if (bVar1) {
      *(float *)(param_1 + 0x43c) = fVar3;
    }
    DAT_002c46bc = DAT_002c46bc + DAT_002c2520;
    if (fVar2 <= DAT_002c46bc) {
      DAT_002c46b8 = 0;
    }
  }
  if (0 < DAT_002c46b4) {
    DAT_002c46b4 = DAT_002c46b4 + -1;
    *(undefined4 *)(param_1 + 0x43c) = 0x3f800000;
  }
  return;
}

