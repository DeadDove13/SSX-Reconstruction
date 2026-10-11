/* Ghidra pseudocode. PS2 address: 00178190. Not validated source. */

void FUN_00178190(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  
  uVar7 = 0;
  iVar4 = 0;
  do {
    iVar5 = -1;
    switch(*(undefined4 *)((int)&DAT_00283864 + iVar4)) {
    case 0x18b:
      iVar5 = 0x18a;
      break;
    case 0x18c:
      iVar5 = 0x189;
      break;
    case 0x18d:
      iVar5 = 0x188;
      break;
    case 0x18e:
      iVar5 = 0x187;
      break;
    case 400:
      iVar5 = 399;
      break;
    case 0x191:
      iVar5 = 0x186;
      break;
    case 0x193:
      iVar5 = 0x192;
      break;
    case 0x195:
      iVar5 = 0x194;
    }
    iVar1 = (int)param_1;
    piVar6 = (int *)((int)&DAT_00283864 + iVar4);
    iVar1 = (**(code **)(*(int *)(iVar1 + 4) + 0x9c))
                      (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x98),*piVar6,
                       *(undefined4 *)(*(int *)(iVar1 + 0xb50) + 0x46c));
    uVar2 = FUN_0016ff18(param_1,iVar1 + 1,0xff);
    lVar3 = FUN_00154598(0x27a598,*(int *)((int)&DAT_00283860 + iVar4));
    if (lVar3 == 0) {
      if (*(int *)((int)&DAT_00283860 + iVar4) == 10) {
        iVar4 = *piVar6;
        goto LAB_001782b8;
      }
      lVar3 = FUN_00154610(0x27a598);
      if (lVar3 == 0) {
        FUN_0016ebb8(param_1);
        FUN_0016ea88(param_1,*piVar6);
        FUN_0016eae0(param_1,uVar2);
        if (iVar5 < 0) goto LAB_00178388;
        FUN_0016eae0(param_1,iVar5);
        iVar5 = *piVar6;
        goto LAB_00178338;
      }
      FUN_0016eb88(param_1,*piVar6);
      FUN_0016ea88(param_1,*piVar6);
      FUN_0016eae0(param_1,uVar2);
      FUN_0016eae0(param_1,*piVar6);
      if (-1 < iVar5) {
        FUN_0016eb08(param_1,iVar5);
      }
    }
    else {
      iVar4 = *piVar6;
LAB_001782b8:
      FUN_0016ebb8(param_1,iVar4);
      FUN_0016eab8(param_1,*piVar6);
      FUN_0016eb08(param_1,uVar2);
      FUN_0016eb08(param_1,*piVar6);
      if (-1 < iVar5) {
LAB_00178338:
        FUN_0016eb08(param_1,iVar5);
      }
    }
LAB_00178388:
    uVar7 = uVar7 + 1;
    iVar4 = uVar7 * 8;
    if (7 < uVar7) {
      return;
    }
  } while( true );
}

