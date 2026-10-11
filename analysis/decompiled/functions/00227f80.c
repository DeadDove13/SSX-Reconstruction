/* Ghidra pseudocode. PS2 address: 00227f80. Not validated source. */

long FUN_00227f80(ulong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_60 [4];
  int iStack_5c;
  undefined1 auStack_50 [4];
  int iStack_4c;
  int iStack_48;
  
  *param_2 = 0xffffffff;
  param_2[1] = 0;
  if (DAT_0029a888 == '\0') {
    lVar3 = -10;
  }
  else {
    if (param_1 < 8) {
      iVar5 = (&DAT_0029a7e8)[(int)param_1];
    }
    else {
      iVar5 = 0;
    }
    lVar3 = -8;
    if (iVar5 != 0) {
      FUN_002250c0();
      lVar3 = FUN_00227360(*(undefined4 *)(iVar5 + 0xa8),auStack_60);
      if ((-1 < lVar3) && (lVar3 = FUN_00227428(iStack_5c,auStack_50), -1 < lVar3)) {
        param_2[1] = iStack_4c + iStack_48;
        iVar4 = 0;
        if (*(byte *)(iVar5 + 8) != 0) {
          iVar1 = 0;
          do {
            puVar2 = (undefined4 *)(iVar1 + *(int *)(iVar5 + 0xac));
            iVar4 = iVar4 + 1;
            if (puVar2[1] == iStack_5c) {
              *param_2 = *puVar2;
              goto LAB_00228070;
            }
            iVar1 = iVar4 * 8;
          } while (iVar4 < (int)(uint)*(byte *)(iVar5 + 8));
        }
        lVar3 = -1;
      }
LAB_00228070:
      FUN_002250a0();
    }
  }
  return lVar3;
}

