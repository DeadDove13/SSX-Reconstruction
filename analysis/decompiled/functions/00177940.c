/* Ghidra pseudocode. PS2 address: 00177940. Not validated source. */

undefined8 FUN_00177940(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0016c3d0();
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0xb3c) = param_2;
  *(undefined **)(iVar1 + 4) = &DAT_002b1080;
  *(undefined4 *)(iVar1 + 0xb38) = 0;
  *(undefined4 *)(iVar1 + 0xb50) = 0;
  return param_1;
}

