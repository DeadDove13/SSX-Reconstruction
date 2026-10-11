/* Ghidra pseudocode. PS2 address: 00246b70. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00246b70(void)

{
  int iVar1;
  long lVar2;
  
  DAT_002d1e80 = 0xf;
  lVar2 = FUN_00267268(0x2d1800,1,0,0x2d1e80,0x80,0x2d1e80,0x80,0);
  if (lVar2 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_002d1e8c;
    if (DAT_002d1e8c == 1) {
      ram0x002a51e8 = 0;
    }
  }
  return iVar1;
}

