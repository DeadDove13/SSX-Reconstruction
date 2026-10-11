/* Ghidra pseudocode. PS2 address: 0022cff0. Not validated source. */

void FUN_0022cff0(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  uint uVar6;
  ushort uVar7;
  
  uVar6 = 0xffffffff;
  DAT_0029af86 = 1;
  uVar7 = 0;
  iVar2 = 0;
  puVar5 = &DAT_0029af88;
  do {
    if (*puVar5 != 0) {
      if (uVar7 < *(ushort *)((int)puVar5 + 0xe)) {
        uVar6 = *puVar5;
        uVar7 = *(ushort *)((int)puVar5 + 0xe);
        DAT_0029af85 = (byte)iVar2;
      }
      else if ((*(ushort *)((int)puVar5 + 0xe) == uVar7) && (*puVar5 < uVar6)) {
        uVar6 = *puVar5;
        DAT_0029af85 = (byte)iVar2;
      }
    }
    iVar2 = iVar2 + 1;
    puVar5 = puVar5 + 4;
  } while (iVar2 < 8);
  iVar2 = (int)((uint)DAT_0029af85 << 0x18) >> 0x14;
  puVar1 = *(undefined **)((int)&DAT_0029af8c + iVar2);
  if (((uint)puVar1 & 0xf) != 0) {
    FUN_0022d7d0(0x29b080,puVar1,*(undefined2 *)((int)&DAT_0029af94 + iVar2));
    DAT_0029b008 = &DAT_0029b080;
    puVar1 = DAT_0029b008;
  }
  DAT_0029b008 = puVar1;
  DAT_0029b010 = (uint)*(ushort *)((int)&DAT_0029af94 + iVar2);
  FlushCache(0);
  lVar3 = sceSifSetDma(0x29b008,1);
  if (lVar3 != 0) {
    do {
      lVar4 = sceSifDmaStat(lVar3);
    } while (-1 < lVar4);
  }
  FUN_00246510(0,0x80d0,0,0,DAT_0029b00c,*(undefined4 *)((int)&DAT_0029af90 + iVar2),
               *(undefined2 *)((int)&DAT_0029af94 + iVar2));
  return;
}

