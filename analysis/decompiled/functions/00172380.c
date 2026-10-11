/* Ghidra pseudocode. PS2 address: 00172380. Not validated source. */

undefined8 FUN_00172380(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_0016c3d0();
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0xb50) = param_2;
  *(undefined4 *)(iVar2 + 0xb58) = 0;
  *(undefined4 *)(iVar2 + 0xb60) = 0;
  *(undefined4 *)(iVar2 + 0xb54) = 0;
  *(undefined **)(iVar2 + 4) = &DAT_002b0d08;
  *(undefined4 *)(iVar2 + 0xb38) = 7;
  uVar1 = FUN_00152f20(0x27a598);
  *(undefined4 *)(iVar2 + 0xb5c) = uVar1;
  return param_1;
}

