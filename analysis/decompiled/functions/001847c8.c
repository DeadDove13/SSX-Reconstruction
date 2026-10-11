/* Ghidra pseudocode. PS2 address: 001847c8. Not validated source. */

uint FUN_001847c8(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = 0;
  if (0 < DAT_002852a4) {
    do {
      iVar1 = FUN_00182670(0x285290,iVar2);
      iVar2 = iVar2 + 1;
      uVar3 = uVar3 | *(uint *)(iVar1 + 0xc) & ~*(uint *)(iVar1 + 8);
    } while (iVar2 < DAT_002852a4);
  }
  return uVar3;
}

