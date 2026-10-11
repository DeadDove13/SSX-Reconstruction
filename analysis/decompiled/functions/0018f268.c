/* Ghidra pseudocode. PS2 address: 0018f268. Not validated source. */

undefined8 FUN_0018f268(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uStack_70;
  int iStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  int iStack_58;
  undefined4 uStack_54;
  
  iVar5 = (int)param_2;
  iVar4 = 0;
  FUN_00191e08(&uStack_60,param_2,*(undefined4 *)(iVar5 + 0x10),0,0x2b4610);
  iStack_68 = iStack_58;
  uStack_64 = uStack_54;
  uStack_70 = uStack_60;
  uVar1 = uStack_70;
  uStack_70._0_4_ = (undefined4)uStack_60;
  uVar3 = (undefined4)uStack_70;
  uStack_70 = uVar1;
  if (0 < *(int *)(iVar5 + 0x14)) {
    iVar2 = *(int *)(iVar5 + 0x18);
    while( true ) {
      FUN_00191e08(&uStack_60,param_2,*(undefined4 *)(iVar5 + 0x10),0,
                   *(undefined4 *)(iVar4 * 8 + iVar2));
      if (iStack_68 < iStack_58) {
        iStack_68 = iStack_58;
        uStack_64 = uStack_54;
        uStack_70 = uStack_60;
        iVar2 = *(int *)(iVar5 + 0x14);
      }
      else {
        iVar2 = *(int *)(iVar5 + 0x14);
      }
      iVar4 = iVar4 + 1;
      if (iVar2 <= iVar4) break;
      iVar2 = *(int *)(iVar5 + 0x18);
    }
    uVar3 = (undefined4)uStack_70;
  }
  puVar6 = (undefined4 *)param_1;
  *puVar6 = uVar3;
  puVar6[1] = uStack_70._4_4_;
  puVar6[2] = iStack_68;
  puVar6[3] = uStack_64;
  return param_1;
}

