/* Ghidra pseudocode. PS2 address: 00264430. Not validated source. */

void TerminateThread(void)

{
  syscall(0x25);
  return;
}

