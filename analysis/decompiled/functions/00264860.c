/* Ghidra pseudocode. PS2 address: 00264860. Not validated source. */

void FlushCache(void)

{
  syscall(100);
  return;
}

