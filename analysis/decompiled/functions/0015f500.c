/* Ghidra pseudocode. PS2 address: 0015f500. Not validated source. */

void FUN_0015f500(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_00280e40 + DAT_002c4744;
  DAT_002c4744 = DAT_002c4744 + 1;
  *puVar1 = param_2;
  return;
}

