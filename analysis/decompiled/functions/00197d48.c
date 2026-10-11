/* Ghidra pseudocode. PS2 address: 00197d48. Not validated source. */

int FUN_00197d48(undefined8 param_1,undefined8 param_2)

{
  int aiStack_20 [4];
  
  FUN_001978a0(param_2,aiStack_20,4);
  return DAT_00299cf0 + aiStack_20[0];
}

