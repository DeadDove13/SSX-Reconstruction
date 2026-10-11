/* Ghidra pseudocode. PS2 address: 001982e0. Not validated source. */

void FUN_001982e0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_001987d0();
    FUN_001963e0(*(undefined4 *)(DAT_002859e4 + 0x38),*(undefined4 *)(param_1 + 4),
                 *(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

