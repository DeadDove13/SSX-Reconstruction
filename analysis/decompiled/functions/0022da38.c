/* Ghidra pseudocode. PS2 address: 0022da38. Not validated source. */

void FUN_0022da38(int param_1)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = 0;
  if ('\0' < DAT_0029a88d) {
    iVar3 = 0;
    while (*(int *)((int)&DAT_0029a8b4 + iVar3) != param_1) {
      iVar3 = (int)lVar2 + 1;
      lVar2 = (long)iVar3;
      iVar3 = iVar3 * 4;
      if (DAT_0029a88d <= lVar2) {
        return;
      }
    }
    DAT_0029a88d = DAT_0029a88d + -1;
    if (lVar2 < (int)DAT_0029a88d) {
      puVar1 = (undefined4 *)((int)&DAT_0029a8b4 + iVar3);
      do {
        lVar2 = (long)((int)lVar2 + 1);
        *puVar1 = puVar1[1];
        puVar1 = puVar1 + 1;
      } while (lVar2 < DAT_0029a88d);
    }
  }
  return;
}

