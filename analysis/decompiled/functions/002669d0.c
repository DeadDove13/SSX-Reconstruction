/* Ghidra pseudocode. PS2 address: 002669d0. Not validated source. */

/* WARNING: Instruction at (ram,0x00266a24) overlaps instruction at (ram,0x00266a20)
    */

void FUN_002669d0(uint param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (0 < param_2) {
    uVar1 = param_1 & 0xffffffc0;
    uVar3 = (((param_1 + (int)param_2) - 1 & 0xffffffc0) - uVar1 >> 6) + 1;
    uVar2 = uVar3 & 7;
    uVar3 = uVar3 >> 3;
    if (uVar2 != 0) {
      do {
        SYNC(0);
        cacheOp(0x18,uVar1);
        SYNC(0);
        uVar2 = uVar2 - 1;
        uVar1 = uVar1 + 0x40;
      } while (0 < (int)uVar2);
    }
    if (uVar3 != 0) {
      do {
        uVar3 = uVar3 - 1;
        SYNC(0);
        cacheOp(0x18,uVar1);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x40);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x80);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0xc0);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x100);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x140);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x180);
        SYNC(0);
        cacheOp(0x18,uVar1 + 0x1c0);
        SYNC(0);
        uVar1 = uVar1 + 0x200;
      } while (0 < (int)uVar3);
    }
  }
  return;
}

