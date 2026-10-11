/* Ghidra pseudocode. PS2 address: 00136ec8. Not validated source. */

void FUN_00136ec8(float param_1,undefined8 param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (int)param_2;
  if ((int)param_1 == 2) {
    *(int *)(iVar1 + 0x98) = *(int *)(iVar1 + 0x98) + 1;
  }
  if ((int)param_1 == 3) {
    *(int *)(iVar1 + 0x9c) = *(int *)(iVar1 + 0x9c) + 1;
  }
  if ((int)param_1 == 5) {
    *(int *)(iVar1 + 0xa0) = *(int *)(iVar1 + 0xa0) + 1;
    fVar2 = *(float *)(iVar1 + 0x24);
  }
  else {
    fVar2 = *(float *)(iVar1 + 0x24);
  }
  if (fVar2 < param_1) {
    FUN_00137ea0(0xbf800000,param_2,0xc,(int)param_1);
    *(float *)(iVar1 + 0x24) = param_1;
  }
  return;
}

