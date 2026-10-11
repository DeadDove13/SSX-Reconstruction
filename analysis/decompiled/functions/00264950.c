/* Ghidra pseudocode. PS2 address: 00264950. Not validated source. */

void SetVSyncFlag(void)

{
  syscall(0x73);
  return;
}

