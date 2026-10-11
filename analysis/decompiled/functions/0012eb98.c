/* Ghidra pseudocode. PS2 address: 0012eb98. Not validated source. */

undefined8 FUN_0012eb98(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00122128(param_1,param_2,0x16,param_3);
  iVar2 = (int)param_1;
  iVar3 = iVar2 + 0x30;
  *(undefined **)(iVar2 + 8) = &DAT_002a8f48;
  FUN_001dfb30(iVar3);
  *(int *)(iVar2 + 0x2c) = (int)param_4;
  iVar1 = (int)param_4 + 8;
  if (param_4 == 0) {
    iVar1 = 0;
  }
  FUN_001dfb38(iVar3,param_3,iVar1);
  if (*(float *)(iVar2 + 0x30) < 0.0) {
    FUN_001e01a8(iVar3);
  }
  return param_1;
}

