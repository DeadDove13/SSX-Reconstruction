/* Ghidra pseudocode. PS2 address: 001d2f98. Not validated source. */

void FUN_001d2f98(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  *puVar1 = 0;
  puVar1[2] = 0;
  FUN_001d3070();
  puVar1[0x409] = 0;
  puVar1[0x341b] = 0xffffffff;
  puVar1[0x341c] = 0xffffffff;
  puVar1[0x341d] = 0;
  puVar1[0x341f] = 0;
  puVar1[0x3420] = 0;
  FUN_001d3018(param_1,puVar1 + 0x340a);
  puVar1[4] = 0;
  puVar1[0x3421] = 0xffffffff;
  puVar1[0x308] = 0;
  puVar1[0x3422] = 0xffffffff;
  return;
}

