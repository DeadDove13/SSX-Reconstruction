/* Ghidra pseudocode. PS2 address: 002645c0. Not validated source. */

void EndOfHeap(void)

{
  syscall(0x3e);
  return;
}

