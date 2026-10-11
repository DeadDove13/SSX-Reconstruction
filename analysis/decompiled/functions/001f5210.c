/* Ghidra pseudocode. PS2 address: 001f5210. Not validated source. */

void FUN_001f5210(int *param_1)

{
  param_1[2] = 0;
  if (*param_1 == 1) {
    FUN_00228528(param_1[1],0x19,0xffffffffffffffff);
    return;
  }
  return;
}

