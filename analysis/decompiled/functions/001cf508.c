/* Ghidra pseudocode. PS2 address: 001cf508. Not validated source. */

void FUN_001cf508(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[1] = 0xffffffff;
  *puVar1 = 0xffffffff;
  puVar1[2] = 0xffffffff;
  FUN_001cf490();
  FUN_001cf578(param_1);
  return;
}

