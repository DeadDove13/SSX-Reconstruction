/* Ghidra pseudocode. PS2 address: 00150c60. Not validated source. */

void FUN_00150c60(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  uVar1 = *(undefined4 *)(iVar4 + 8);
  iVar2 = FUN_00148998(iVar4 + 0x20,uVar1);
  *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
  switch(uVar1) {
  case 0xb8:
    uVar3 = 0xd2;
    break;
  case 0xb9:
    uVar3 = 0xd3;
    break;
  case 0xba:
    uVar3 = 0xd4;
    break;
  case 0xbb:
    uVar3 = 0xd5;
    break;
  case 0xbc:
    uVar3 = 0xd6;
    break;
  case 0xbd:
    uVar3 = 0xd7;
    break;
  case 0xbe:
    uVar3 = 0xd8;
    break;
  case 0xbf:
    uVar3 = 0xd9;
    break;
  case 0xc0:
    uVar3 = 0xda;
    break;
  case 0xc1:
    uVar3 = 0xdb;
    break;
  case 0xc2:
    uVar3 = 0xdc;
    break;
  case 0xc3:
    uVar3 = 0xdd;
    break;
  case 0xc4:
    uVar3 = 0xde;
    break;
  case 0xc5:
    uVar3 = 0xdf;
    break;
  case 0xc6:
    uVar3 = 0xe0;
    break;
  case 199:
    uVar3 = 0xe1;
    break;
  case 200:
    uVar3 = 0xe2;
    break;
  case 0xc9:
    uVar3 = 0xe3;
    break;
  case 0xca:
    uVar3 = 0xe4;
    break;
  case 0xcb:
    uVar3 = 0xe5;
    break;
  case 0xcc:
    uVar3 = 0xe6;
    break;
  case 0xcd:
    uVar3 = 0xe7;
    break;
  case 0xce:
    uVar3 = 0xe8;
    break;
  case 0xcf:
    uVar3 = 0xe9;
    break;
  case 0xd0:
    FUN_0014cd18(param_1,0xea,0,5);
    goto switchD_00150cac_default;
  case 0xd1:
    uVar3 = 0xeb;
    break;
  default:
    goto switchD_00150cac_default;
  }
  FUN_0014cd18(param_1,uVar3,0,5);
switchD_00150cac_default:
  *(undefined4 *)(iVar4 + 0x10) = 0x3f800000;
  return;
}

