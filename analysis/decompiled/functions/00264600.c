/* Ghidra pseudocode. PS2 address: 00264600. Not validated source. */

void SignalSema(void)

{
  syscall(0x42);
  return;
}

