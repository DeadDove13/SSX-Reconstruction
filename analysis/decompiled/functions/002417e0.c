/* Ghidra pseudocode. PS2 address: 002417e0. Not validated source. */

int FUN_002417e0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (DAT_002c5b40 != 0) {
    if (DAT_002c5b40 == 0) {
      trap(7);
    }
    iVar1 = (param_1 * 100) / DAT_002c5b40;
  }
  return iVar1;
}

