/* Ghidra pseudocode. PS2 address: 00203b28. Not validated source. */

void FUN_00203b28(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  iVar1 = *(int *)((int)param_2 + 0x80);
  iVar3 = *(int *)(iVar1 + 0x34c);
  if (iVar3 != *(int *)(iVar1 + 0x6b8)) {
    *(int *)(iVar1 + 0x6b8) = iVar3;
    if (iVar3 == 1) {
      if ((0.5 < *(float *)(iVar1 + 0x8344)) && (iVar2 = FUN_001f8290(param_1), iVar2 == iVar1)) {
        FUN_002073a8(param_1);
      }
      FUN_001ff988(param_1,iVar1);
    }
    else if (((0 < iVar3) && (iVar3 < 4)) && (*(int *)(iVar1 + 0x350) != 0x14)) {
      FUN_00200148(param_1,iVar1);
    }
  }
  uStack_60 = 0;
  uStack_5c = 0x40;
  if ((iVar3 < 4) && (1 < iVar3)) {
    iVar3 = FUN_001f8aa0(param_1,iVar1);
    if (iVar3 != *(int *)(iVar1 + 0x6c0)) {
      *(int *)(iVar1 + 0x6c0) = iVar3;
      FUN_001f4ee8(param_2);
      uVar4 = FUN_001f8aa0(param_1,iVar1);
      FUN_001f9190(param_1,iVar1,uVar4);
    }
    iVar3 = FUN_001f8aa0(param_1,iVar1);
    FUN_00203310((int)param_1 + iVar3 * 0x50 + 0xa44f8,iVar1,&uStack_60,(uint)&uStack_60 | 4);
  }
  *(undefined4 *)((int)param_2 + 100) = uStack_60;
  FUN_00204520(param_2,uStack_5c);
  return;
}

