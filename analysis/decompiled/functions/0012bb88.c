/* Ghidra pseudocode. PS2 address: 0012bb88. Not validated source. */

void FUN_0012bb88(undefined8 param_1)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  psVar1 = (short *)((int)param_1 + 0x110);
  do {
    iVar5 = iVar5 + 1;
    psVar3 = psVar1 + 8;
    iVar4 = 0;
    do {
      if (psVar3[1] == 0) {
        sVar2 = FUN_0012c008(param_1,psVar1);
        *psVar3 = sVar2;
        psVar3[1] = 1;
      }
      sVar2 = psVar3[1];
      psVar3[1] = sVar2 + 1;
      if (8 < (short)(sVar2 + 1)) {
        psVar3[1] = 0;
      }
      iVar4 = iVar4 + *psVar1;
      psVar3 = psVar3 + *psVar1 * 0x10;
    } while (iVar4 < 4);
    psVar1 = psVar1 + 0x50;
  } while (iVar5 < 3);
  return;
}

