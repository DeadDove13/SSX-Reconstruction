/* Ghidra pseudocode. PS2 address: 002645f0. Not validated source. */

void DeleteSema(void)

{
  syscall(0x41);
  return;
}

