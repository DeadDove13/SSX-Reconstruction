/* Ghidra pseudocode. PS2 address: 00195f20. Not validated source. */

void FUN_00195f20(undefined8 param_1,long param_2)

{
  *(int *)((int)param_1 + 0x3928) = (int)param_2;
  if (param_2 != 0) {
    FUN_001939f8();
    FUN_00194de8(param_1,1);
    return;
  }
  return;
}

