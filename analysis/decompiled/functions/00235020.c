/* Ghidra pseudocode. PS2 address: 00235020. Not validated source. */

void FUN_00235020(void)

{
  if (DAT_002c5990 != 0) {
    DAT_002c5990 = 0;
    REG_RCNT1_MODE = 0;
    FUN_00265040(10);
    RemoveIntcHandler(10,0x235070);
    return;
  }
  return;
}

