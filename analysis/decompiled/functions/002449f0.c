/* Ghidra pseudocode. PS2 address: 002449f0. Not validated source. */

bool FUN_002449f0(void)

{
  ulong uVar1;
  undefined4 in_vc13;
  
  uVar1 = _cfc2(in_vc13);
  return (uVar1 & 0xf) == 1;
}

