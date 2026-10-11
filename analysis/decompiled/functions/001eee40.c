/* Ghidra pseudocode. PS2 address: 001eee40. Not validated source. */

void FUN_001eee40(int param_1,undefined8 param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  
  pfVar1 = (float *)param_2;
  *(float *)(param_1 + 0x661c) = *pfVar1;
  *(float *)(param_1 + 0x6620) = pfVar1[1];
  *(float *)(param_1 + 0x6624) = pfVar1[2];
  fStack_60 = *pfVar1;
  fStack_5c = pfVar1[1];
  fStack_58 = pfVar1[2];
  if (*(float *)(param_1 + 0x661c) < 0.0) {
    fStack_60 = -fStack_60;
    fStack_5c = -fStack_5c;
    fStack_58 = -fStack_58;
  }
  iVar2 = *(int *)(param_1 + 0x6614);
  iVar3 = *(int *)(param_1 + 0x6610);
  if (0 < iVar2) {
    pfVar1 = (float *)(param_1 + 0x4070);
    do {
      *pfVar1 = fStack_60;
      iVar2 = iVar2 + -1;
      pfVar1[1] = fStack_5c;
      pfVar1[2] = fStack_58;
      pfVar1 = pfVar1 + 0x94;
    } while (iVar2 != 0);
  }
  iVar2 = 0;
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      FUN_001ee1b8(*(int *)(param_1 + 0x6584) + iVar3,param_2);
      iVar3 = iVar3 + 0x14;
    } while (iVar2 < *(int *)(param_1 + 0x6610));
  }
  return;
}

