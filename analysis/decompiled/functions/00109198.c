/* Ghidra pseudocode. PS2 address: 00109198. Not validated source. */

void FUN_00109198(int *param_1)

{
  switch(*(undefined4 *)(*param_1 + 0x350)) {
  default:
    return;
  case 2:
    FUN_00139208(param_1 + 0x184);
    return;
  case 3:
    FUN_00138c08(param_1 + 0x18c);
    return;
  case 4:
    FUN_00139068(param_1 + 0x194);
    return;
  case 5:
    FUN_00139530(param_1 + 0x198);
    return;
  case 8:
    FUN_0013a770(param_1 + 0x1a8);
    return;
  case 10:
    return;
  case 0xb:
    FUN_00139630(param_1 + 0x1b8);
    return;
  case 0xc:
    FUN_00139b00(param_1 + 0x1bc);
    return;
  case 0xe:
    FUN_0013a228(param_1 + 0x1c4);
    return;
  case 0xf:
    FUN_0013e110(param_1 + 0x1cc);
    return;
  case 0x10:
    FUN_0013b9d0(param_1 + 0x1d4);
    return;
  case 0x14:
    return;
  case 0x15:
    FUN_0013e710(param_1 + 0x20c);
    return;
  case 0x17:
    FUN_0013d788(param_1 + 0x214);
    return;
  }
}

