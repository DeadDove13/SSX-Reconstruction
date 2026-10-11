/* Ghidra pseudocode. PS2 address: 001f5188. Not validated source. */

void FUN_001f5188(int *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  if (0x7f < param_2) {
    lVar1 = 0x7f;
  }
  if (lVar1 < 0) {
    lVar1 = 0;
  }
  if (*param_1 == 1) {
    if (param_2 == -1) {
      FUN_00228918(param_1[1]);
      return;
    }
    FUN_00228610(param_1[1],(int)(DAT_002c5528 * (float)(int)lVar1));
    return;
  }
  if (*param_1 != 2) {
    return;
  }
  if (param_2 == -1) {
    FUN_0020a010(param_1[3]);
    return;
  }
  *(char *)(param_1[3] + 8) = (char)lVar1;
  return;
}

