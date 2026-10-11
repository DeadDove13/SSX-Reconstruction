/* Ghidra pseudocode. PS2 address: 001d44d0. Not validated source. */

void FUN_001d44d0(undefined8 param_1,ulong param_2)

{
  if (8 < param_2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001d4518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_002b76e0)[(int)param_2])();
  return;
}

