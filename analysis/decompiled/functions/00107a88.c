/* Ghidra pseudocode. PS2 address: 00107a88. Not validated source. */

void FUN_00107a88(undefined8 param_1,long param_2)

{
  FUN_001a32b0(*(undefined4 *)(DAT_002859e4 + 0x30),0,0xffffffffffffffff);
  if (param_2 != 0) {
    FUN_0010b330(param_1,8);
    return;
  }
  FUN_0010b330(param_1,0x11);
  return;
}

