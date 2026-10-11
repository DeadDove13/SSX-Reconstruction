/* Ghidra pseudocode. PS2 address: 002071b8. Not validated source. */

void FUN_002071b8(undefined8 param_1,int param_2)

{
  *(undefined4 *)((int)param_1 + 0x35f80) = 0xffffffff;
  FUN_00207268();
  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      FUN_00207268(param_1);
    } while (param_2 != 0);
  }
  return;
}

