/* Ghidra pseudocode. PS2 address: 00264390. Not validated source. */

void _iDisableIntc(void)

{
  syscall(0xffffffffffffffe5);
  return;
}

