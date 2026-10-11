/* Ghidra pseudocode. PS2 address: 00208a98. Not validated source. */

void FUN_00208a98(undefined8 param_1,ulong param_2)

{
  FUN_00243090(*(undefined4 *)param_1);
  FUN_0023a998(((undefined4 *)param_1)[0x11]);
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

