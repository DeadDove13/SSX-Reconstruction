/* Ghidra pseudocode. PS2 address: 002644e0. Not validated source. */

void ReferThreadStatus(void)

{
  syscall(0x30);
  return;
}

