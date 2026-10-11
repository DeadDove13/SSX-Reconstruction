/* Ghidra pseudocode. PS2 address: 0014fde8. Not validated source. */

void FUN_0014fde8(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar4;
  code *pcVar3;
  
  switch(*(undefined4 *)(param_2 + 0x1dc)) {
  case 0:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x40c;
    goto LAB_001503d8;
  case 1:
    iVar4 = param_1 + 0x430;
    param_1 = param_1 + 0x408;
    goto LAB_001503d8;
  case 2:
    iVar4 = param_1 + 0x434;
    break;
  case 3:
    iVar4 = param_1 + 0x434;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
  case 0xf0:
  case 0xf1:
  case 0xf2:
  case 0xf3:
  case 0xf4:
  case 0xf5:
  case 0xf6:
  case 0xf7:
  case 0xf8:
  case 0xf9:
  case 0xfa:
  case 0xfb:
  case 0xfc:
  case 0xfd:
  case 0xfe:
  case 0xff:
  case 0x100:
  case 0x101:
  case 0x102:
  case 0x103:
  case 0x104:
  case 0x105:
  case 0x106:
  case 0x107:
  case 0x108:
  case 0x109:
  case 0x10a:
  case 0x10b:
  case 0x10c:
  case 0x10d:
  case 0x10e:
  case 0x10f:
  case 0x110:
  case 0x111:
  case 0x112:
  case 0x113:
  case 0x114:
  case 0x115:
  case 0x116:
  case 0x117:
  case 0x118:
  case 0x119:
  case 0x11a:
  case 0x11b:
  case 0x11c:
  case 0x11d:
  case 0x11e:
  case 0x11f:
  case 0x120:
  case 0x121:
  case 0x122:
  case 0x123:
  case 0x124:
  case 0x125:
  case 0x126:
  case 0x127:
  case 0x128:
  case 0x129:
  case 0x12a:
  case 299:
  case 300:
  case 0x12d:
  case 0x12e:
  case 0x12f:
  case 0x130:
  case 0x131:
  case 0x132:
  case 0x133:
  case 0x134:
  case 0x135:
  case 0x136:
  case 0x137:
  case 0x138:
  case 0x139:
  case 0x13a:
  case 0x13b:
  case 0x13c:
  case 0x13d:
  case 0x13e:
  case 0x13f:
  case 0x140:
  case 0x141:
  case 0x142:
  case 0x143:
  case 0x144:
  case 0x145:
  case 0x146:
  case 0x147:
  case 0x148:
  case 0x149:
  case 0x14a:
  case 0x14b:
  case 0x14c:
  case 0x14d:
  case 0x14e:
  case 0x14f:
  case 0x150:
  case 0x151:
  case 0x152:
  case 0x153:
  case 0x154:
  case 0x155:
  case 0x156:
  case 0x157:
  case 0x158:
  case 0x159:
  case 0x15a:
  case 0x15b:
  case 0x15c:
  case 0x15d:
  case 0x15e:
  case 0x15f:
  case 0x160:
  case 0x161:
  case 0x162:
  case 0x163:
  case 0x164:
  case 0x165:
  case 0x166:
  case 0x167:
  case 0x168:
  case 0x169:
  case 0x16a:
  case 0x16b:
  case 0x16c:
  case 0x16d:
  case 0x16e:
  case 0x16f:
  case 0x170:
  case 0x171:
  case 0x172:
  case 0x173:
  case 0x174:
  case 0x175:
  case 0x176:
  case 0x177:
  case 0x178:
  case 0x179:
  case 0x17a:
  case 0x17b:
  case 0x17c:
  case 0x17d:
  case 0x17e:
  case 0x17f:
  case 0x180:
  case 0x181:
  case 0x182:
  case 0x183:
  case 0x184:
  case 0x185:
  case 0x186:
  case 0x187:
  case 0x188:
  case 0x189:
  case 0x18a:
  case 0x18b:
  case 0x18c:
  case 0x18d:
  case 0x18e:
  case 399:
  case 400:
  case 0x191:
  case 0x192:
  case 0x193:
  case 0x194:
  case 0x195:
  case 0x196:
  case 0x197:
  case 0x198:
  case 0x199:
  case 0x19a:
  case 0x19b:
  case 0x19c:
  case 0x19d:
  case 0x19e:
  case 0x19f:
  case 0x1a0:
  case 0x1a1:
  case 0x1a2:
  case 0x1a3:
  case 0x1a4:
    iVar4 = param_1 + 0x458;
    break;
  case 0x34:
    sVar1 = *(short *)(*(int *)(param_1 + 0x3d4) + 0x18);
    pcVar3 = *(code **)(*(int *)(param_1 + 0x3d4) + 0x1c);
    goto LAB_0014fe80;
  case 0x35:
    iVar4 = param_1 + 0x44c;
    param_1 = param_1 + 0x404;
    goto LAB_001503d8;
  case 0x36:
    iVar4 = param_1 + 0x434;
    break;
  case 0x37:
    sVar1 = *(short *)(*(int *)(param_1 + 0x3d4) + 0x20);
    pcVar3 = *(code **)(*(int *)(param_1 + 0x3d4) + 0x24);
LAB_0014fe80:
    uVar2 = (*pcVar3)(param_1 + sVar1);
    *(undefined4 *)(param_2 + 0x238) = uVar2;
    *(int *)(param_2 + 0x23c) = param_1 + 0x458;
    return;
  case 0x38:
    iVar4 = param_1 + 0x434;
    break;
  case 0x39:
    iVar4 = param_1 + 0x434;
    break;
  case 0x3a:
    iVar4 = param_1 + 0x448;
    break;
  case 0x3b:
    iVar4 = param_1 + 0x448;
    break;
  case 0x3c:
    iVar4 = param_1 + 0x448;
    break;
  case 0x3d:
    iVar4 = param_1 + 0x448;
    break;
  case 0x3e:
    iVar4 = param_1 + 0x448;
    break;
  case 0x3f:
    iVar4 = param_1 + 0x448;
    break;
  case 0x40:
    iVar4 = param_1 + 0x448;
    break;
  case 0x41:
    iVar4 = param_1 + 0x448;
    break;
  case 0x42:
    iVar4 = param_1 + 0x448;
    break;
  case 0x43:
    iVar4 = param_1 + 0x448;
    break;
  case 0x44:
    iVar4 = param_1 + 0x448;
    break;
  case 0x45:
    iVar4 = param_1 + 0x448;
    break;
  case 0x46:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x414;
    goto LAB_001503d8;
  case 0x47:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x420;
    goto LAB_001503d8;
  case 0x48:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x420;
    goto LAB_001503d8;
  case 0x49:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x420;
    goto LAB_001503d8;
  case 0x4a:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x420;
    goto LAB_001503d8;
  case 0x4b:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x420;
    goto LAB_001503d8;
  case 0x4c:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x420;
    goto LAB_001503d8;
  case 0x4d:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x420;
    goto LAB_001503d8;
  case 0x4e:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x420;
    goto LAB_001503d8;
  case 0x4f:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x420;
    goto LAB_001503d8;
  case 0x50:
    iVar4 = param_1 + 0x434;
    break;
  case 0x51:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x400;
    goto LAB_001503d8;
  case 0x52:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x3fc;
    goto LAB_001503d8;
  case 0x53:
    iVar4 = param_1 + 0x440;
    break;
  case 0x54:
    iVar4 = param_1 + 0x440;
    break;
  case 0x55:
    iVar4 = param_1 + 0x43c;
    break;
  case 0x56:
    iVar4 = param_1 + 0x43c;
    break;
  case 0x57:
    iVar4 = param_1 + 0x43c;
    break;
  case 0x58:
    iVar4 = param_1 + 0x43c;
    break;
  case 0x59:
    iVar4 = param_1 + 0x43c;
    break;
  case 0x5a:
    iVar4 = param_1 + 0x43c;
    break;
  case 0x5b:
    iVar4 = param_1 + 0x43c;
    break;
  case 0x5c:
    iVar4 = param_1 + 0x43c;
    break;
  case 0x6d:
    iVar4 = param_1 + 0x434;
    break;
  case 0x6e:
    iVar4 = param_1 + 0x434;
    break;
  case 0x6f:
    iVar4 = param_1 + 0x424;
    break;
  case 0x70:
    iVar4 = param_1 + 0x434;
    break;
  case 0x71:
    iVar4 = param_1 + 0x434;
    break;
  case 0x72:
    iVar4 = param_1 + 0x434;
    break;
  case 0x73:
    iVar4 = param_1 + 0x434;
    break;
  case 0x74:
    iVar4 = param_1 + 0x434;
    break;
  case 0x75:
    iVar4 = param_1 + 0x434;
    break;
  case 0x76:
    iVar4 = param_1 + 0x434;
    break;
  case 0x77:
    iVar4 = param_1 + 0x434;
    break;
  case 0x78:
    iVar4 = param_1 + 0x434;
    break;
  case 0x7d:
    iVar4 = param_1 + 0x454;
    break;
  case 0x7e:
    iVar4 = param_1 + 0x450;
    break;
  case 0x7f:
    iVar4 = param_1 + 0x450;
    break;
  case 0x80:
    iVar4 = param_1 + 0x450;
    break;
  case 0x81:
    iVar4 = param_1 + 0x450;
    break;
  case 0x82:
    iVar4 = param_1 + 0x450;
    break;
  case 0x83:
    iVar4 = param_1 + 0x450;
    break;
  case 0x84:
    iVar4 = param_1 + 0x450;
    break;
  case 0x85:
    iVar4 = param_1 + 0x450;
    break;
  case 0x86:
    iVar4 = param_1 + 0x450;
    break;
  case 0x87:
    iVar4 = param_1 + 0x450;
    break;
  case 0x88:
    iVar4 = param_1 + 0x450;
    break;
  case 0x89:
    iVar4 = param_1 + 0x450;
    break;
  case 0x8a:
    iVar4 = param_1 + 0x434;
    break;
  case 0x8b:
    iVar4 = param_1 + 0x434;
    break;
  case 0x8c:
    iVar4 = param_1 + 0x434;
    break;
  case 0x8d:
    iVar4 = param_1 + 0x434;
    break;
  case 0x8e:
    iVar4 = param_1 + 0x434;
    break;
  case 0x8f:
    iVar4 = param_1 + 0x434;
    break;
  case 0x90:
    iVar4 = param_1 + 0x434;
    break;
  case 0x91:
    iVar4 = param_1 + 0x434;
    break;
  case 0x92:
    iVar4 = param_1 + 0x424;
    break;
  case 0x93:
    iVar4 = param_1 + 0x424;
    break;
  case 0x94:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x418;
    goto LAB_001503d8;
  case 0x95:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x418;
    goto LAB_001503d8;
  case 0x96:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x418;
    goto LAB_001503d8;
  case 0x97:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x418;
    goto LAB_001503d8;
  case 0xa0:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x420;
    goto LAB_001503d8;
  case 0xa1:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x420;
    goto LAB_001503d8;
  case 0xa2:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x420;
    goto LAB_001503d8;
  case 0xa3:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x420;
    goto LAB_001503d8;
  case 0xa4:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x420;
    goto LAB_001503d8;
  case 0xa5:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x420;
    goto LAB_001503d8;
  case 0xa6:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x420;
    goto LAB_001503d8;
  case 0xa7:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x420;
    goto LAB_001503d8;
  case 0xa8:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x420;
    goto LAB_001503d8;
  case 0xa9:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x420;
    goto LAB_001503d8;
  case 0xaa:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x420;
    goto LAB_001503d8;
  case 0xab:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x420;
    goto LAB_001503d8;
  case 0xac:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x420;
    goto LAB_001503d8;
  case 0xad:
    iVar4 = param_1 + 0x458;
    param_1 = param_1 + 0x420;
    goto LAB_001503d8;
  case 0xae:
    iVar4 = param_1 + 0x43c;
    break;
  case 0xaf:
    iVar4 = param_1 + 0x43c;
    break;
  case 0xb0:
    iVar4 = param_1 + 0x43c;
    break;
  case 0xb1:
    iVar4 = param_1 + 0x43c;
    break;
  case 0xb2:
    iVar4 = param_1 + 0x43c;
    break;
  case 0xb3:
    iVar4 = param_1 + 0x43c;
    break;
  case 0xb4:
    iVar4 = param_1 + 0x43c;
    break;
  case 0xb5:
    iVar4 = param_1 + 0x43c;
    break;
  case 0xb6:
    iVar4 = param_1 + 0x43c;
    break;
  case 0xb7:
    iVar4 = param_1 + 0x43c;
    break;
  case 0xb8:
    iVar4 = param_1 + 0x440;
    break;
  case 0xb9:
    iVar4 = param_1 + 0x440;
    break;
  case 0xba:
    iVar4 = param_1 + 0x440;
    break;
  case 0xbb:
    iVar4 = param_1 + 0x440;
    break;
  case 0xbc:
    iVar4 = param_1 + 0x440;
    break;
  case 0xbd:
    iVar4 = param_1 + 0x440;
    break;
  case 0xbe:
    iVar4 = param_1 + 0x440;
    break;
  case 0xbf:
    iVar4 = param_1 + 0x440;
    break;
  case 0xc0:
    iVar4 = param_1 + 0x440;
    break;
  case 0xc1:
    iVar4 = param_1 + 0x440;
    break;
  case 0xc2:
    iVar4 = param_1 + 0x440;
    break;
  case 0xc3:
    iVar4 = param_1 + 0x440;
    break;
  case 0xc4:
    iVar4 = param_1 + 0x440;
    break;
  case 0xc5:
    iVar4 = param_1 + 0x440;
    break;
  case 0xc6:
    iVar4 = param_1 + 0x440;
    break;
  case 199:
    iVar4 = param_1 + 0x440;
    break;
  case 200:
    iVar4 = param_1 + 0x440;
    break;
  case 0xc9:
    iVar4 = param_1 + 0x440;
    break;
  case 0xca:
    iVar4 = param_1 + 0x440;
    break;
  case 0xcb:
    iVar4 = param_1 + 0x440;
    break;
  case 0xcc:
    iVar4 = param_1 + 0x440;
    break;
  case 0xcd:
    iVar4 = param_1 + 0x440;
    break;
  case 0xce:
    iVar4 = param_1 + 0x440;
    break;
  case 0xcf:
    iVar4 = param_1 + 0x440;
    break;
  case 0xd0:
    iVar4 = param_1 + 0x440;
    break;
  case 0xd1:
    iVar4 = param_1 + 0x440;
    break;
  case 0xd2:
    iVar4 = param_1 + 0x440;
    break;
  case 0xd3:
    iVar4 = param_1 + 0x440;
    break;
  case 0xd4:
    iVar4 = param_1 + 0x440;
    break;
  case 0xd5:
    iVar4 = param_1 + 0x440;
    break;
  case 0xd6:
    iVar4 = param_1 + 0x440;
    break;
  case 0xd7:
    iVar4 = param_1 + 0x440;
    break;
  case 0xd8:
    iVar4 = param_1 + 0x440;
    break;
  case 0xd9:
    iVar4 = param_1 + 0x440;
    break;
  case 0xda:
    iVar4 = param_1 + 0x440;
    break;
  case 0xdb:
    iVar4 = param_1 + 0x440;
    break;
  case 0xdc:
    iVar4 = param_1 + 0x440;
    break;
  case 0xdd:
    iVar4 = param_1 + 0x440;
    break;
  case 0xde:
    iVar4 = param_1 + 0x440;
    break;
  case 0xdf:
    iVar4 = param_1 + 0x440;
    break;
  case 0xe0:
    iVar4 = param_1 + 0x440;
    break;
  case 0xe1:
    iVar4 = param_1 + 0x440;
    break;
  case 0xe2:
    iVar4 = param_1 + 0x440;
    break;
  case 0xe3:
    iVar4 = param_1 + 0x440;
    break;
  case 0xe4:
    iVar4 = param_1 + 0x440;
    break;
  case 0xe5:
    iVar4 = param_1 + 0x440;
    break;
  case 0xe6:
    iVar4 = param_1 + 0x440;
    break;
  case 0xe7:
    iVar4 = param_1 + 0x440;
    break;
  case 0xe8:
    iVar4 = param_1 + 0x440;
    break;
  case 0xe9:
    iVar4 = param_1 + 0x440;
    break;
  case 0xea:
    iVar4 = param_1 + 0x440;
    break;
  case 0xeb:
    iVar4 = param_1 + 0x440;
    break;
  default:
    goto switchD_0014fe20_default;
  }
  param_1 = param_1 + 0x41c;
LAB_001503d8:
  *(int *)(param_2 + 0x23c) = iVar4;
  *(int *)(param_2 + 0x238) = param_1;
switchD_0014fe20_default:
  return;
}

