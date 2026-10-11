/* Ghidra pseudocode. PS2 address: 00226898. Not validated source. */

undefined4 FUN_00226898(ulong param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_0029a888 == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    if (param_1 < 8) {
      iVar4 = (&DAT_0029a7c0)[(int)param_1];
    }
    else {
      iVar4 = 0;
    }
    uVar1 = 0xfffffff8;
    if (iVar4 != 0) {
      if (-1 < *(int *)(iVar4 + 8)) {
        FUN_0022e6a8(*(undefined4 *)(iVar4 + 0xc));
      }
      *(undefined4 *)(iVar4 + 8) = 0xffffffff;
      if (*(char *)(iVar4 + 0x18) == '\0') {
        FUN_0023d1d0(*(undefined4 *)(iVar4 + 4));
        iVar3 = *(int *)(iVar4 + 0x74);
      }
      else {
        iVar3 = *(int *)(iVar4 + 0x74);
      }
      if ((iVar3 != 0) && (iVar3 = 0, *(char *)(iVar4 + 0x22) != '\0')) {
        iVar2 = 0;
        do {
          iVar3 = iVar3 + 1;
          FUN_002253d0(*(undefined4 *)(iVar4 + 0x74 + iVar2));
          iVar2 = iVar3 * 4;
        } while (iVar3 < (int)(uint)*(byte *)(iVar4 + 0x22));
      }
      *(undefined1 *)(iVar4 + 0x16) = 0;
      *(undefined1 *)(iVar4 + 0x17) = 0;
      *(undefined1 *)(iVar4 + 0x14) = 0;
      FUN_0022d8c8(iVar4 + 0x1c,4);
      FUN_0022d8c8(iVar4 + 0x20,4);
      FUN_0022d8c8(iVar4 + 0x24,0x40);
      FUN_0022d8c8(iVar4 + 100,0x40);
      uVar1 = 0;
    }
  }
  return uVar1;
}

