/* Ghidra pseudocode. PS2 address: 00240ca8. Not validated source. */

long FUN_00240ca8(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  uint uStack_50;
  ushort *puStack_4c;
  
  FUN_002409f0(&uStack_50);
  bVar1 = false;
  if ((*(int *)(&DAT_002a4f98 + (int)param_1 * 8) != -1) && (lVar2 = FUN_00240438(), lVar2 != 0)) {
    iVar3 = (int)lVar2;
    bVar1 = false;
    if ((*(byte *)(iVar3 + 10) >> 4 & 1) != 0) {
      iVar5 = (uint)*(byte *)(iVar3 + 6) * 2;
      bVar1 = true;
      puVar4 = (ushort *)
               (iVar3 + (iVar5 + 3U & 0xfffffffc) + 0xc +
               (*(char *)(iVar3 + 7) * 2 + 3U & 0xfffffffc));
      if ((*(byte *)(iVar3 + 10) >> 3 & 1) != 0) {
        puVar4 = (ushort *)((int)puVar4 + (iVar5 + 7U & 0xfffffffc));
      }
      puStack_4c = puVar4 + 1;
      uStack_50 = (uint)*puVar4;
    }
  }
  if (bVar1) {
    lVar2 = FUN_00240a58(&uStack_50,param_1);
    if (lVar2 < 0) {
      lVar2 = FUN_00240a58(0,param_1);
    }
  }
  else {
    lVar2 = FUN_00240a58(0,param_1);
  }
  return lVar2;
}

