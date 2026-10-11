/* Ghidra pseudocode. PS2 address: 001f57b0. Not validated source. */

void FUN_001f57b0(float param_1,int *param_2,long param_3)

{
  if (param_3 == -1) {
    param_2[0x15] = 1;
  }
  else {
    if (0x7f < param_3) {
      param_3 = 0x7f;
    }
    if (param_3 < 0) {
      param_3 = 0;
    }
  }
  if (*param_2 == 1) {
    if (param_2[0x15] != 0) {
      FUN_00228528(param_2[1],(int)(param_1 * 100.0));
      return;
    }
    FUN_00228610(param_2[1],param_3,param_3);
    return;
  }
  if (*param_2 != 2) {
    return;
  }
  if (param_2[0x15] != 0) {
    FUN_0020a010(param_2[3]);
    return;
  }
  *(char *)(param_2[3] + 8) = (char)param_3;
  return;
}

