/* Ghidra pseudocode. PS2 address: 00243090. Not validated source. */

void FUN_00243090(int param_1)

{
  if (DAT_002c5b30 != 0) {
    *(undefined4 *)(param_1 * 4 + DAT_002c5b30) = 0;
  }
  return;
}

