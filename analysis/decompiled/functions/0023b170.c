/* Ghidra pseudocode. PS2 address: 0023b170. Not validated source. */

int FUN_0023b170(void)

{
  int *piVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  
  psVar3 = *(short **)((&DAT_002a33c8)[DAT_002c5ac0 & 0xf] + 0x20);
  iVar4 = 0;
  sVar2 = *psVar3;
  while (sVar2 != 0x4253) {
    piVar1 = (int *)(psVar3 + 2);
    psVar3 = *(short **)(psVar3 + 8);
    iVar4 = iVar4 + *piVar1;
    sVar2 = *psVar3;
  }
  return iVar4;
}

