/* Ghidra pseudocode. PS2 address: 00264350. Not validated source. */

void _DisableDmac(void)

{
  syscall(0x17);
  return;
}

