/* Ghidra pseudocode. PS2 address: 001734f8. Not validated source. */

void FUN_001734f8(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  FUN_00173278();
  iVar2 = (int)param_2;
  if (*(int *)(iVar2 + 0x2c) != 0) {
    uStack_c0 = DAT_002c4938;
    uStack_bf = DAT_002c4939;
    uStack_b0 = DAT_002c4940;
    uStack_af = DAT_002c4941;
    iVar1 = FUN_001a0840(0x3f800000,param_3,&uStack_c0,0);
    fVar4 = (float)iVar1 * DAT_002c2844;
    if (**(int **)(iVar2 + 0x2c) == 0) {
      uVar6 = *(undefined4 *)(iVar2 + 0x34);
    }
    else {
      uVar6 = *(undefined4 *)(iVar2 + 0x30);
    }
    fVar5 = DAT_002c2844;
    iVar1 = FUN_001a0840(0x3f800000,param_3,uVar6,0);
    iVar3 = (int)param_4 + (int)fVar4;
    if (**(int **)(iVar2 + 0x2c) == 0) {
      FUN_00172dd0(param_1,param_2,param_3,iVar3,param_5,*(undefined4 *)(iVar2 + 0x34),0);
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      FUN_00172dd0(param_1,param_2,param_3,iVar3,param_5,*(undefined4 *)(iVar2 + 0x30),0);
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    if (iVar2 != 0) {
      uVar6 = 0x3f400000;
      iVar2 = (int)param_5 + 1;
      uStack_a0 = 0x3f800000;
      uStack_9c = 0x3f400000;
      uStack_98 = 0x3f400000;
      uStack_94 = 0x3f800000;
      FUN_00172e10(param_1,param_2,param_3,param_4,iVar2,&uStack_a0,&uStack_c0,0);
      uStack_a0 = 0x3f800000;
      uStack_94 = 0x3f800000;
      uStack_9c = uVar6;
      uStack_98 = uVar6;
      FUN_00172e10(param_1,param_2,param_3,iVar3 + (int)((float)iVar1 * fVar5),iVar2,&uStack_a0,
                   &uStack_b0,0);
    }
  }
  return;
}

