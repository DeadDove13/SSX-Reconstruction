/* Ghidra pseudocode. PS2 address: 0022fce0. Not validated source. */

void FUN_0022fce0(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (*(float *)(param_1 + 8) != 0.0) {
    (*DAT_002a1ca0)(param_2,param_3,&DAT_002a1cc0 + param_4 * 4);
    DAT_002a28c0 = 0;
  }
  return;
}

