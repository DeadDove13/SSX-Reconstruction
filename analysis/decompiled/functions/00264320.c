/* Ghidra pseudocode. PS2 address: 00264320. Not validated source. */

void _EnableIntc(void)

{
  syscall(0x14);
  return;
}

