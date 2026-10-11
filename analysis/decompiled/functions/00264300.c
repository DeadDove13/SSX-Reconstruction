/* Ghidra pseudocode. PS2 address: 00264300. Not validated source. */

void AddDmacHandler(void)

{
  syscall(0x12);
  return;
}

