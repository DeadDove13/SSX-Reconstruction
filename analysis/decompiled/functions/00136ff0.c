/* Ghidra pseudocode. PS2 address: 00136ff0. Not validated source. */

void FUN_00136ff0(undefined8 param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  if (param_2 < 0) {
    iVar2 = -param_2;
  }
  iVar3 = (int)param_1;
  *(int *)(iVar3 + 0x2c) = param_2;
  iVar2 = FUN_00137d50(param_1,iVar2);
  fVar1 = DAT_002c1cac;
  if (*(int *)(iVar3 + 0x44) < iVar2) {
    *(int *)(iVar3 + 0x44) = iVar2;
    *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) + fVar1;
  }
  return;
}

