/* Ghidra pseudocode. PS2 address: 00190cf0. Not validated source. */

long FUN_00190cf0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = (int)param_1;
  iVar7 = iVar6 + 0x14;
  FUN_0018de10(iVar7);
  iVar1 = *(int *)(iVar6 + 0x1c);
  iVar2 = *(int *)(iVar6 + iVar1 * 4 + 0x24);
  iVar3 = *(int *)(iVar2 + 0xc);
  lVar4 = (**(code **)(iVar3 + 0x14))(iVar2 + *(short *)(iVar3 + 0x10));
  lVar5 = FUN_0018dd28(param_1);
  if (lVar5 == 0) {
    if (lVar4 == 3) {
      FUN_0018de88(iVar7);
      lVar4 = 0;
      if (*(int *)(iVar6 + 0x1c) <= iVar1) {
        FUN_0018e620(iVar7,iVar1);
        lVar4 = 3;
      }
    }
    else if (lVar4 == 4) {
      FUN_0018df90(iVar7);
      lVar4 = 0;
      if (iVar1 <= *(int *)(iVar6 + 0x1c)) {
        FUN_0018e620(iVar7,iVar1);
        lVar4 = 4;
      }
    }
  }
  return lVar4;
}

