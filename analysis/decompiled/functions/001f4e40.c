/* Ghidra pseudocode. PS2 address: 001f4e40. Not validated source. */

undefined8 FUN_001f4e40(undefined8 param_1)

{
  *(undefined4 *)param_1 = 0;
  ((undefined4 *)param_1)[0x15] = 0;
  return param_1;
}

