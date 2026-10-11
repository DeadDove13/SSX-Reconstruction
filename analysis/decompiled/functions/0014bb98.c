/* Ghidra pseudocode. PS2 address: 0014bb98. Not validated source. */

undefined8 FUN_0014bb98(undefined8 param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_2 + 0x220);
  FUN_001eacb0(param_3);
  iVar2 = *(int *)(iVar1 + 0x6cf4);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  switch(param_4) {
  case 0xd2:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 0xb8;
    break;
  case 0xd3:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 0xb9;
    break;
  case 0xd4:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 0xba;
    break;
  case 0xd5:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 0xbb;
    break;
  case 0xd6:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 0xbc;
    break;
  case 0xd7:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 0xbd;
    break;
  case 0xd8:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 0xbe;
    break;
  case 0xd9:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 0xbf;
    break;
  case 0xda:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 0xc0;
    break;
  case 0xdb:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 0xc1;
    break;
  case 0xdc:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 0xc2;
    break;
  case 0xdd:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 0xc3;
    break;
  case 0xde:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 0xc4;
    break;
  case 0xdf:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 0xc5;
    break;
  case 0xe0:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 0xc6;
    break;
  case 0xe1:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 199;
    break;
  case 0xe2:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 200;
    break;
  case 0xe3:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 0xc9;
    break;
  case 0xe4:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 0xca;
    break;
  case 0xe5:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 0xcb;
    break;
  case 0xe6:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 0xcc;
    break;
  case 0xe7:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 0xcd;
    break;
  case 0xe8:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 0xce;
    break;
  case 0xe9:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 0xcf;
    break;
  case 0xea:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 0xd0;
    break;
  case 0xeb:
    uVar3 = *(undefined4 *)(iVar1 + 0x6cf4);
    uVar4 = 0xd1;
    break;
  default:
    *(undefined4 *)(iVar2 + 0x10) = 0x3f800000;
    return 0x1a6;
  }
  uVar4 = FUN_0014cd18(uVar3,uVar4,0,7);
  return uVar4;
}

