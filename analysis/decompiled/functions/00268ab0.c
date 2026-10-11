/* Ghidra pseudocode. PS2 address: 00268ab0. Not validated source. */

bool FUN_00268ab0(void)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = sceSifGetReg(4);
  bVar1 = (uVar2 & 0x40000) != 0;
  if (bVar1) {
    sceSifSetReg(4,0x40000);
    FUN_00265868();
  }
  return bVar1;
}

