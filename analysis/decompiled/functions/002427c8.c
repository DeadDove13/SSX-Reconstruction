/* Ghidra pseudocode. PS2 address: 002427c8. Not validated source. */

long FUN_002427c8(int param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  
  puVar3 = &DAT_002a4ba4 + param_1 * 0x40;
  lVar1 = FUN_002424d0(puVar3);
  if ((lVar1 == 0) && (iVar4 = 0, DAT_002c5b24 != (code *)0x0)) {
    do {
      lVar2 = (*DAT_002c5b24)(iVar4,puVar3);
      if (-1 < lVar2) {
        lVar1 = FUN_002424d0(puVar3);
      }
      iVar4 = iVar4 + 1;
    } while ((lVar1 == 0) && (0 < lVar2));
  }
  lVar2 = 0;
  if (-1 < lVar1) {
    lVar2 = lVar1;
  }
  return lVar2;
}

