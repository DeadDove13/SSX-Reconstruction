/* Ghidra pseudocode. PS2 address: 001371f0. Not validated source. */

void FUN_001371f0(int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0xb8:
  case 0xb9:
  case 0xba:
  case 0xbd:
  case 0xc1:
  case 199:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcd:
  case 0xcf:
  case 0xd8:
  case 0xdc:
  case 0xdd:
  case 0xe6:
    *(undefined4 *)(param_1 + 0x28) = 0x40000000;
    return;
  case 0xbb:
  case 0xd1:
  case 0xd6:
  case 0xe8:
    *(undefined4 *)(param_1 + 0x28) = 0x40200000;
    return;
  case 0xbc:
  case 0xce:
    *(undefined4 *)(param_1 + 0x28) = 0x3fa00000;
    return;
  case 0xbe:
  case 0xc2:
  case 0xc3:
  case 0xcc:
    *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
    return;
  case 0xbf:
  case 0xc0:
  case 0xc5:
  case 0xc6:
  case 200:
    *(undefined4 *)(param_1 + 0x28) = 0x3fc00000;
    return;
  case 0xc4:
  case 0xd0:
    *(undefined4 *)(param_1 + 0x28) = 0x3fe00000;
    return;
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd7:
  case 0xdb:
  case 0xe1:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe7:
  case 0xe9:
    *(undefined4 *)(param_1 + 0x28) = 0x40800000;
    return;
  case 0xd5:
  case 0xeb:
    *(undefined4 *)(param_1 + 0x28) = 0x40a00000;
    return;
  case 0xd9:
  case 0xda:
  case 0xdf:
  case 0xe0:
  case 0xe2:
    *(undefined4 *)(param_1 + 0x28) = 0x40400000;
    return;
  case 0xde:
  case 0xea:
    *(undefined4 *)(param_1 + 0x28) = 0x40600000;
    return;
  default:
    return;
  }
}

