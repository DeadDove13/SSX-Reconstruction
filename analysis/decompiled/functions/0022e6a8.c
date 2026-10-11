/* Ghidra pseudocode. PS2 address: 0022e6a8. Not validated source. */

undefined4 FUN_0022e6a8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (DAT_0029a888 == '\0') {
    uVar2 = 0xfffffff6;
  }
  else {
    iVar5 = 0;
    puVar1 = (undefined4 *)(&DAT_002a1b10)[param_1];
    FUN_002250c0();
    FUN_00228918(*puVar1);
    uVar4 = (uint)*(byte *)((int)puVar1 + 0x2e);
    *puVar1 = 0xffffffff;
    if (uVar4 != 0) {
      iVar3 = 0;
      do {
        iVar5 = iVar5 + 1;
        if (*(int *)((int)puVar1 + iVar3 + 0x30) != 0) {
          FUN_002253d0();
          uVar4 = (uint)*(byte *)((int)puVar1 + 0x2e);
        }
        iVar3 = iVar5 * 4;
      } while (iVar5 < (int)uVar4);
    }
    FUN_002250a0();
    uVar2 = 0;
  }
  return uVar2;
}

