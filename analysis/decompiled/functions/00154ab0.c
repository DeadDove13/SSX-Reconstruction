/* Ghidra pseudocode. PS2 address: 00154ab0. Not validated source. */

int FUN_00154ab0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_00156b78();
  iVar5 = 0;
  iVar4 = 0;
  iVar2 = 0;
  do {
    iVar4 = iVar4 + 1;
    for (uVar3 = *(uint *)(param_1 + 0x1518 + iVar2 + iVar1 * 0x50); uVar3 != 0; uVar3 = uVar3 >> 1)
    {
      iVar5 = iVar5 + (uVar3 & 1);
    }
    iVar2 = iVar4 * 4;
  } while (iVar4 < 2);
  return iVar5;
}

