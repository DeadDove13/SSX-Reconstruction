/* Ghidra pseudocode. PS2 address: 00242d40. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00242da0) */
/* WARNING: Removing unreachable block (ram,0x00242d80) */

int FUN_00242d40(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  param_1 = param_1 * param_2;
  iVar1 = param_1 + 7;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  iVar1 = iVar1 >> 3;
  if (param_3 != 1) {
    if ((param_3 != 0) && (param_3 == 2)) {
      iVar1 = (iVar1 << 1) / 7;
    }
    return iVar1;
  }
  return iVar1 / 10;
}

