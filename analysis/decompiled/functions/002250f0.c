/* Ghidra pseudocode. PS2 address: 002250f0. Not validated source. */

void FUN_002250f0(int param_1)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  
  if (DAT_0029a888 == '\0') {
    return;
  }
  FUN_002250c0();
  lVar2 = 0;
  if ('\0' < DAT_0029a88c) {
    iVar3 = 0;
    do {
      if (*(int *)((int)&DAT_0029a89c + iVar3) == param_1) {
        DAT_0029a88c = DAT_0029a88c + -1;
        if (lVar2 < (int)DAT_0029a88c) {
          puVar1 = (undefined4 *)((int)&DAT_0029a89c + iVar3);
          do {
            lVar2 = (long)((int)lVar2 + 1);
            *puVar1 = puVar1[1];
            puVar1 = puVar1 + 1;
          } while (lVar2 < DAT_0029a88c);
        }
        break;
      }
      iVar3 = (int)lVar2 + 1;
      lVar2 = (long)iVar3;
      iVar3 = iVar3 * 4;
    } while (lVar2 < DAT_0029a88c);
  }
  FUN_002250a0();
  return;
}

