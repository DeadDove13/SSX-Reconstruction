/* Ghidra pseudocode. PS2 address: 002643b0. Not validated source. */

void _iDisableDmac(void)

{
  syscall(0xffffffffffffffe3);
  return;
}

