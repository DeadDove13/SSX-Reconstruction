/* Ghidra pseudocode. PS2 address: 00264310. Not validated source. */

void RemoveDmacHandler(void)

{
  syscall(0x13);
  return;
}

