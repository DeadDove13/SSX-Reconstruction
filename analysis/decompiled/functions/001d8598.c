/* Ghidra pseudocode. PS2 address: 001d8598. Not validated source. */

int FUN_001d8598(float param_1,undefined8 param_2,int *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3 + 1;
  *param_3 = iVar2;
  if (iVar2 < *param_4) {
    iVar3 = param_4[1];
    iVar2 = iVar3 + iVar2 * 0x20;
    bVar1 = false;
    if ((*(float *)(iVar2 + 0x10) <= param_1) && (param_1 < *(float *)(iVar2 + 0x14))) {
      bVar1 = true;
    }
    if (bVar1) {
      return iVar2;
    }
    *param_3 = 0;
  }
  else {
    iVar3 = param_4[1];
    *param_3 = 0;
  }
  if (0 < *param_4 + -1) {
    do {
      bVar1 = false;
      if ((*(float *)(iVar3 + 0x10) <= param_1) && (param_1 < *(float *)(iVar3 + 0x14))) {
        bVar1 = true;
      }
      if (bVar1) {
        return iVar3;
      }
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      iVar3 = iVar3 + 0x20;
    } while (iVar2 + 1 < *param_4 + -1);
  }
  return iVar3;
}

