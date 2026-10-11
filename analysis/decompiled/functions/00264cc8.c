/* Ghidra pseudocode. PS2 address: 00264cc8. Not validated source. */

undefined8 FUN_00264cc8(undefined8 param_1,int param_2)

{
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 4) = 0x2000;
  return 0;
}

