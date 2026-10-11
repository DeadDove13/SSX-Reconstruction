/* Ghidra pseudocode. PS2 address: 002642d0. Not validated source. */

void AddIntcHandler(void)

{
  syscall(0x10);
  return;
}

