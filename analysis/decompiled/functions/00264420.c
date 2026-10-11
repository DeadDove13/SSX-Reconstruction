/* Ghidra pseudocode. PS2 address: 00264420. Not validated source. */

void ExitDeleteThread(void)

{
  syscall(0x24);
  return;
}

