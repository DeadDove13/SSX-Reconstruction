/* Ghidra pseudocode. PS2 address: 00164da8. Not validated source. */

bool FUN_00164da8(int param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar2 = FUN_00189b78(DAT_002859e4,0);
  iVar4 = (int)param_2;
  if (*(float *)(iVar2 + 0xe0) * DAT_002c26dc < *(float *)(iVar4 + 0x5c) * DAT_002c26e0) {
    return false;
  }
  sVar1 = *(short *)(iVar4 + 0x36);
  if (sVar1 == 0) {
    if (*(short *)(iVar4 + 0x38) < 0) {
      return false;
    }
    if (-1 < *(short *)(iVar4 + 0x3a)) {
      lVar3 = FUN_00202518(DAT_002c56e8,param_2);
      *(int *)(param_1 + 0x14) = (int)lVar3;
      return lVar3 != -1;
    }
  }
  else if ((sVar1 != 1) && (sVar1 == 2)) {
    return false;
  }
  return false;
}

