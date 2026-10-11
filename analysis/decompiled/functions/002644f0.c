/* Ghidra pseudocode. PS2 address: 002644f0. Not validated source. */

void iReferThreadStatus(void)

{
  syscall(0xffffffffffffffcf);
  return;
}

