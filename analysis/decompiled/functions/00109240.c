/* Ghidra pseudocode. PS2 address: 00109240. Not validated source. */

void FUN_00109240(int *param_1)

{
  switch(*(undefined4 *)(*param_1 + 0x350)) {
  default:
    return;
  case 2:
    return;
  case 3:
    FUN_001388d0(param_1 + 0x18c);
    return;
  case 4:
    FUN_00138e00(param_1 + 0x194);
    return;
  case 6:
    FUN_0013d030(param_1 + 0x19c);
    return;
  case 7:
    FUN_0013a560(param_1 + 0x1a4);
    return;
  case 8:
    FUN_0013a5f0(param_1 + 0x1a8);
    return;
  case 0xb:
    return;
  case 0xc:
    FUN_001398f0(param_1 + 0x1bc);
    return;
  case 0xd:
    FUN_0013aa50(param_1 + 0x1c0);
    return;
  case 0xe:
    FUN_00139d58(param_1 + 0x1c4);
    return;
  case 0xf:
    FUN_0013db40(param_1 + 0x1cc);
    return;
  case 0x10:
    FUN_0013ae18(param_1 + 0x1d4);
    return;
  case 0x13:
    FUN_0013bde0(param_1 + 0x1f8);
    return;
  case 0x14:
    FUN_0013e580(param_1 + 0x208);
    return;
  case 0x16:
    FUN_0013cca8(param_1 + 0x210);
    return;
  case 0x17:
    param_1[0x216] = 0;
    return;
  }
}

