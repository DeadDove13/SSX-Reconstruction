/* Ghidra pseudocode. PS2 address: 001f0b28. Not validated source. */

void FUN_001f0b28(undefined8 param_1,uint *param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint auStack_3c [3];
  
  if ((*(int *)(DAT_002859e4 + 0x38) != 0) && (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x4c) != 0))
  {
    return;
  }
  iVar8 = (int)param_1;
  if (*(int *)(iVar8 + 0x8bb3c) == 0) {
    return;
  }
  if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x24) == 5) {
    return;
  }
  uStack_60 = 4;
  uStack_5c = 2;
  uStack_58 = 2;
  if (param_3 < 0xabe) {
    uStack_54 = 1;
  }
  else {
    uStack_54 = 2;
  }
  FUN_001efbb0(&uStack_60,(uint)&uStack_60 | 4,(uint)&uStack_60 | 8,(uint)&uStack_60 | 0xc);
  if (*(int *)(iVar8 + 0x8bb38) != 0) {
    return;
  }
  uVar2 = param_2[1];
  uVar6 = 0xffffffffffffffff;
  auStack_3c[0] = 0;
  uVar7 = 0xffffffffffffffff;
  uStack_50 = 0;
  uStack_4c = 0;
  uVar4 = uVar2 >> 0x10 & 0xf;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  if ((uVar4 == 1) || (uVar4 == 0)) {
    uStack_4c = 2;
  }
  else if ((uVar4 == 2) || (uVar4 == 3)) {
    uStack_4c = 1;
  }
  uVar4 = *param_2;
  if (((((uVar2 & 0xf0f0) == 0) && ((uVar4 & 0xf000000) == 0)) && ((uVar2 & 0xf00) == 0)) &&
     ((uVar4 & 0xffff) == 0)) {
    uVar2 = param_2[1];
    goto LAB_001f1434;
  }
  uVar5 = uVar2 >> 0x1b & 7;
  if (uVar5 == 1) {
    auStack_3c[0] = 1;
  }
  else if ((uVar5 != 0) && (uVar5 == 2)) {
    auStack_3c[0] = 2;
  }
  switch(uVar2 >> 0xc & 0xf) {
  case 0:
    uStack_4c = 2;
    break;
  case 1:
    uStack_4c = 4;
    goto LAB_001f0cf8;
  case 2:
  case 3:
  case 4:
    uStack_4c = 1;
LAB_001f0cf8:
    auStack_3c[0] = auStack_3c[0] | 4;
  }
  switch(uVar4 >> 0x18 & 0xf) {
  case 0:
    uStack_50 = 1;
    break;
  case 1:
    uStack_50 = 2;
    break;
  case 2:
    uStack_50 = 4;
    break;
  case 3:
    uStack_50 = 8;
    break;
  case 4:
    uStack_50 = 0x10;
    break;
  case 5:
    uStack_50 = 0x20;
    break;
  case 6:
    uStack_50 = 0x40;
    break;
  case 7:
    uStack_50 = 0x80;
    break;
  case 8:
    uStack_50 = 0x100;
    break;
  case 9:
    uStack_50 = 0x200;
    break;
  case 10:
    uStack_50 = 0x400;
  }
  uVar2 = uVar2 >> 0x18 & 7;
  uVar1 = 2;
  if (uVar2 == 1) {
LAB_001f0dc4:
    uStack_40 = uVar1;
    uVar2 = param_2[1];
  }
  else {
    if (uVar2 == 0) {
      uStack_40 = 1;
      uVar1 = uStack_40;
      goto LAB_001f0dc4;
    }
    if (uVar2 == 2) {
      uVar1 = 4;
      goto LAB_001f0dc4;
    }
    uVar1 = 8;
    if (uVar2 == 3) goto LAB_001f0dc4;
    uVar2 = param_2[1];
  }
  switch(uVar2 >> 8 & 0xf) {
  case 1:
    uStack_48 = 1;
    break;
  case 2:
    uStack_48 = 2;
    break;
  case 3:
    uStack_44 = 1;
    break;
  case 4:
    uStack_44 = 2;
  }
  switch(*(char *)((int)param_2 + 1)) {
  case '\x01':
  case '\x02':
    uVar6 = 0xf;
    break;
  case '\x03':
  case '\x04':
    uVar6 = 0x15;
    break;
  case '\x05':
  case '\x06':
    uVar6 = 0x10;
    break;
  case '\a':
  case '\b':
    uVar6 = 0x2c;
    break;
  case '\t':
  case '\n':
    uVar6 = 0x19;
    break;
  case '\v':
  case '\f':
    uVar6 = 7;
    break;
  case '\r':
  case '\x0e':
    uVar6 = 0x11;
    break;
  case '\x0f':
  case '\x10':
    uVar6 = 4;
    break;
  case '\x11':
  case '\x12':
    uVar6 = 10;
    break;
  case '\x13':
  case '\x14':
    uVar6 = 0x12;
    break;
  case '\x15':
  case '\x16':
    uVar6 = 0x13;
    break;
  case '\x17':
  case '\x18':
    uVar6 = 5;
    break;
  case '\x19':
  case '\x1a':
    uVar6 = 3;
    break;
  case '\x1b':
  case '\x1c':
    uVar6 = 1;
    break;
  case '\x1d':
  case '\x1e':
    uVar6 = 0x16;
    break;
  case '\x1f':
  case ' ':
    uVar6 = 0x17;
    break;
  case '!':
  case '\"':
    uVar6 = 0xb;
    break;
  case '#':
  case '$':
    uVar6 = 9;
    break;
  case '%':
  case '&':
    uVar6 = 0x68;
    break;
  case '\'':
  case '(':
    uVar6 = 0xc;
    break;
  case ')':
  case '*':
    uVar6 = 0x18;
    break;
  case '+':
  case ',':
    uVar6 = 8;
    break;
  case '-':
  case '.':
    uVar6 = 6;
    break;
  case '/':
  case '0':
    uVar6 = 0x14;
    break;
  case '1':
  case '2':
    uVar6 = 0xe;
    break;
  case '3':
  case '4':
    uVar6 = 2;
    break;
  case '5':
    uVar6 = 0x1e;
  }
  switch((char)*param_2) {
  case '\0':
  case '\\':
    uVar7 = 0xffffffffffffffff;
    break;
  case '\x01':
    uVar7 = 0x67;
    break;
  case '\x02':
    uVar7 = 0x69;
    break;
  case '\x03':
    uVar7 = 0x6a;
    break;
  case '\x04':
    uVar7 = 0x6b;
    break;
  case '\x05':
    uVar7 = 0x6c;
    break;
  case '\x06':
    uVar7 = 0x48;
    break;
  case '\a':
    uVar7 = 0x44;
    break;
  case '\b':
    uVar7 = 0x45;
    break;
  case '\t':
    uVar7 = 0x3a;
    break;
  case '\n':
    uVar7 = 0x46;
    break;
  case '\v':
    uVar7 = 0x49;
    break;
  case '\f':
    uVar7 = 0x24;
    break;
  case '\r':
    uVar7 = 0x3b;
    break;
  case '\x0e':
    uVar7 = 0x25;
    break;
  case '\x0f':
    uVar7 = 0x34;
    break;
  case '\x10':
    uVar7 = 0x26;
    break;
  case '\x11':
    uVar7 = 0x28;
    break;
  case '\x12':
    uVar7 = 0x3c;
    break;
  case '\x13':
    uVar7 = 0x2f;
    break;
  case '\x14':
    uVar7 = 0x41;
    break;
  case '\x15':
    uVar7 = 0x35;
    break;
  case '\x16':
    uVar7 = 0x36;
    break;
  case '\x17':
    uVar7 = 0x42;
    break;
  case '\x18':
    uVar7 = 0x40;
    break;
  case '\x19':
    uVar7 = 0x47;
    break;
  case '\x1a':
    uVar7 = 0x4e;
    break;
  case '\x1b':
    uVar7 = 0x4d;
    break;
  case '\x1c':
    uVar7 = 0x4c;
    break;
  case '\x1d':
    uVar7 = 0x4b;
    break;
  case '\x1e':
    uVar7 = 0x2a;
    break;
  case '\x1f':
    uVar7 = 0x27;
    break;
  case ' ':
    uVar7 = 0x4f;
    break;
  case '!':
    uVar7 = 0x37;
    break;
  case '\"':
    uVar7 = 0x38;
    break;
  case '#':
    uVar7 = 0x31;
    break;
  case '$':
    uVar7 = 0x2e;
    break;
  case '%':
    uVar7 = 0x30;
    break;
  case '&':
    uVar7 = 0x3d;
    break;
  case '\'':
    uVar7 = 0x3f;
    break;
  case '(':
    uVar7 = 0x3e;
    break;
  case ')':
    uVar7 = 0x4a;
    break;
  case '*':
    uVar7 = 0x43;
    break;
  case '+':
    uVar7 = 0x29;
    break;
  case ',':
    uVar7 = 0x6f;
    break;
  case '-':
    uVar7 = 0x70;
    break;
  case '.':
    uVar7 = 0x71;
    break;
  case '/':
    uVar7 = 0x72;
    break;
  case '0':
    uVar7 = 0x73;
    break;
  case '1':
    uVar7 = 0x74;
    break;
  case '2':
    uVar7 = 0x75;
    break;
  case '3':
    uVar7 = 0x76;
    break;
  case '4':
    uVar7 = 0x77;
    break;
  case '5':
    uVar7 = 0x78;
    break;
  case '6':
    uVar7 = 0x79;
    break;
  case '7':
    uVar7 = 0x7a;
    break;
  case '8':
    uVar7 = 0x7b;
    break;
  case '9':
    uVar7 = 0x7c;
    break;
  case ':':
    uVar7 = 0x7d;
    break;
  case ';':
    uVar7 = 0x7e;
    break;
  case '<':
    uVar7 = 0x7f;
    break;
  case '=':
    uVar7 = 0x80;
    break;
  case '>':
    uVar7 = 0x81;
    break;
  case '?':
    uVar7 = 0x82;
    break;
  case '@':
    uVar7 = 0x83;
    break;
  case 'A':
    uVar7 = 0x84;
    break;
  case 'B':
    uVar7 = 0x85;
    break;
  case 'C':
    uVar7 = 0x86;
    break;
  case 'D':
    uVar7 = 0x87;
    break;
  case 'E':
    uVar7 = 0x88;
    break;
  case 'F':
    uVar7 = 0x89;
    break;
  case 'G':
    uVar7 = 0x8a;
    break;
  case 'H':
    uVar7 = 0x8b;
    break;
  case 'I':
    uVar7 = 0x8c;
    break;
  case 'J':
    uVar7 = 0x8d;
    break;
  case 'K':
    uVar7 = 0x8e;
    break;
  case 'L':
    uVar7 = 0x8f;
    break;
  case 'M':
    uVar7 = 0x90;
    break;
  case 'N':
    uVar7 = 0x91;
    break;
  case 'O':
    uVar7 = 0x92;
    break;
  case 'P':
    uVar7 = 0x93;
    break;
  case 'Q':
    uVar7 = 0x94;
    break;
  case 'R':
    uVar7 = 0x95;
    break;
  case 'S':
    uVar7 = 0x96;
    break;
  case 'T':
    uVar7 = 0x97;
    break;
  case 'U':
    uVar7 = 0x98;
    break;
  case 'V':
    uVar7 = 0x99;
    break;
  case 'W':
    uVar7 = 0x9a;
    break;
  case 'X':
    uVar7 = 0x9b;
    break;
  case 'Y':
    uVar7 = 0x9c;
    break;
  case 'Z':
    uVar7 = 0x9d;
    break;
  case '[':
    uVar7 = 0x9e;
  }
  if ((char)*param_2 == '\\') {
    uVar7 = 0x3d;
  }
  if ((uVar4 & 0xf0000000) != 0) {
    switch(uVar4 >> 0x1c) {
    case 0:
      uStack_50 = 1;
      break;
    case 1:
      uStack_50 = 2;
      break;
    case 2:
      uStack_50 = 4;
      break;
    case 3:
      uStack_50 = 8;
      break;
    case 4:
      uStack_50 = 0x10;
      break;
    case 5:
      uStack_50 = 0x20;
      break;
    case 6:
      uStack_50 = 0x40;
      break;
    case 7:
      uStack_50 = 0x80;
      break;
    case 8:
      uStack_50 = 0x100;
      break;
    case 9:
      uStack_50 = 0x200;
      break;
    case 10:
      uStack_50 = 0x400;
    }
  }
  lVar3 = FUN_001ef968(&uStack_50,&uStack_4c,&uStack_48,&uStack_44,&uStack_40,uVar6,uVar7,auStack_3c
                      );
  *(int *)(iVar8 + 0x8bb3c) = (int)lVar3;
  if (lVar3 != 0) {
    *(int *)(iVar8 + 0x8bb38) = *(int *)(iVar8 + 0x8bb38) + 1;
    if (*(char *)((int)param_2 + 2) != '\0') {
      uVar7 = 0xffffffffffffffff;
      switch(*(char *)((int)param_2 + 2)) {
      case '\x01':
      case '\x02':
        uVar7 = 0xf;
        break;
      case '\x03':
      case '\x04':
        uVar7 = 0x15;
        break;
      case '\x05':
      case '\x06':
        uVar7 = 0x10;
        break;
      case '\a':
      case '\b':
        uVar7 = 0x2c;
        break;
      case '\t':
      case '\n':
        uVar7 = 0x19;
        break;
      case '\v':
      case '\f':
        uVar7 = 7;
        break;
      case '\r':
      case '\x0e':
        uVar7 = 0x11;
        break;
      case '\x0f':
      case '\x10':
        uVar7 = 4;
        break;
      case '\x11':
      case '\x12':
        uVar7 = 10;
        break;
      case '\x13':
      case '\x14':
        uVar7 = 0x12;
        break;
      case '\x15':
      case '\x16':
        uVar7 = 0x13;
        break;
      case '\x17':
      case '\x18':
        uVar7 = 5;
        break;
      case '\x19':
      case '\x1a':
        uVar7 = 3;
        break;
      case '\x1b':
      case '\x1c':
        uVar7 = 1;
        break;
      case '\x1d':
      case '\x1e':
        uVar7 = 0x16;
        break;
      case '\x1f':
      case ' ':
        uVar7 = 0x17;
        break;
      case '!':
      case '\"':
        uVar7 = 0xb;
        break;
      case '#':
      case '$':
        uVar7 = 9;
        break;
      case '%':
      case '&':
        uVar7 = 0x68;
        break;
      case '\'':
      case '(':
        uVar7 = 0xc;
        break;
      case ')':
      case '*':
        uVar7 = 0x18;
        break;
      case '+':
      case ',':
        uVar7 = 8;
        break;
      case '-':
      case '.':
        uVar7 = 6;
        break;
      case '/':
      case '0':
        uVar7 = 0x14;
        break;
      case '1':
      case '2':
        uVar7 = 0xe;
        break;
      case '3':
      case '4':
        uVar7 = 2;
        break;
      case '5':
        uVar7 = 0x1e;
      }
      FUN_001ef9f8(uVar7);
    }
  }
  uVar2 = param_2[1];
LAB_001f1434:
  if ((uVar2 & 0xf00f) == 0) {
    FUN_00200e98(param_1);
  }
  return;
}

