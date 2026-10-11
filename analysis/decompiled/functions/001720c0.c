/* Ghidra pseudocode. PS2 address: 001720c0. Not validated source. */

undefined8 FUN_001720c0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0016c3d0();
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0xb50) = param_2;
  *(undefined4 *)(iVar1 + 0xb38) = 2;
  *(undefined **)(iVar1 + 4) = &DAT_002b0980;
  FUN_00154218(0x27a598,1);
  DAT_0027bc04 = 2;
  return param_1;
}

