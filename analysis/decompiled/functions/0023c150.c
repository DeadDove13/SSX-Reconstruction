/* Ghidra pseudocode. PS2 address: 0023c150. Not validated source. */

undefined8 FUN_0023c150(int param_1,uint param_2,undefined8 param_3)

{
  if (param_2 < *(uint *)(param_1 + 8)) {
    *(undefined4 *)param_3 = *(undefined4 *)(param_1 + param_2 * 8 + 0x10);
    return param_3;
  }
  *(undefined4 *)param_3 = 0;
  return param_3;
}

