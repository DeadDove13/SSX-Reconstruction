/* Ghidra pseudocode. PS2 address: 001851a8. Not validated source. */

void FUN_001851a8(int param_1,ulong param_2)

{
  *(int *)(param_1 + 0x3c) = (int)param_2;
  if (param_2 < 0x15) {
                    /* WARNING: Could not recover jumptable at 0x001851dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_002b35a0)[(int)param_2])();
    return;
  }
  return;
}

