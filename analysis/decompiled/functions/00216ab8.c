/* Ghidra pseudocode. PS2 address: 00216ab8. Not validated source. */

void FUN_00216ab8(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1 + 1;
  *(undefined4 *)param_1 = &DAT_002bd9f0;
  FUN_001a04d8(puVar1);
  FUN_001a0410(puVar1,2);
  FUN_002167f0(param_1,param_2);
  return;
}

