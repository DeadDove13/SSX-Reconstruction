/* Ghidra pseudocode. PS2 address: 0021a658. Not validated source. */

void FUN_0021a658(int param_1)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = **(int **)(param_1 + 4);
  piVar3 = *(int **)(param_1 + 4) + 9;
  if (0 < iVar2) {
    do {
      pfVar1 = (float *)*piVar3;
      if (*pfVar1 < *(float *)(param_1 + 0x18)) {
        *(float *)(param_1 + 0x18) = *pfVar1;
      }
      if (pfVar1[1] < *(float *)(param_1 + 0x1c)) {
        *(float *)(param_1 + 0x1c) = pfVar1[1];
      }
      if (pfVar1[2] < *(float *)(param_1 + 0x20)) {
        *(float *)(param_1 + 0x20) = pfVar1[2];
      }
      if (*(float *)(param_1 + 0x24) < pfVar1[3]) {
        *(float *)(param_1 + 0x24) = pfVar1[3];
      }
      if (*(float *)(param_1 + 0x28) < pfVar1[4]) {
        *(float *)(param_1 + 0x28) = pfVar1[4];
      }
      if (*(float *)(param_1 + 0x2c) < pfVar1[5]) {
        *(float *)(param_1 + 0x2c) = pfVar1[5];
      }
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + 1;
    } while (iVar2 != 0);
  }
  return;
}

