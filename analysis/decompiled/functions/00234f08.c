/* Ghidra pseudocode. PS2 address: 00234f08. Not validated source. */

uint FUN_00234f08(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (DAT_002c5990 == 0) {
    if (param_1 == 0) {
      param_1 = 100;
    }
    if (param_1 < 0xc4e) {
      if (param_1 < 0xc4) {
        uVar2 = 0x8ca00;
        if (param_1 == 0) {
          trap(7);
        }
        iVar1 = param_1 / 2 + 0x8ca00;
        uVar4 = 2;
      }
      else {
        uVar2 = 0x8ca000;
        if (param_1 == 0) {
          trap(7);
        }
        iVar1 = param_1 / 2 + 0x8ca000;
        uVar4 = 1;
      }
    }
    else {
      uVar2 = 0x8ca0000;
      if (param_1 == 0) {
        trap(7);
      }
      uVar4 = 0;
      iVar1 = param_1 / 2 + 0x8ca0000;
    }
    DAT_002c5994 = (undefined2)(iVar1 / param_1);
    uVar3 = iVar1 / param_1 & 0xffff;
    DAT_002c5ab4 = uVar2 / uVar3;
    REG_RCNT1_COUNT = 0;
    REG_RCNT1_TARGET = uVar3;
    REG_RCNT1_MODE = uVar4 | 0x180;
    AddIntcHandler(10,0x235070,0);
    FUN_002650a8(10);
    DAT_002c5990 = 1;
    FUN_0023e540(0x235020);
  }
  return DAT_002c5ab4;
}

