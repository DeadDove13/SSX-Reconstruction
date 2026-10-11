/* Ghidra pseudocode. PS2 address: 00175000. Not validated source. */

long FUN_00175000(undefined8 param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  iVar4 = (int)param_1;
  iVar3 = *(int *)(iVar4 + 0x1c);
  fVar5 = (float)FUN_001fb050(DAT_002c56e8,iVar3);
  lVar2 = FUN_001746e0(param_1,param_2);
  if ((param_2 & 0x18000c) == 0) goto LAB_001750e0;
  iVar1 = *(int *)(iVar4 + 0x1c);
  if (iVar1 == iVar3) {
    iVar3 = 0;
    if (iVar1 != 0) {
      fVar6 = (float)FUN_001fb050(DAT_002c56e8,iVar1 + 1);
      if (fVar5 == fVar6) {
        iVar3 = *(int *)(iVar4 + 0x1c);
        goto LAB_0017509c;
      }
      iVar3 = *(int *)(iVar4 + 0x1c);
    }
    FUN_001fb0e8(DAT_002c56e8,iVar3 + 1);
    iVar3 = *(int *)(iVar4 + 0x1c);
  }
  else {
    iVar3 = *(int *)(iVar4 + 0x1c);
  }
LAB_0017509c:
  if (iVar3 == 0) {
    FUN_00204108(DAT_002c56e8,*(undefined4 *)(DAT_002c56e8 + 0x8b6d4));
  }
  else if (iVar3 == 1) {
    FUN_001fabc8(*(undefined4 *)(DAT_002c56e8 + 0x8b6d8));
  }
LAB_001750e0:
  if (lVar2 != 0) {
    FUN_001fabc8(*(undefined4 *)(DAT_002c56e8 + 0x8b6d8));
  }
  return lVar2;
}

