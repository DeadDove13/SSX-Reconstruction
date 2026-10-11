/* Ghidra pseudocode. PS2 address: 00126a10. Not validated source. */

undefined8 FUN_00126a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  float fVar1;
  
  FUN_00122128(param_1,param_2,2,param_3);
  fVar1 = *(float *)(param_4 + 8);
  *(undefined **)((int)param_1 + 8) = &DAT_002a9348;
  *(int *)((int)param_1 + 0x2c) = (int)(fVar1 * 60.0);
  return param_1;
}

