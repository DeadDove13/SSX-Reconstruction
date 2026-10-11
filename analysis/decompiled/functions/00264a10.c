/* Ghidra pseudocode. PS2 address: 00264a10. Not validated source. */

void Deci2Call(void)

{
  syscall(0x7c);
  return;
}

