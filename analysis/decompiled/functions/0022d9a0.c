/* Ghidra pseudocode. PS2 address: 0022d9a0. Not validated source. */

void FUN_0022d9a0(void)

{
  code *pcVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar2 = 0;
  if ('\0' < DAT_0029a88d) {
    puVar3 = &DAT_0029a8b4;
    pcVar1 = DAT_0029a8b4;
    while( true ) {
      lVar2 = (long)((int)lVar2 + 1);
      puVar3 = puVar3 + 1;
      (*pcVar1)();
      if (DAT_0029a88d <= lVar2) break;
      pcVar1 = (code *)*puVar3;
    }
  }
  return;
}

