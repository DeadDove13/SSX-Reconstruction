/* Ghidra pseudocode. PS2 address: 00264200. Not validated source. */

void _Exit(int __status)

{
  syscall(4);
  return;
}

