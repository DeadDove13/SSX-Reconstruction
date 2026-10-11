/* Ghidra pseudocode. PS2 address: 0017ea00. Not validated source. */

undefined8 FUN_0017ea00(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0016c3d0();
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0xb38) = 8;
  *(undefined4 *)(iVar1 + 0xb3c) = param_2;
  *(undefined **)(iVar1 + 4) = &DAT_002b16d8;
  return param_1;
}

