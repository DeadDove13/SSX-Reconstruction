/* Ghidra pseudocode. PS2 address: 00223900. Not validated source. */

int FUN_00223900(float param_1,float param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(*param_3 + 0x24);
  iVar1 = (int)*(short *)(*param_3 + 0x42);
  iVar3 = (int)(((float)iVar1 * (param_1 + (float)(iVar3 / 2))) / (float)iVar3);
  iVar1 = iVar1 + -1;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (iVar1 < iVar3) {
    iVar3 = iVar1;
  }
  iVar1 = *param_3;
  iVar4 = (int)(((float)(int)*(short *)(iVar1 + 0x42) *
                (param_2 + (float)(*(int *)(iVar1 + 0x24) / 2))) / (float)*(int *)(iVar1 + 0x24));
  iVar2 = *(short *)(iVar1 + 0x42) + -1;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (iVar2 < iVar4) {
    iVar4 = iVar2;
  }
  return *(int *)(param_4 + 4) + iVar4 * *(short *)(iVar1 + 0x42) * 0x30 + iVar3 * 0x30;
}

