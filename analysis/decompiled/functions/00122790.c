/* Ghidra pseudocode. PS2 address: 00122790. Not validated source. */

undefined8 FUN_00122790(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  float fVar2;
  
  FUN_00122128(param_1,param_2,6,param_3);
  fVar2 = *(float *)(param_4 + 0xc);
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 8) = &DAT_002a8ac8;
  *(undefined2 *)(iVar1 + 0x34) = *(undefined2 *)(param_4 + 8);
  *(int *)(iVar1 + 0x38) = (int)(fVar2 * 60.0);
  *(undefined2 *)(iVar1 + 0x36) = 0;
  return param_1;
}

