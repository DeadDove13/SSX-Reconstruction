/* Ghidra pseudocode. PS2 address: 0019e948. Not validated source. */

undefined8 FUN_0019e948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  FUN_0019cef8(iVar4 + 0x1c);
  *(undefined **)(iVar4 + 0x54) = &DAT_002b53a8;
  FUN_001978a0(param_3,param_1,0x1c);
  iVar1 = *(int *)(iVar4 + 0x78);
  lVar3 = FUN_002107c8(0x298590,iVar1 << 6,0x40000000,0x2b52a0,0,0);
  if (lVar3 != 0) {
    FUN_0023bbd0(lVar3,0xffffffffdeadc0ed,iVar1 << 6);
  }
  iVar2 = iVar1 + -1;
  if (iVar1 != 0) {
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  *(int *)(iVar4 + 0x84) = (int)lVar3;
  FUN_001978a0(param_3,lVar3,*(int *)(iVar4 + 0x78) << 6);
  return param_1;
}

