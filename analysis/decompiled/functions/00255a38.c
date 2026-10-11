/* Ghidra pseudocode. PS2 address: 00255a38. Not validated source. */

void FUN_00255a38(void)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = DAT_00277908;
  if ((DAT_00277908 == -1) && (iVar4 = 0, PTR_LAB_0027790c != (undefined *)0x0)) {
    iVar1 = 1;
    do {
      iVar4 = iVar1;
      iVar1 = iVar4 + 1;
    } while ((&DAT_00277908)[iVar4 + 1] != 0);
  }
  if (iVar4 != 0) {
    puVar3 = &DAT_00277908 + iVar4;
    pcVar2 = (code *)*puVar3;
    while( true ) {
      iVar4 = iVar4 + -1;
      puVar3 = puVar3 + -1;
      (*pcVar2)();
      if (iVar4 == 0) break;
      pcVar2 = (code *)*puVar3;
    }
  }
  return;
}

