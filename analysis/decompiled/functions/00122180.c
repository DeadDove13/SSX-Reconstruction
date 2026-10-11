/* Ghidra pseudocode. PS2 address: 00122180. Not validated source. */

undefined8 FUN_00122180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  FUN_001860e8();
  *(undefined **)((int)param_1 + 8) = &DAT_002a8c98;
  uVar1 = FUN_00197ca0(param_3,param_1,param_3);
  *(undefined4 *)((int)param_1 + 0x28) = uVar1;
  return param_1;
}

