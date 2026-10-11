/* Ghidra pseudocode. PS2 address: 001540a8. Not validated source. */

void FUN_001540a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  
  iVar2 = FUN_00156b78(param_1,param_2);
  lVar4 = FUN_00156b18(param_1,param_2);
  iVar8 = (int)param_1;
  if (lVar4 == param_3) {
    iVar3 = iVar2 * 0x50 + iVar8;
    *(undefined8 *)(iVar3 + 0x1528) = *(undefined8 *)(iVar3 + 0x1540);
    *(undefined8 *)(iVar3 + 0x1530) = *(undefined8 *)(iVar3 + 0x1548);
    *(undefined8 *)(iVar3 + 0x1538) = *(undefined8 *)(iVar3 + 0x1550);
  }
  else {
    iVar5 = iVar2 * 0x50 + iVar8;
    iVar3 = (int)param_3 * 0x18 + iVar8;
    uVar6 = *(undefined8 *)(iVar3 + 0x14);
    uVar7 = *(undefined8 *)(iVar3 + 0x1c);
    *(undefined8 *)(iVar5 + 0x1528) = *(undefined8 *)(iVar3 + 0xc);
    *(undefined8 *)(iVar5 + 0x1530) = uVar6;
    *(undefined8 *)(iVar5 + 0x1538) = uVar7;
  }
  iVar3 = iVar8 + iVar2 * 0x50;
  *(int *)(iVar3 + 0x1520) = iVar8 + iVar2 * 0x50 + 0x1528;
  *(int *)(iVar3 + 0x1524) = iVar8 + (int)param_3 * 0xc4 + 0xcc;
  *(char *)(iVar3 + 0x1508) = (char)param_2;
  uVar1 = *(undefined4 *)(iVar8 + (int)param_2 * 4 + 0x744);
  *(int *)(iVar3 + 0x1514) = iVar8 + iVar2 * 10 + 0x6ec;
  *(undefined4 *)(iVar3 + 0x150c) = uVar1;
  *(undefined4 *)(iVar3 + 0x1518) = 0;
  *(undefined4 *)(iVar3 + 0x151c) = 0;
  FUN_001593e0(iVar8 + 0x1648);
  FUN_00156fe0(param_1);
  return;
}

