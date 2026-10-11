/* Ghidra pseudocode. PS2 address: 00268a88. Not validated source. */

bool FUN_00268a88(void)

{
  ulong uVar1;
  
  uVar1 = sceSifGetReg(4);
  return (uVar1 & 0x10000) != 0;
}

