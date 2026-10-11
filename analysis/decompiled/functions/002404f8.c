/* Ghidra pseudocode. PS2 address: 002404f8. Not validated source. */

void FUN_002404f8(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 3;
  puVar1 = &DAT_002a4b40;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
  } while (-1 < iVar2);
  return;
}

