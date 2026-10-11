/* Ghidra pseudocode. PS2 address: 00228378. Not validated source. */

void FUN_00228378(void)

{
  bool bVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStack_90 [8];
  int iStack_88;
  int aiStack_80 [2];
  int iStack_78;
  int iStack_74;
  
  puVar4 = &DAT_0029a7e8;
  iVar3 = 0;
  puVar2 = DAT_0029a7e8;
  while( true ) {
    puVar4 = puVar4 + 1;
    if ((puVar2 != (ushort *)0x0) && (*(char *)((int)puVar2 + 7) == '\0')) {
      FUN_00227428(*(undefined4 *)(puVar2 + 6),aiStack_80);
      bVar1 = true;
      if ((aiStack_80[0] != 3) &&
         ((bVar1 = false, aiStack_80[0] == 2 && (bVar1 = true, iStack_74 < iStack_78)))) {
        bVar1 = false;
      }
      if ((bVar1) &&
         (FUN_00227360(*(undefined4 *)(puVar2 + 0x54),auStack_90), iStack_88 < (int)(uint)*puVar2))
      {
        FUN_00227878(iVar3);
      }
    }
    iVar3 = iVar3 + 1;
    if (7 < iVar3) break;
    puVar2 = (ushort *)*puVar4;
  }
  return;
}

