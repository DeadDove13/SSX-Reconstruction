/* Ghidra pseudocode. PS2 address: 002023f8. Not validated source. */

void FUN_002023f8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0xf;
  puVar2 = (undefined4 *)(param_1 + 0x8bb34);
  do {
    *puVar2 = 0;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar1);
  return;
}

