/* Ghidra pseudocode. PS2 address: 002453e8. Not validated source. */

bool FUN_002453e8(void)

{
  long lVar1;
  
  lVar1 = FUN_00245458();
  if (lVar1 == 1) {
    REG_VIF0_FBRST = 8;
  }
  return lVar1 == 1;
}

