/* Ghidra pseudocode. PS2 address: 0022d6b8. Not validated source. */

undefined4 FUN_0022d6b8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (DAT_0029e6c0 != 0) {
    iVar3 = 0;
    do {
      if ((uint)*(ushort *)(&DAT_0029e6c8 + iVar3) == param_1 >> 6) {
        DAT_0029e6c0 = DAT_0029e6c0 - 1;
        if (iVar2 < (int)(uint)DAT_0029e6c0) {
          puVar1 = (undefined4 *)(&DAT_0029e6c8 + iVar3);
          do {
            *puVar1 = puVar1[1];
            iVar2 = iVar2 + 1;
            puVar1 = puVar1 + 1;
          } while (iVar2 < (int)(uint)DAT_0029e6c0);
        }
        return 0;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar2 * 4;
    } while (iVar2 < (int)(uint)DAT_0029e6c0);
  }
  return 0xfffffff8;
}

