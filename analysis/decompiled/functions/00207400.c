/* Ghidra pseudocode. PS2 address: 00207400. Not validated source. */

void FUN_00207400(undefined8 param_1)

{
  if (*(int *)((int)param_1 + 0x35f88) != 0) {
    FUN_00205878(param_1,DAT_002c5760);
    FUN_00205878(param_1,DAT_002c5768);
    FUN_00207580(param_1);
    return;
  }
  return;
}

