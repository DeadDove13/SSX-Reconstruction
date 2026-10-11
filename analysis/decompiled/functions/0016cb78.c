/* Ghidra pseudocode. PS2 address: 0016cb78. Not validated source. */

void FUN_0016cb78(undefined8 param_1)

{
  if (*(int *)((int)param_1 + 0x10) != 0) {
    FUN_0016eb08(param_1,0x348);
    FUN_0016eb08(param_1,0x324);
    FUN_0016eb08(param_1,0x168);
    FUN_0016eb08(param_1,0x169);
    FUN_0016eb08(param_1,0x161);
    if (DAT_002c5b88 != 0) {
      FUN_0016eae0(param_1,0x35a);
    }
    if (DAT_002c5b8c != 0) {
      FUN_0016eae0(param_1,0x359);
    }
    if (DAT_002c5b90 != 0) {
      FUN_0016eae0(param_1,0x35b);
    }
    if (DAT_002c5b94 != 0) {
      FUN_0016eae0(param_1,0x358);
    }
    *(undefined4 *)((int)param_1 + 0x10) = 0;
  }
  return;
}

