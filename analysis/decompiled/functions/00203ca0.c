/* Ghidra pseudocode. PS2 address: 00203ca0. Not validated source. */

void FUN_00203ca0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  iVar1 = *(int *)((int)param_2 + 0x80);
  uStack_4c = 0x40;
  uStack_50 = 0;
  if (*(int *)(iVar1 + 0x34c) != 1) {
    iVar2 = FUN_001f8aa0(param_1,iVar1);
    if (iVar2 != *(int *)(iVar1 + 0x6c4)) {
      *(int *)(iVar1 + 0x6c4) = iVar2;
      FUN_001f4ee8(param_2);
      uVar3 = FUN_001f8aa0(param_1,iVar1);
      FUN_001f97d0(param_1,iVar1,uVar3);
    }
    iVar2 = FUN_001f8aa0(param_1,iVar1);
    FUN_00203310((int)param_1 + iVar2 * 0x50 + 0xa47c8,iVar1,&uStack_50,(uint)&uStack_50 | 4);
  }
  *(undefined4 *)((int)param_2 + 100) = uStack_50;
  FUN_00204520(param_2,uStack_4c);
  return;
}

