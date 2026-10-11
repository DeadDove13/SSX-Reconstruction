/* Ghidra pseudocode. PS2 address: 001e5608. Not validated source. */

void FUN_001e5608(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  
  iVar3 = DAT_002859e4;
  iVar8 = (int)param_1;
  switch(param_2) {
  case 0:
    iVar2 = *(int *)(iVar8 + 0x174);
    *(undefined4 *)(iVar2 + 8) = 1;
    *(undefined4 *)(iVar2 + 4) = 0;
    iVar3 = FUN_001a3748(*(undefined4 *)(iVar3 + 0x30));
    *(undefined4 *)(iVar3 + 0x428) = 1;
    FUN_001dc3c8(param_1);
    break;
  case 1:
    iVar3 = *(int *)(iVar8 + 0x174);
    *(undefined4 *)(iVar8 + 4) = 1;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 4) = 0;
    FUN_0015f700(1);
    FUN_0015dac8(*(undefined4 *)(DAT_002859e4 + 0xa0));
    iVar3 = DAT_002859e4;
    if (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x44) == 0) {
      uVar4 = FUN_0018ea20(0x28abe0);
      FUN_00195f68(*(undefined4 *)(iVar3 + 0x38),uVar4,0);
    }
    else {
      if (DAT_0027ad04 == 0) {
        FUN_001951e0(*(int *)(DAT_002859e4 + 0x38),0);
      }
      FUN_00195188(*(undefined4 *)(DAT_002859e4 + 0x38));
    }
    uVar4 = FUN_0015bd28(*(undefined4 *)(*(int *)(iVar8 + 400) * 0x80 + DAT_002859e4 + 0xa0));
    FUN_0015bbe0(*(undefined4 *)(DAT_002859e4 + 0xa0),uVar4);
    if (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x48) == 0) {
      FUN_00103700();
    }
    FUN_001a32b0(*(undefined4 *)(DAT_002859e4 + 0x30),5,0xffffffffffffffff);
    FUN_0020a818(DAT_002c56e8,2);
    FUN_0020a818(DAT_002c56e8,0);
    FUN_001f5d68(DAT_002c56e8);
    FUN_001fcdf0(DAT_002c56e8);
    uVar1 = DAT_002c56e8;
    goto LAB_001e5838;
  case 2:
    iVar2 = *(int *)(iVar8 + 0x174);
    *(undefined4 *)(iVar2 + 8) = 1;
    *(undefined4 *)(iVar2 + 4) = 0;
    iVar2 = FUN_001a3748(*(undefined4 *)(iVar3 + 0x30));
    iVar3 = DAT_002859e4;
    *(undefined4 *)(iVar2 + 0x428) = 0;
    iVar3 = FUN_001a3748(*(undefined4 *)(iVar3 + 0x30));
    *(undefined4 *)(iVar8 + 0x184) = 1;
    uVar1 = DAT_002c56e8;
    *(undefined4 *)(iVar3 + 0x42c) = 1;
LAB_001e5838:
    FUN_001fd358(uVar1);
    break;
  case 3:
    iVar2 = *(int *)(iVar8 + 0x174);
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 4) = 0;
    iVar2 = FUN_001a3748(*(undefined4 *)(iVar3 + 0x30));
    iVar3 = DAT_002859e4;
    *(undefined4 *)(iVar2 + 0x42c) = 0;
    param_2 = 1;
    iVar3 = FUN_001a3748(*(undefined4 *)(iVar3 + 0x30));
    uVar1 = DAT_002c56e8;
    *(undefined4 *)(iVar3 + 0x428) = 0;
    FUN_001fd400(uVar1);
    break;
  case 4:
    uVar4 = FUN_00234e80(DAT_002852fc,0xba);
    uVar5 = FUN_00234e80(DAT_002852fc,0xb4);
    uVar6 = FUN_00234e80(DAT_002852fc,0x77);
    uVar7 = FUN_00234e80(DAT_002852fc,0x78);
    FUN_001a9e20(*(undefined4 *)(iVar8 + 0x174),uVar4,uVar5,uVar6,0,uVar7);
  default:
    *(int *)(iVar8 + 0x180) = (int)param_2;
    return;
  case 5:
    iVar2 = *(int *)(iVar8 + 0x174);
    *(undefined4 *)(iVar2 + 8) = 1;
    *(undefined4 *)(iVar2 + 4) = 0;
    if (*(int *)(*(int *)(iVar3 + 0x38) + 0x44) == 0) {
      FUN_00195ff0();
    }
    FUN_001a32c8(*(undefined4 *)(DAT_002859e4 + 0x30),9,0xffffffffffffffff);
    FUN_001a32c8(*(undefined4 *)(DAT_002859e4 + 0x30),5,0xffffffffffffffff);
    if (*(int *)(iVar8 + 0x188) == -1) {
      *(undefined4 *)(DAT_002859e4 + 0x44) = 1;
    }
    else {
      FUN_001a32b0(*(undefined4 *)(DAT_002859e4 + 0x30),*(int *)(iVar8 + 0x188),0xffffffffffffffff);
      FUN_0020a818(DAT_002c56e8,2);
      FUN_0020a818(DAT_002c56e8,0);
      FUN_001f5d68(DAT_002c56e8);
      FUN_001fd400(DAT_002c56e8);
      FUN_00207008(DAT_002c56e8);
    }
  }
  FUN_0015c970();
  *(int *)(iVar8 + 0x180) = (int)param_2;
  return;
}

