/* Ghidra pseudocode. PS2 address: 001f1910. Not validated source. */

void FUN_001f1910(undefined4 *param_1,int param_2,ulong param_3)

{
  if (param_3 < 6) {
                    /* WARNING: Could not recover jumptable at 0x001f1934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_002bc4d0)[(int)param_3])((&PTR_LAB_002bc4d0)[(int)param_3],param_2 + 1);
    return;
  }
  *param_1 = 0;
  return;
}

