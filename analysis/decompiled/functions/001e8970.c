/* Ghidra pseudocode. PS2 address: 001e8970. Not validated source. */

void FUN_001e8970(undefined8 param_1,int param_2,long param_3)

{
  FUN_001eb0e0(param_2 + 0x6cfc);
  if (param_3 != 0) {
    FUN_001c1a40(*(undefined4 *)(*(int *)(param_2 + 0x8584) + 8));
    return;
  }
  return;
}

