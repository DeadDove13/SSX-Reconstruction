/* Ghidra pseudocode. PS2 address: 00126bf0. Not validated source. */

undefined8 FUN_00126bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  FUN_00122128(param_1,param_2,8,param_3);
  fVar2 = *(float *)(param_4 + 8);
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 8) = &DAT_002a9e68;
  fVar3 = *(float *)(param_4 + 0xc);
  *(int *)(iVar1 + 0x34) = (int)(fVar2 * 60.0);
  *(int *)(iVar1 + 0x38) = (int)(fVar3 * 60.0);
  return param_1;
}

