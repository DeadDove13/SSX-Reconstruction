/* Ghidra pseudocode. PS2 address: 00244b50. Not validated source. */

int FUN_00244b50(void)

{
  ulong uVar1;
  undefined4 in_vc13;
  
  uVar1 = _cfc2(in_vc13);
  if ((uVar1 & 2) != 0) {
    return 1;
  }
  if ((uVar1 & 4) != 0) {
    return 2;
  }
  if ((uVar1 & 8) != 0) {
    return 3;
  }
  return ((uint)uVar1 & 1) << 2;
}

