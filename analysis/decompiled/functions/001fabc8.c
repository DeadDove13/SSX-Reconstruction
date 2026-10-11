/* Ghidra pseudocode. PS2 address: 001fabc8. Not validated source. */

void FUN_001fabc8(float param_1,int param_2)

{
  if ((1.0 <= param_1) || (0.0 <= param_1)) {
    if (param_1 < 1.0) {
      *(float *)(param_2 + 0x8b6d8) = param_1;
    }
    else {
      *(undefined4 *)(param_2 + 0x8b6d8) = 0x3f800000;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x8b6d8) = 0;
  }
  FUN_00228460((char)(int)(*(float *)(param_2 + 0x8b6d8) * 127.0));
  return;
}

