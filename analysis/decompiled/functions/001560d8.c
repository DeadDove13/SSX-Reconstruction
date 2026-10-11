/* Ghidra pseudocode. PS2 address: 001560d8. Not validated source. */

void FUN_001560d8(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  iVar1 = FUN_00156b78();
  iVar2 = param_1 + iVar1 * 0x50;
  if (-1 < *(char *)(iVar2 + 0x1508)) {
    puVar4 = (uint *)(iVar1 * 0x50 + param_1 + 0x1518);
    iVar1 = 1;
    puVar3 = (uint *)(*(int *)(iVar2 + 0x1524) + 0x24);
    do {
      iVar1 = iVar1 + -1;
      *puVar3 = *puVar3 & ~*puVar4;
      *puVar4 = 0;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (-1 < iVar1);
  }
  return;
}

