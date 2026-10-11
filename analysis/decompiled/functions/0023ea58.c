/* Ghidra pseudocode. PS2 address: 0023ea58. Not validated source. */

void DeleteSema(void)

{
  syscall(0x41);
  return;
}

