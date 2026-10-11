/* Ghidra pseudocode. PS2 address: 00264560. Not validated source. */

void _iSuspendThread(void)

{
  syscall(0xffffffffffffffc8);
  return;
}

