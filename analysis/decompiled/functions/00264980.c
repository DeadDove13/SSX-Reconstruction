/* Ghidra pseudocode. PS2 address: 00264980. Not validated source. */

void sceSifDmaStat(void)

{
  syscall(0x76);
  return;
}

