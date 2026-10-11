/* Ghidra pseudocode. PS2 address: 001a03d8. Not validated source. */

undefined8 FUN_001a03d8(undefined8 param_1,undefined8 param_2)

{
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 0x30) = 0xffffffff;
  FUN_001a0460(param_1,param_2,0);
  return param_1;
}

