/* Ghidra pseudocode. PS2 address: 00225a70. Not validated source. */

undefined4 FUN_00225a70(char param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  if (DAT_0029a888 == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    lVar2 = FUN_00225958(param_1);
    uVar1 = 0xfffffff8;
    if (lVar2 == 0) {
      iVar4 = 0;
      for (lVar2 = 0; uVar1 = 0, lVar2 < DAT_0029a890; lVar2 = (long)((int)lVar2 + 1)) {
        if ((*(char *)(DAT_0029a8f0 + iVar4 + 10) == param_1) &&
           (lVar3 = FUN_00228a10(*(undefined4 *)(DAT_0029a8f0 + iVar4)), lVar3 == 0)) {
          return 1;
        }
        iVar4 = iVar4 + 0x6c;
      }
    }
  }
  return uVar1;
}

