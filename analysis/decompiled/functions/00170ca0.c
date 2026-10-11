/* Ghidra pseudocode. PS2 address: 00170ca0. Not validated source. */

void FUN_00170ca0(void)

{
  int iVar1;
  long lVar2;
  
  while (lVar2 = FUN_00182580(0x285290), lVar2 != 0) {
    iVar1 = FUN_00182670(0x285290,0);
    if ((*(uint *)(iVar1 + 0xc) & 0xfff0) != 0) {
      DAT_002c5ba4 = 1;
    }
    iVar1 = FUN_00182670(0x285290,1);
    if ((*(uint *)(iVar1 + 0xc) & 0xfff0) != 0) {
      DAT_002c5ba4 = 1;
    }
  }
  return;
}

