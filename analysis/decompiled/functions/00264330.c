/* Ghidra pseudocode. PS2 address: 00264330. Not validated source. */

void _DisableIntc(void)

{
  syscall(0x15);
  return;
}

