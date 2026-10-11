/* Ghidra pseudocode. PS2 address: 002251e0. Not validated source. */

void FUN_002251e0(undefined4 param_1)

{
  if (DAT_0029a888 != '\0') {
    (&DAT_0029a89c)[DAT_0029a88c] = param_1;
    DAT_0029a88c = DAT_0029a88c + '\x01';
  }
  return;
}

