/* Ghidra pseudocode. PS2 address: 001e5588. Not validated source. */

void FUN_001e5588(undefined8 param_1)

{
  FUN_001d98b8(param_1);
  if (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x48) == 0) {
    FUN_001036f0();
  }
  FUN_0015bbe0(*(undefined4 *)(DAT_002859e4 + 0xa0),*(undefined4 *)((int)param_1 + 0x18c));
  DAT_00291648 = 1;
  return;
}

