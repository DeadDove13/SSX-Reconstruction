/* Ghidra pseudocode. PS2 address: 001ee350. Not validated source. */

undefined8
FUN_001ee350(undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  FUN_001ec448(param_1,*(int *)(param_2 + 0xc) + param_3 * 0x34,param_4,param_5);
  return param_1;
}

