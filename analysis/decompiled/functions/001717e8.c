/* Ghidra pseudocode. PS2 address: 001717e8. Not validated source. */

void FUN_001717e8(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  
  FUN_0016e858(param_1,0x182,8);
  FUN_0016e858(param_1,0x181,8);
  iVar7 = (int)param_1;
  if (*(int *)(*(int *)(iVar7 + 0xb3c) + 0x46c) == 0) {
    FUN_0016e858(param_1,0x12d,8);
  }
  else {
    FUN_0016e858(param_1,300,8);
  }
  FUN_00170030(param_1,1,0xff);
  if (DAT_00285308 < 4) {
    if (-1 < DAT_00285308) {
      FUN_0016eca0(param_1,0x280f38,*(undefined4 *)(*(int *)(iVar7 + 0xb3c) + 0x46c),
                   0xffffffffffffffff);
    }
    iVar4 = *(int *)(iVar7 + 0xb3c);
  }
  else {
    iVar4 = *(int *)(iVar7 + 0xb3c);
  }
  *(undefined4 *)(iVar7 + 0xb28) = 0;
  uVar1 = *(undefined4 *)(iVar4 + 0x46c);
  *(undefined **)(iVar7 + 0xb2c) = &DAT_00281020;
  uVar2 = FUN_0016f348(param_1,uVar1);
  uVar2 = FUN_00171770(param_1,uVar2);
  FUN_001540a8(0x27a598,uVar1,uVar2);
  lVar3 = FUN_0023a448(0x2b08a0,0x350,0x10);
  if (lVar3 == 0) {
    iVar4 = *(int *)(iVar7 + 0xb3c);
  }
  else {
    FUN_0023bbd0(lVar3,0xffffffffdeadc0de,0x350);
    iVar4 = *(int *)(iVar7 + 0xb3c);
  }
  uVar6 = 0;
  uVar1 = FUN_0017aa20(lVar3,param_1,*(undefined1 *)(iVar4 + 0x46c));
  *(undefined4 *)(iVar7 + 0xb90) = uVar1;
  (**(code **)(*(int *)(iVar7 + 4) + 0xbc))(iVar7 + *(short *)(*(int *)(iVar7 + 4) + 0xb8));
  FUN_00171688(param_1,*(undefined4 *)(*(int *)(iVar7 + 0xb3c) + 0x46c),
               *(undefined4 *)(iVar7 + 0xb90));
  FUN_0016e990(param_1,0x178,0xc);
  FUN_0016e990(param_1,0x176,0xc);
  FUN_0016e990(param_1,0x177,0xc);
  FUN_0016e990(param_1,0x131,0xc);
  piVar5 = &DAT_00280fa4;
  do {
    lVar3 = FUN_00154578(0x27a598,piVar5[-1]);
    if (lVar3 == 0) {
      iVar7 = *piVar5;
      lVar3 = -1;
      if (iVar7 == 0x17b) {
        lVar3 = 0x176;
      }
      else if (iVar7 < 0x17c) {
        if (iVar7 == 0x179) {
          lVar3 = 0x178;
        }
      }
      else if (iVar7 == 0x17c) {
        lVar3 = 0x131;
      }
      else if (iVar7 == 0x17d) {
        lVar3 = 0x177;
      }
      if (-1 < lVar3) {
        FUN_0016eae0(param_1);
        FUN_0016ebb8(param_1,*piVar5);
        FUN_0016eb08(param_1,*piVar5);
      }
    }
    uVar6 = uVar6 + 1;
    piVar5 = piVar5 + 2;
  } while (uVar6 < 8);
  uVar6 = 0;
  FUN_0017c2a8(param_1);
  piVar5 = &DAT_00280fe0;
  iVar7 = DAT_00280fe0;
  while( true ) {
    uVar6 = uVar6 + 1;
    if (*(int *)(iVar7 * 0xc4 + 0x27a690) == 0) {
      FUN_0016e990(param_1,piVar5[1],9);
    }
    else {
      FUN_0016e858(param_1,piVar5[1],9);
    }
    piVar5 = piVar5 + 2;
    if (7 < uVar6) break;
    iVar7 = *piVar5;
  }
  return;
}

