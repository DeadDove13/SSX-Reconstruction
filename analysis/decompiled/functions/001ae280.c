/* Ghidra pseudocode. PS2 address: 001ae280. Not validated source. */

void FUN_001ae280(int param_1,int *param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x44 + param_3 * 4);
  iVar5 = iVar5 - (uint)(0 < iVar5);
  iVar4 = param_3 * 0x60 + 0x28adf0;
  if (*param_2 != -1) {
    piVar3 = (int *)(iVar5 * 0x10 + iVar4);
    do {
      iVar5 = iVar5 + 1;
      iVar2 = *param_2;
      piVar3[1] = param_2[1];
      *piVar3 = iVar2;
      piVar3[2] = (int)((float)param_2[2] * *(float *)(param_1 + 0x24));
      pfVar1 = (float *)(param_2 + 3);
      param_2 = param_2 + 4;
      iVar2 = *param_2;
      piVar3[3] = (int)(*pfVar1 * *(float *)(param_1 + 0x28));
      piVar3 = piVar3 + 4;
    } while (iVar2 != -1);
  }
  *(int *)(iVar5 * 0x10 + iVar4) = *param_2;
  *(int *)(param_1 + 0x44 + param_3 * 4) = iVar5 + 1;
  return;
}

