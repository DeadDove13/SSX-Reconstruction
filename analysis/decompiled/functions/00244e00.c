/* Ghidra pseudocode. PS2 address: 00244e00. Not validated source. */

bool FUN_00244e00(void)

{
  ulong uVar1;
  undefined4 in_vc13;
  
  uVar1 = _cfc2(in_vc13);
  if ((uVar1 & 0xf) == 1) {
    return true;
  }
  return (uVar1 & 0xf00) == 0x100;
}

