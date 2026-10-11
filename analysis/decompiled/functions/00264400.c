/* Ghidra pseudocode. PS2 address: 00264400. Not validated source. */

void _StartThread(void)

{
  syscall(0x22);
  return;
}

