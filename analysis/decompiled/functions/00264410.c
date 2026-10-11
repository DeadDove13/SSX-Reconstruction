/* Ghidra pseudocode. PS2 address: 00264410. Not validated source. */

void ExitThread(void)

{
  syscall(0x23);
  return;
}

