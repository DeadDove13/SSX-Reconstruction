/* Ghidra pseudocode. PS2 address: 001712c8. Not validated source. */

void FUN_001712c8(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0xb;
  puVar1 = &DAT_002c7fb4;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  return;
}

