/* Ghidra pseudocode. PS2 address: 00264620. Not validated source. */

void WaitSema(void)

{
  syscall(0x44);
  return;
}

