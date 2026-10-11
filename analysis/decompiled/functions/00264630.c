/* Ghidra pseudocode. PS2 address: 00264630. Not validated source. */

void PollSema(void)

{
  syscall(0x45);
  return;
}

