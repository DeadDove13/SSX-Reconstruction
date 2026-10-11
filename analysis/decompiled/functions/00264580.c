/* Ghidra pseudocode. PS2 address: 00264580. Not validated source. */

void iResumeThread(void)

{
  syscall(0xffffffffffffffc6);
  return;
}

