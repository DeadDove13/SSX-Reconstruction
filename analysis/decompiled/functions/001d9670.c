/* Ghidra pseudocode. PS2 address: 001d9670. Not validated source. */

void FUN_001d9670(undefined8 param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  switch(param_2) {
  case 1:
    FUN_00213078(*(undefined4 *)(iVar4 + 0x16c));
    *(undefined4 *)(iVar4 + 0x44) = param_2;
    break;
  case 2:
  case 6:
    *(undefined4 *)(iVar4 + 0x2c) = 0;
    *(undefined4 *)(iVar4 + 0x34) = 0x1e;
    goto switchD_001d96a8_caseD_4;
  case 3:
    *(undefined4 *)(iVar4 + 0x2c) = 0;
    FUN_002112c0(*(undefined4 *)(iVar4 + 0x16c));
    *(undefined4 *)(iVar4 + 0x44) = param_2;
    break;
  default:
    goto switchD_001d96a8_caseD_4;
  case 7:
    *(undefined4 *)(iVar4 + 0x2c) = 0;
    *(undefined4 *)(iVar4 + 8) = 0;
    *(undefined4 *)(iVar4 + 0x34) = 0x1e;
    FUN_00210f50(*(undefined4 *)(iVar4 + 0x16c));
    *(undefined4 *)(iVar4 + 0x44) = param_2;
    break;
  case 0xc:
    FUN_00211188(*(undefined4 *)(iVar4 + 0x16c));
    *(undefined4 *)(iVar4 + 0x44) = param_2;
    break;
  case 0xe:
    FUN_001d87e8(param_1,*(undefined4 *)(iVar4 + 0x2c));
    iVar2 = *(int *)(iVar4 + 0x16c);
    *(undefined4 *)(iVar4 + 0x38) = 0;
    *(undefined4 *)(iVar4 + 0x20) = 0x1fb88;
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    FUN_002112f8(iVar2,*(undefined4 *)(iVar4 + 0x2c));
    *(undefined4 *)(iVar4 + 0x44) = param_2;
    break;
  case 0xf:
    sVar1 = *(short *)(*(int *)(iVar4 + 0x170) + 0x10);
    pcVar3 = *(code **)(*(int *)(iVar4 + 0x170) + 0x14);
    goto LAB_001d97e0;
  case 0x11:
    FUN_00213018(*(undefined4 *)(iVar4 + 0x16c),*(undefined4 *)(iVar4 + 0x2c));
    *(undefined4 *)(iVar4 + 0x1c) = 1;
    goto switchD_001d96a8_caseD_4;
  case 0x15:
    iVar2 = *(int *)(iVar4 + 0x30);
    *(undefined4 *)(iVar4 + iVar2 * 4 + 300) = *(undefined4 *)(iVar4 + 0x44);
    *(int *)(iVar4 + 0x30) = iVar2 + 1;
    goto switchD_001d96a8_caseD_4;
  case 0x16:
    *(undefined4 *)(iVar4 + 0x34) = 0x1e;
switchD_001d96a8_caseD_4:
    *(undefined4 *)(iVar4 + 0x44) = param_2;
    break;
  case 0x17:
    FUN_00211210(*(undefined4 *)(iVar4 + 0x16c),*(undefined4 *)(iVar4 + 0x2c));
    *(undefined4 *)(iVar4 + 0x44) = param_2;
    break;
  case 0x1b:
    FUN_00212110(*(undefined4 *)(iVar4 + 0x16c),*(undefined4 *)(iVar4 + 0x2c),iVar4 + 0xe8);
    iVar2 = *(int *)(iVar4 + 0x170);
    *(undefined4 *)(*(int *)(iVar4 + 0x16c) + 0x30) = 0;
    *(undefined4 *)(iVar4 + 0x24) = 0x1fb88;
    *(undefined4 *)(iVar4 + 0x38) = 0;
    (**(code **)(iVar2 + 0x34))(iVar4 + *(short *)(iVar2 + 0x30));
    FUN_002113b8(*(undefined4 *)(iVar4 + 0x16c),*(undefined4 *)(iVar4 + 0x2c));
    *(undefined4 *)(iVar4 + 0x44) = param_2;
    break;
  case 0x1c:
    sVar1 = *(short *)(*(int *)(iVar4 + 0x170) + 0x38);
    pcVar3 = *(code **)(*(int *)(iVar4 + 0x170) + 0x3c);
LAB_001d97e0:
    (*pcVar3)(iVar4 + sVar1);
    *(undefined4 *)(iVar4 + 0x44) = param_2;
  }
  return;
}

