/* Ghidra pseudocode. PS2 address: 002643f0. Not validated source. */

void DeleteThread(void)

{
  syscall(0x21);
  return;
}

