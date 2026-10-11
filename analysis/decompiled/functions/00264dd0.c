/* Ghidra pseudocode. PS2 address: 00264dd0. Not validated source. */

void FUN_00264dd0(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    SYNC(0);
    cacheOp(0x10,iVar2);
    SYNC(0);
    uVar1 = (TagLo & 0xfffff000) + iVar2;
    if ((param_1 <= uVar1) && (uVar1 <= param_2)) {
      SYNC(0);
      cacheOp(0x14,iVar2);
      SYNC(0);
    }
    SYNC(0);
    cacheOp(0x10,iVar2 + 1);
    SYNC(0);
    uVar1 = (TagLo & 0xfffff000) + iVar2;
    if ((param_1 <= uVar1) && (uVar1 <= param_2)) {
      SYNC(0);
      cacheOp(0x14,iVar2 + 1);
      SYNC(0);
    }
    SYNC(0);
    iVar2 = iVar2 + 0x40;
  } while (iVar2 < 0x1000);
  return;
}

