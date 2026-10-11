/* Ghidra pseudocode. PS2 address: 00228bc8. Not validated source. */

long FUN_00228bc8(ulong param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = param_1 | 0xe0;
  if ((param_1 & 0xe0) != 0) {
    uVar3 = param_1;
  }
  iVar5 = (int)(param_1 & 0xffffffffffffff1f);
  if ((uVar3 & 0x40) != 0) {
    (&DAT_0029a8fc)[iVar5 * 0x10] = param_2;
  }
  if ((uVar3 & 0x20) != 0) {
    (&DAT_0029a8fd)[iVar5 * 0x10] = param_2;
  }
  lVar2 = FUN_0022c8e0(uVar3);
  if ((-1 < lVar2) && (lVar2 = 0, DAT_0029a888 != '\0')) {
    lVar2 = 0;
    if (0 < DAT_0029a890) {
      iVar4 = 0;
      do {
        lVar2 = (long)((int)lVar2 + 1);
        puVar1 = (undefined4 *)(DAT_0029a8f0 + iVar4);
        iVar4 = iVar4 + 0x6c;
        FUN_0022ea40(*puVar1,param_1 & 0xffffffffffffff1f,
                     *(undefined1 *)((int)puVar1 + iVar5 + 0x41));
      } while (lVar2 < DAT_0029a890);
    }
    lVar2 = 0;
  }
  return lVar2;
}

