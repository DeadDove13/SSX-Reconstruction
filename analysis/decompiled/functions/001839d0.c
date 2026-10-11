/* Ghidra pseudocode. PS2 address: 001839d0. Not validated source. */

void FUN_001839d0(int param_1,long param_2)

{
  long lVar1;
  
  *(int *)(param_1 + 0x6e8) = (int)param_2;
  if (param_2 == 0) {
    do {
      lVar1 = FUN_00182580(0x285290);
    } while (lVar1 != 0);
  }
  return;
}

