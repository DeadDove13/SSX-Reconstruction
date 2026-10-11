/* Ghidra pseudocode. PS2 address: 00185320. Not validated source. */

void FUN_00185320(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_2a0 [400];
  undefined1 auStack_110 [208];
  
  puVar1 = auStack_2a0;
  iVar6 = (int)param_1;
  iVar5 = iVar6 + 0xd00;
  FUN_0019ae30(iVar5);
  FUN_0019af18(iVar5,param_1);
  *(undefined4 *)(iVar6 + 0x2128) = 0;
  FUN_0019b0b8(0x3f800000,0x3f800000,iVar5);
  uVar3 = DAT_002852fc;
  switch(*(undefined4 *)(iVar6 + 0x3c)) {
  case 1:
    if (0 < *(int *)(iVar6 + 0x4c)) {
      return;
    }
  case 0:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    *(undefined4 *)(iVar6 + 0x2120) = 1;
    *(undefined4 *)(iVar6 + 0x2124) = 0;
    uVar2 = FUN_00185870(param_1,0xa6);
    FUN_0019a8a8(auStack_2a0,uVar2,1);
    puVar1 = auStack_2a0;
    goto LAB_00185418;
  default:
    goto switchD_00185388_caseD_2;
  case 0xc:
    *(undefined4 *)(iVar6 + 0x2120) = 1;
    *(undefined4 *)(iVar6 + 0x2124) = 0;
    uVar3 = 0x9f;
    goto LAB_00185408;
  case 0xd:
    *(undefined4 *)(iVar6 + 0x2120) = 1;
    *(undefined4 *)(iVar6 + 0x2124) = 0;
    puVar1 = (undefined1 *)FUN_00185870(param_1,0xa8);
    break;
  case 0xe:
    *(undefined4 *)(iVar6 + 0x2120) = 1;
    *(undefined4 *)(iVar6 + 0x2124) = 0;
    uVar2 = FUN_00185870(param_1,0xa1);
    FUN_0019a8a8(auStack_2a0,uVar2,*(undefined4 *)(iVar6 + 0x44));
    uVar2 = FUN_00185870(param_1,0xa7);
    puVar1 = auStack_2a0;
    goto LAB_001854f0;
  case 0xf:
    *(undefined4 *)(iVar6 + 0x2120) = 1;
    *(undefined4 *)(iVar6 + 0x2124) = 0;
    puVar1 = (undefined1 *)FUN_00234e80(uVar3,0xa9);
    break;
  case 0x10:
    *(undefined4 *)(iVar6 + 0x2120) = 1;
    *(undefined4 *)(iVar6 + 0x2124) = 0;
    uVar2 = FUN_00185870(param_1,0xa2);
    FUN_0019a8a8(auStack_2a0,uVar2,*(undefined4 *)(iVar6 + 0x44));
    puVar4 = auStack_110;
    if (*(int *)(iVar6 + 0x48) == 1) {
      uVar2 = FUN_00185870(param_1,0xa4);
      FUN_0019a7f8(puVar4,uVar2);
    }
    else {
      uVar2 = FUN_00185870(param_1,0xa3);
      FUN_0019a8a8(puVar4,uVar2,*(undefined4 *)(iVar6 + 0x48));
    }
    uVar2 = FUN_00185870(param_1,0xa7);
    goto LAB_00185590;
  case 0x11:
  case 0x12:
    *(undefined4 *)(iVar6 + 0x2120) = 1;
    *(undefined4 *)(iVar6 + 0x2124) = 0;
    uVar3 = 0xa0;
LAB_00185408:
    puVar1 = (undefined1 *)FUN_00185870(param_1,uVar3);
LAB_00185418:
    puVar4 = (undefined1 *)0x0;
    uVar2 = 0;
    goto LAB_00185590;
  case 0x13:
    *(undefined4 *)(iVar6 + 0x2120) = 1;
    *(undefined4 *)(iVar6 + 0x2124) = 0;
    puVar1 = (undefined1 *)FUN_00185870(param_1,0xab);
  }
  uVar2 = FUN_00185870(param_1,0xa7);
LAB_001854f0:
  puVar4 = (undefined1 *)0x0;
LAB_00185590:
  FUN_001855b0(param_1,puVar1,puVar4,uVar2);
switchD_00185388_caseD_2:
  return;
}

