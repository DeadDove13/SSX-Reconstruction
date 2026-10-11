/* Ghidra pseudocode. PS2 address: 00122388. Not validated source. */

void FUN_00122388(undefined4 param_1,long param_2)

{
  if ((param_2 != 0) && (*(int *)((int)param_2 + 0x100) == 0)) {
    *(undefined4 *)((int)param_2 + 0x100) = param_1;
  }
  return;
}

