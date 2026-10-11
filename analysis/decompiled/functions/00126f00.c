/* Ghidra pseudocode. PS2 address: 00126f00. Not validated source. */

undefined8 FUN_00126f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  FUN_00122128(param_1,param_2,9,param_3);
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 8) = &DAT_002a9d80;
  *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_4 + 8);
  *(int *)(iVar1 + 0x38) = (int)(*(float *)(param_4 + 0x10) * 60.0);
  if (*(int *)(param_4 + 0xc) == 0) {
    FUN_001271b8(param_1);
  }
  else {
    FUN_00127188(param_1);
  }
  return param_1;
}

