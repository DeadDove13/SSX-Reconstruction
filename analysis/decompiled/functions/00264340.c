/* Ghidra pseudocode. PS2 address: 00264340. Not validated source. */

void _EnableDmac(void)

{
  syscall(0x16);
  return;
}

