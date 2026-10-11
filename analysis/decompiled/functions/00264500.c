/* Ghidra pseudocode. PS2 address: 00264500. Not validated source. */

void SleepThread(void)

{
  syscall(0x32);
  return;
}

