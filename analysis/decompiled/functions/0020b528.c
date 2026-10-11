/* Ghidra pseudocode. PS2 address: 0020b528. Not validated source. */

void FUN_0020b528(int param_1,float *param_2)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x18);
  fVar4 = *(float *)(param_1 + 0x1c);
  param_2[4] = (float)uVar1;
  param_2[5] = (float)((ulong)uVar1 >> 0x20);
  param_2[6] = fVar3;
  param_2[7] = fVar4;
  *param_2 = param_2[4];
  param_2[1] = param_2[5];
  param_2[2] = param_2[6];
  param_2[3] = param_2[7];
  iVar2 = *(int *)(param_1 + 0x28);
  pfVar5 = (float *)(param_1 + 0x30);
  if (0 < iVar2) {
    do {
      fVar3 = pfVar5[4];
      if (*pfVar5 - fVar3 < *param_2) {
        *param_2 = *pfVar5 - fVar3;
      }
      if (pfVar5[1] - fVar3 < param_2[1]) {
        param_2[1] = pfVar5[1] - fVar3;
      }
      if (pfVar5[2] - fVar3 < param_2[2]) {
        param_2[2] = pfVar5[2] - fVar3;
      }
      if (param_2[4] < *pfVar5 + fVar3) {
        param_2[4] = *pfVar5 + fVar3;
      }
      if (param_2[5] < pfVar5[1] + fVar3) {
        param_2[5] = pfVar5[1] + fVar3;
      }
      if (param_2[6] < pfVar5[2] + fVar3) {
        param_2[6] = pfVar5[2] + fVar3;
      }
      iVar2 = iVar2 + -1;
      pfVar5 = pfVar5 + 8;
    } while (iVar2 != 0);
  }
  return;
}

