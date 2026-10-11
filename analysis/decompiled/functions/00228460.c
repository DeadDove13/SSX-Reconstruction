/* Ghidra pseudocode. PS2 address: 00228460. Not validated source. */

undefined4 FUN_00228460(undefined1 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  if (DAT_0029a888 == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    lVar3 = 0;
    FUN_002250c0();
    DAT_0029a889 = param_1;
    if (0 < DAT_0029a890) {
      iVar4 = 0;
      do {
        if (*(char *)(DAT_0029a8f0 + iVar4 + 0xb) == '\x01') {
          if (*(int *)(DAT_0029a8f0 + iVar4) < 0) {
            lVar2 = (long)DAT_0029a890;
          }
          else {
            FUN_002293d0(lVar3);
            FUN_0022be90(lVar3);
            lVar2 = (long)DAT_0029a890;
          }
        }
        else {
          lVar2 = (long)DAT_0029a890;
        }
        lVar3 = (long)((int)lVar3 + 1);
        iVar4 = iVar4 + 0x6c;
      } while (lVar3 < lVar2);
    }
    FUN_002250a0();
    uVar1 = 0;
  }
  return uVar1;
}

