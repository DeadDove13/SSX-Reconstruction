/* Ghidra pseudocode. PS2 address: 001f8b30. Not validated source. */

void FUN_001f8b30(undefined8 param_1,int param_2)

{
  if (*(int *)((int)param_1 + 0x8bb6c) != param_2) {
    *(int *)((int)param_1 + 0x8bb6c) = param_2;
    if (param_2 == 3) {
      FUN_001f2dd8(param_1);
      FUN_00209728(param_1,0);
      return;
    }
    if (param_2 == 5) {
      FUN_0020a780(param_1,2,0,0x10,0);
      return;
    }
  }
  return;
}

