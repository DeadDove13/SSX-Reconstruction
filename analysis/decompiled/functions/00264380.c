/* Ghidra pseudocode. PS2 address: 00264380. Not validated source. */

void _iEnableIntc(void)

{
  syscall(0xffffffffffffffe6);
  return;
}

