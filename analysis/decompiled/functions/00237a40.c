/* Ghidra pseudocode. PS2 address: 00237a40. Not validated source. */

undefined8 FUN_00237a40(void)

{
  int iVar1;
  
  if (DAT_002d0400 != 0) {
    if ((DAT_002c59cc != DAT_002d0404) || (DAT_002c59d0 != DAT_002d040c)) {
      FUN_00267c80(DAT_002d0404,DAT_002d040c,0);
    }
    iVar1 = FUN_00267df0(DAT_002d0404,DAT_002d0408,DAT_002d0410);
    DAT_002c59cc = DAT_002d0404;
    DAT_002c59d0 = DAT_002d040c + DAT_002d0410;
    DAT_002d0400 = 0;
    FUN_00239628(iVar1 == DAT_002d0410);
  }
  return 0;
}

