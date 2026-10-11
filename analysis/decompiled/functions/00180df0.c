/* Ghidra pseudocode. PS2 address: 00180df0. Not validated source. */

undefined8 FUN_00180df0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0016c3d0();
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0xb50) = param_2;
  *(undefined **)(iVar1 + 4) = &DAT_002b2e08;
  *(undefined4 *)(iVar1 + 0xb38) = 9;
  FUN_00154218(0x27a598,1);
  return param_1;
}

