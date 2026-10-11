/* Ghidra pseudocode. PS2 address: 002235b8. Not validated source. */

int FUN_002235b8(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  
  if (-1 < param_2) {
    piVar7 = (int *)param_1;
    iVar4 = *piVar7;
    sVar2 = *(short *)(iVar4 + 0x42);
    if (*(int *)(iVar4 + 0x28) * (int)sVar2 <= param_2) {
      return 0;
    }
    if (iVar4 == 0) {
      return 0;
    }
    if (param_3 < 0) {
      return 0;
    }
    if (param_3 < *(int *)(iVar4 + 0x2c) * (int)sVar2) {
      iVar3 = param_3 / (int)sVar2;
      iVar1 = param_2 / (int)sVar2;
      if (sVar2 == 0) {
        trap(7);
      }
      iVar6 = iVar3 * *(int *)(iVar4 + 0x28) + iVar1;
      lVar5 = FUN_0021f730(param_1,iVar6);
      iVar4 = 0;
      if (lVar5 == 0) {
        iVar4 = *(int *)(iVar6 * 8 + piVar7[3]);
      }
      if (iVar4 != 0) {
        sVar2 = *(short *)(*piVar7 + 0x42);
        return *(int *)(iVar4 + 4) + (param_3 - iVar3 * sVar2) * (int)sVar2 * 0x30 +
               (param_2 - iVar1 * sVar2) * 0x30;
      }
      return 0;
    }
  }
  return 0;
}

