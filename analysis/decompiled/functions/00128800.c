/* Ghidra pseudocode. PS2 address: 00128800. Not validated source. */

undefined8 FUN_00128800(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00122180();
  iVar2 = (int)param_1;
  *(undefined **)(iVar2 + 8) = &DAT_002a98c8;
  FUN_001978a0(param_3,iVar2 + 0x2c,0x20);
  uVar1 = FUN_00197d80(param_3,param_3);
  *(undefined4 *)(iVar2 + 0x4c) = uVar1;
  FUN_00128870(param_1);
  return param_1;
}

