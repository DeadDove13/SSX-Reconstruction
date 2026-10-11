/* Ghidra pseudocode. PS2 address: 0023b858. Not validated source. */

long FUN_0023b858(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  
  lVar2 = 1;
  piVar4 = &DAT_002a33c8;
  iVar3 = 0;
  iVar1 = DAT_002a33c8;
  while( true ) {
    if (iVar1 != 0) {
      lVar2 = FUN_0023b638(iVar3);
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
    if ((0xf < iVar3) || (lVar2 == 0)) break;
    iVar1 = *piVar4;
  }
  return lVar2;
}

