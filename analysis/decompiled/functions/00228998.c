/* Ghidra pseudocode. PS2 address: 00228998. Not validated source. */

void FUN_00228998(void)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = 0;
  if (0 < DAT_0029a890) {
    iVar3 = 0;
    do {
      lVar2 = (long)((int)lVar2 + 1);
      puVar1 = (undefined4 *)(iVar3 + DAT_0029a8f0);
      iVar3 = iVar3 + 0x6c;
      FUN_00228918(*puVar1);
    } while (lVar2 < DAT_0029a890);
  }
  return;
}

