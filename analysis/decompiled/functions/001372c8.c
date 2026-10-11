/* Ghidra pseudocode. PS2 address: 001372c8. Not validated source. */

void FUN_001372c8(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = (int)param_1;
  if (-1 < *(int *)(iVar2 + 0x34)) {
    uVar1 = 0;
    switch(param_2) {
    case 0xb8:
      uVar1 = 1;
      break;
    case 0xb9:
      uVar1 = 3;
      break;
    case 0xba:
      uVar1 = 5;
      break;
    case 0xbb:
      uVar1 = 7;
      break;
    case 0xbc:
      uVar1 = 0xb;
      break;
    case 0xbd:
      uVar1 = 0xd;
      break;
    case 0xbe:
      uVar1 = 0xf;
      break;
    case 0xbf:
      uVar1 = 0x11;
      break;
    case 0xc0:
      uVar1 = 0x13;
      break;
    case 0xc1:
      uVar1 = 0x15;
      break;
    case 0xc2:
      uVar1 = 0x17;
      break;
    case 0xc3:
      uVar1 = 0x19;
      break;
    case 0xc4:
      uVar1 = 0x1b;
      break;
    case 0xc5:
      uVar1 = 0x1d;
      break;
    case 0xc6:
      uVar1 = 0x1f;
      break;
    case 199:
      uVar1 = 0x21;
      break;
    case 200:
      uVar1 = 0x23;
      break;
    case 0xc9:
      uVar1 = 0x25;
      break;
    case 0xca:
      uVar1 = 0x27;
      break;
    case 0xcb:
      uVar1 = 0x29;
      break;
    case 0xcc:
      uVar1 = 0x2d;
      break;
    case 0xcd:
      uVar1 = 0x2f;
      break;
    case 0xce:
      uVar1 = 0x2b;
      break;
    case 0xcf:
      uVar1 = 0x31;
      break;
    case 0xd0:
      uVar1 = 0x33;
      break;
    case 0xd1:
      uVar1 = 9;
      break;
    case 0xd2:
      uVar1 = 2;
      break;
    case 0xd3:
      uVar1 = 4;
      break;
    case 0xd4:
      uVar1 = 6;
      break;
    case 0xd5:
      uVar1 = 8;
      break;
    case 0xd6:
      uVar1 = 0xc;
      break;
    case 0xd7:
      uVar1 = 0xe;
      break;
    case 0xd8:
      uVar1 = 0x10;
      break;
    case 0xd9:
      uVar1 = 0x12;
      break;
    case 0xda:
      uVar1 = 0x14;
      break;
    case 0xdb:
      uVar1 = 0x16;
      break;
    case 0xdc:
      uVar1 = 0x18;
      break;
    case 0xdd:
      uVar1 = 0x1a;
      break;
    case 0xde:
      uVar1 = 0x1c;
      break;
    case 0xdf:
      uVar1 = 0x1e;
      break;
    case 0xe0:
      uVar1 = 0x20;
      break;
    case 0xe1:
      uVar1 = 0x22;
      break;
    case 0xe2:
      uVar1 = 0x24;
      break;
    case 0xe3:
      uVar1 = 0x26;
      break;
    case 0xe4:
      uVar1 = 0x28;
      break;
    case 0xe5:
      uVar1 = 0x2a;
      break;
    case 0xe6:
      uVar1 = 0x2e;
      break;
    case 0xe7:
      uVar1 = 0x30;
      break;
    case 0xe8:
      uVar1 = 0x2c;
      break;
    case 0xe9:
      uVar1 = 0x32;
      break;
    case 0xea:
      uVar1 = 0x34;
      break;
    case 0xeb:
      uVar1 = 10;
    }
    FUN_00137d98(param_1,uVar1);
    fVar3 = (float)*(int *)(iVar2 + 0x34) * DAT_002c1cb8;
    *(undefined4 *)(iVar2 + 0x34) = 0xffffffff;
    *(int *)(iVar2 + 0x68) = *(int *)(iVar2 + 0x68) + 1;
    *(float *)(iVar2 + 0xb0) = *(float *)(iVar2 + 0xb0) + fVar3;
  }
  return;
}

