/* Ghidra pseudocode. PS2 address: 00264510. Not validated source. */

void WakeupThread(void)

{
  syscall(0x33);
  return;
}

