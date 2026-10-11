/* Ghidra pseudocode. PS2 address: 002642e0. Not validated source. */

void RemoveIntcHandler(void)

{
  syscall(0x11);
  return;
}

