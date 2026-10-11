/* Ghidra pseudocode. PS2 address: 00264520. Not validated source. */

void _iWakeupThread(void)

{
  syscall(0xffffffffffffffcc);
  return;
}

