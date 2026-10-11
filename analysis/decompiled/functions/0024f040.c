/* Ghidra pseudocode. PS2 address: 0024f040. Not validated source. */

void FUN_0024f040(void)

{
  uint uVar1;
  long lVar2;
  
  FUN_0024e998();
  uVar1 = REG_IPU_BP;
  if ((-(uVar1 & 7) & 7) != 0) {
    FUN_0024edc0();
  }
  while (lVar2 = FUN_0024ec90(0x18), lVar2 != 1) {
    FUN_0024edc0(8);
  }
  return;
}

