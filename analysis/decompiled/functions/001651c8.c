/* Ghidra pseudocode. PS2 address: 001651c8. Not validated source. */

undefined4 FUN_001651c8(int param_1,float *param_2)

{
  if ((((*(float *)(param_1 + 0xc) <= *param_2) && (*param_2 <= *(float *)(param_1 + 0x18))) &&
      (*(float *)(param_1 + 0x10) <= param_2[1])) &&
     (((param_2[1] <= *(float *)(param_1 + 0x1c) && (*(float *)(param_1 + 0x14) <= param_2[2])) &&
      (param_2[2] <= *(float *)(param_1 + 0x20))))) {
    return 1;
  }
  return 0;
}

