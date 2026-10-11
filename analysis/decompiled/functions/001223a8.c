/* Ghidra pseudocode. PS2 address: 001223a8. Not validated source. */

void FUN_001223a8(int param_1,long param_2)

{
  if ((param_2 != 0) && (*(int *)((int)param_2 + 0x100) == param_1)) {
    *(undefined4 *)((int)param_2 + 0x100) = 0;
  }
  return;
}

