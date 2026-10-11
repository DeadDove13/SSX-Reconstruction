/* Ghidra pseudocode. PS2 address: 002649a0. Not validated source. */

void sceSifSetDma(void)

{
  syscall(0x77);
  return;
}

