/* Ghidra pseudocode. PS2 address: 002643a0. Not validated source. */

void _iEnableDmac(void)

{
  syscall(0xffffffffffffffe4);
  return;
}

