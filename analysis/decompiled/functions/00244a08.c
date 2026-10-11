/* Ghidra pseudocode. PS2 address: 00244a08. Not validated source. */

ulong FUN_00244a08(void)

{
  ulong uVar1;
  undefined4 in_vc12;
  
  uVar1 = _cfc2(in_vc12);
  _ctc2((int)(uVar1 | 2));
  return uVar1 | 2;
}

