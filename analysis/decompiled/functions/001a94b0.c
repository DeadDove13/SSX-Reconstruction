/* Ghidra pseudocode. PS2 address: 001a94b0. Not validated source. */

uint FUN_001a94b0(int param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 0) {
    iVar4 = 0;
    while (iVar5 = param_2, iVar4 < DAT_002852a4) {
      lVar2 = FUN_00100528(*(undefined4 *)(DAT_002859e4 + 0x14),iVar4);
      if (lVar2 == 0) {
        iVar4 = iVar4 + 1;
      }
      else {
        lVar2 = FUN_001826e0(0x285290,iVar4);
        iVar5 = iVar4;
        if (lVar2 != 0) break;
        iVar4 = iVar4 + 1;
      }
    }
    param_2 = iVar5;
    if (iVar5 < 0) {
      return 0;
    }
  }
  DAT_002c5128 = FUN_00182670(0x285290,param_2);
  uVar3 = *(uint *)(DAT_002c5128 + 0xc) & ~*(uint *)(DAT_002c5128 + 8);
  if (uVar3 == 0) {
    uVar1 = *(uint *)(DAT_002c5128 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar1 = *(uint *)(DAT_002c5128 + 0xc);
  }
  *(uint *)(DAT_002c5128 + 8) = *(uint *)(DAT_002c5128 + 8) | uVar1 & uVar3;
  return uVar3;
}

