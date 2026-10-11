/* Ghidra pseudocode. PS2 address: 001d3070. Not validated source. */

void FUN_001d3070(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x1020);
  iVar1 = 0x7f;
  do {
    *puVar2 = 0;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar1);
  return;
}

