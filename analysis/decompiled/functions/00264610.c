/* Ghidra pseudocode. PS2 address: 00264610. Not validated source. */

void iSignalSema(void)

{
  syscall(0xffffffffffffffbd);
  return;
}

