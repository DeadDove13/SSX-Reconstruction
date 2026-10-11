/* Ghidra pseudocode. PS2 address: 00163468. Not validated source. */

undefined4 FUN_00163468(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x180) == 0) {
    if (*(int *)(iVar1 + 0x188) == 0) {
      return 1;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x150) * 0x20 + param_2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = *(int *)(iVar1 + 0x34c);
    if (iVar1 == 5) {
      return 1;
    }
    if (iVar1 == 6) {
      return 1;
    }
  }
  else {
    piVar2 = (int *)(*(int *)(iVar1 + 0x150) * 0x20 + param_2);
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (DAT_002c266c < *(float *)(iVar1 + 0x8308))) {
      fStack_28 = *(float *)(iVar1 + 0x8318) - (float)piVar2[7];
      fStack_30 = *(float *)(iVar1 + 0x8310) - (float)piVar2[5];
      fStack_2c = *(float *)(iVar1 + 0x8314) - (float)piVar2[6];
      fVar3 = (float)FUN_0011ee88(&fStack_30,&fStack_30);
      if (*(float *)(*(int *)(param_1 + 4) + 0x184) <= SQRT(fVar3)) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

