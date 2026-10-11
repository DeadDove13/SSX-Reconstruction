/* Ghidra pseudocode. PS2 address: 002644d0. Not validated source. */

void GetThreadId(void)

{
  syscall(0x2f);
  return;
}

