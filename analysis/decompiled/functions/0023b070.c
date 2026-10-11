/* Ghidra pseudocode. PS2 address: 0023b070. Not validated source. */

undefined4 FUN_0023b070(void)

{
  short sVar1;
  undefined4 uVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  
  iVar5 = 0;
  psVar3 = *(short **)((&DAT_002a33c8)[DAT_002c5ac0 & 0xf] + 0x20);
  psVar4 = (short *)0x0;
  if (*(int *)(psVar3 + 2) < 1) goto LAB_0023b0ac;
  sVar1 = *psVar3;
  while (sVar1 != 0x4253) {
    iVar5 = *(int *)(psVar3 + 2);
    psVar4 = psVar3;
LAB_0023b0ac:
    do {
      psVar3 = *(short **)(psVar3 + 8);
    } while (*(int *)(psVar3 + 2) <= iVar5);
    sVar1 = *psVar3;
  }
  uVar2 = 0;
  if (psVar4 != (short *)0x0) {
    uVar2 = *(undefined4 *)(psVar4 + 2);
  }
  return uVar2;
}

