/* Ghidra pseudocode. PS2 address: 00264470. Not validated source. */

void ChangeThreadPriority(void)

{
  syscall(0x29);
  return;
}

