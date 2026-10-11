/* Ghidra pseudocode. PS2 address: 001f1608. Not validated source. */

void FUN_001f1608(undefined4 *param_1,ulong param_2)

{
  if (param_2 < 10) {
                    /* WARNING: Could not recover jumptable at 0x001f1628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_002bc470)[(int)param_2])();
    return;
  }
  *param_1 = 0;
  return;
}

