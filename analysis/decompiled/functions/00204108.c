/* Ghidra pseudocode. PS2 address: 00204108. Not validated source. */

void FUN_00204108(int param_1,ulong param_2)

{
  *(int *)(param_1 + 0x8b6d4) = (int)param_2;
  if (param_2 < 6) {
                    /* WARNING: Could not recover jumptable at 0x00204148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_002bce80)[(int)param_2])();
    return;
  }
  return;
}

