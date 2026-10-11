/* Ghidra pseudocode. PS2 address: 00184218. Not validated source. */

void FUN_00184218(int param_1,int param_2)

{
  *(int *)(param_1 + 0x10) = param_2;
  if (param_2 == 2) {
    FUN_001841b8(param_1,2);
    return;
  }
  if ((2 < param_2) && (param_2 == 3)) {
    FUN_001841b8(param_1,1);
    return;
  }
  FUN_001841b8(param_1,0);
  return;
}

