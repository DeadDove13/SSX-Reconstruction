/* Ghidra pseudocode. PS2 address: 002396d0. Not validated source. */

int * FUN_002396d0(void)

{
  int iVar1;
  
  iVar1 = 0;
  FUN_0023ee58(DAT_002a336c);
  if (0 < DAT_002a335c) {
    if (*DAT_002a3378 == 0) {
      *DAT_002a3378 = 1;
    }
    else {
      do {
        iVar1 = iVar1 + 1;
        if (DAT_002a335c <= iVar1) goto LAB_00239758;
      } while (DAT_002a3378[iVar1 * 0x13] != 0);
      DAT_002a3378[iVar1 * 0x13] = 1;
    }
  }
LAB_00239758:
  FUN_0023ea60(DAT_002a336c);
  if (iVar1 != DAT_002a335c) {
    return DAT_002a3378 + iVar1 * 0x13;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

