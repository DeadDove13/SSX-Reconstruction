/* Ghidra pseudocode. PS2 address: 001d49e8. Not validated source. */

void FUN_001d49e8(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0xb) {
                    /* WARNING: Could not recover jumptable at 0x001d4a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_002b7710)[(int)param_2])();
    return;
  }
  return;
}

