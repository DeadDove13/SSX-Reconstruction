/* Ghidra pseudocode. PS2 address: 0017af68. Not validated source. */

void FUN_0017af68(undefined8 param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  FUN_00168030(*(undefined4 *)(*(int *)(iVar5 + 0x334) + 0xb3c));
  DAT_0027b864 = 8;
  uVar1 = *(undefined1 *)(iVar5 + 0x298);
  iVar3 = FUN_00154c60(0x27a598,uVar1);
  DAT_0027b83c = 0;
  DAT_0027b840 = *(undefined4 *)(iVar3 * 0xdc + *(int *)(iVar5 + 0x338) * 0x14 + 0x27c928);
  DAT_0027b844 = FUN_00155558(0x27a598,uVar1);
  DAT_0027b84c = FUN_00155718(0x27a598,uVar1);
  DAT_0027b848 = FUN_00155660(0x27a598,uVar1,*(undefined4 *)(iVar5 + 0x33c));
  DAT_0027b854 = FUN_00155928(0x27a598,uVar1);
  DAT_0027b850 = FUN_00155820(0x27a598,uVar1);
  iVar3 = FUN_00154c60(0x27a598,uVar1);
  DAT_0027b85c = *(undefined4 *)(&DAT_0027c3a0 + iVar3 * 0x3c);
  iVar3 = *(int *)(*(int *)(*(int *)(iVar5 + 0x334) + 0xb3c) + *(char *)(iVar5 + 0x298) * 4 + 0x364)
  ;
  if (*(int *)(iVar5 + 0x340) == 0) {
    FUN_001e93b8(iVar5 + 0x294);
    FUN_0017b100(param_1);
  }
  else {
    *(undefined4 *)(iVar5 + 0x340) = 0;
    FUN_001e9480(iVar5 + 0x294);
    *(undefined4 *)(iVar3 + 0x6c4c) = 0;
  }
  FUN_00105050(iVar3,0,0x27b814);
  uVar4 = FUN_001e9718(*(int *)(*(int *)(iVar5 + 0x334) + 0xb3c) + 0x40,iVar3,1,
                       *(undefined4 *)(iVar5 + 0x294));
  uVar2 = DAT_002c4910;
  *(undefined4 *)(iVar5 + 0x2a0) = uVar4;
  *(undefined4 *)(iVar5 + 0x29c) = uVar2;
  return;
}

