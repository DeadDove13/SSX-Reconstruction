/* Ghidra pseudocode. PS2 address: 0022f8c8. Not validated source. */

void FUN_0022f8c8(float param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  
  iVar2 = DAT_002a1c9c + param_2 * 0x54;
  *(undefined1 *)(iVar2 + 1) = 1;
  *(float *)(iVar2 + 0x10) = param_1;
  iVar4 = 0;
  if (DAT_002a1b30._5_1_ != 0) {
    iVar1 = 0;
    do {
      pfVar3 = (float *)(iVar2 + 0x24 + iVar1);
      fVar5 = *(float *)(iVar1 + param_3) * param_1;
      *pfVar3 = fVar5;
      if ((fVar5 < 0.005) && (-0.005 < fVar5)) {
        *pfVar3 = 0.0;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar4 * 4;
    } while (iVar4 < (int)(uint)DAT_002a1b30._5_1_);
  }
  return;
}

