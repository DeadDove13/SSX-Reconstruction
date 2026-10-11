/* Ghidra pseudocode. PS2 address: 001f7358. Not validated source. */

long FUN_001f7358(int param_1,long param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  param_1 = param_1 * 0x10;
  iVar5 = 1;
  iVar6 = 0;
  do {
    psVar3 = (short *)(iVar6 + (int)(&DAT_002984a0 + param_1));
    sVar1 = *psVar3;
    if (sVar1 <= param_2) {
      sVar2 = psVar3[1];
      if (param_2 < sVar2) {
        iVar4 = (int)sVar2 - (int)sVar1;
        if (iVar4 == 0) {
          trap(7);
        }
        iVar6 = (int)*(short *)(&DAT_002984a8 + iVar6 + param_1);
        return (long)(iVar6 + (((int)param_2 - (int)sVar1) *
                              (*(short *)(&DAT_002984a8 + iVar5 * 2 + param_1) - iVar6)) / iVar4);
      }
    }
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 2;
  } while (iVar5 < 4);
  if (param_2 < *(short *)(&DAT_002984a0 + param_1)) {
    return (long)*(short *)(&DAT_002984a8 + param_1);
  }
  if (param_2 <= *(short *)(&DAT_002984a6 + param_1)) {
    return 0;
  }
  return (long)*(short *)(&DAT_002984ae + param_1);
}

