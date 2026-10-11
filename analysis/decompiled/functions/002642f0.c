/* Ghidra pseudocode. PS2 address: 002642f0. Not validated source. */

void AddDmacHandler(void)

{
  syscall(0x12);
  return;
}

