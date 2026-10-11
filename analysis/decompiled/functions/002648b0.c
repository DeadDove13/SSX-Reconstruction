/* Ghidra pseudocode. PS2 address: 002648b0. Not validated source. */

void sceSifStopDma(void)

{
  syscall(0x6b);
  return;
}

