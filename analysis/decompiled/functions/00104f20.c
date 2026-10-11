/* Ghidra pseudocode. PS2 address: 00104f20. Not validated source. */

void FUN_00104f20(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = &DAT_002a85d0;
  FUN_00104fa8();
  FUN_0010ddf8(puVar1 + 0x20dc,2);
  FUN_0010de18(puVar1 + 0x20c0,2);
  FUN_001eb070(puVar1 + 0x1b3f,2);
  FUN_001ee3e8(puVar1 + 0x1b3,2);
  FUN_0020ac88(puVar1 + 0xe8,2);
  FUN_0010dda8(param_1,param_2);
  return;
}

