/* Ghidra pseudocode. PS2 address: 00217410. Not validated source. */

void FUN_00217410(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_002c56e8;
  *(undefined4 *)param_1 = &DAT_002bd9a0;
  FUN_001fc918(uVar1);
  FUN_0019aa30((undefined4 *)param_1 + 0x1b,2);
  FUN_00216ab8(param_1,param_2);
  return;
}

