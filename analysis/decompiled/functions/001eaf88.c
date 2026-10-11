/* Ghidra pseudocode. PS2 address: 001eaf88. Not validated source. */

void FUN_001eaf88(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 5;
  puVar1 = &DAT_002cfdf0;
  do {
    iVar2 = iVar2 + -1;
    FUN_00103778(*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (-1 < iVar2);
  return;
}

