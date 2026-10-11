/* Ghidra pseudocode. PS2 address: 00264920. Not validated source. */

void GsPutIMR(void)

{
  syscall(0x71);
  return;
}

