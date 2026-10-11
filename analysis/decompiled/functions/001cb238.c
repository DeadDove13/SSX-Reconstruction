/* Ghidra pseudocode. PS2 address: 001cb238. Not validated source. */

void FUN_001cb238(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0xb) {
                    /* WARNING: Could not recover jumptable at 0x001cb258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_002b7380)[(int)param_2])();
    return;
  }
  return;
}

