/* Ghidra pseudocode. PS2 address: 001cf578. Not validated source. */

void FUN_001cf578(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x10);
  iVar1 = 2;
  do {
    puVar2[-1] = 0;
    iVar1 = iVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
  } while (-1 < iVar1);
  return;
}

