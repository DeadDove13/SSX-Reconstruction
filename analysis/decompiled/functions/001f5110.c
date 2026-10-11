/* Ghidra pseudocode. PS2 address: 001f5110. Not validated source. */

void FUN_001f5110(int *param_1)

{
  if (*param_1 == 1) {
    FUN_00228a60(param_1[1]);
    return;
  }
  if (*param_1 != 2) {
    return;
  }
  FUN_00209ca0(param_1[3]);
  return;
}

