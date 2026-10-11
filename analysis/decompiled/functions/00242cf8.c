/* Ghidra pseudocode. PS2 address: 00242cf8. Not validated source. */

void FUN_00242cf8(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    iVar1 = (int)lVar2 * 8;
    lVar2 = lVar2 + 1;
    *(undefined4 *)(&DAT_002a4f98 + iVar1) = 0xffffffff;
    *(undefined4 *)(&DAT_002a4f9c + iVar1) = 0;
  } while (lVar2 < 4);
  return;
}

