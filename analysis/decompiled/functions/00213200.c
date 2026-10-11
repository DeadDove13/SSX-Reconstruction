/* Ghidra pseudocode. PS2 address: 00213200. Not validated source. */

ushort FUN_00213200(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  param_1 = param_1 & 0xff;
  iVar2 = 0;
  iVar3 = 0;
  if (param_1 - 0x20 < 0x10) {
    iVar2 = 1;
  }
  else if (9 < param_1 - 0x30) {
    if (param_1 - 0x3a < 7) {
      iVar2 = 0xb;
    }
    else if (param_1 - 0x41 < 0x1a) {
      iVar3 = 1;
    }
    else if (param_1 - 0x5b < 6) {
      iVar2 = 0x25;
    }
    else if (param_1 - 0x61 < 0x1a) {
      iVar3 = 2;
    }
    else {
      iVar2 = 0x3f;
      if (3 < param_1 - 0x7b) {
        return 0;
      }
    }
  }
  if (iVar2 == 0) {
    uVar1 = (*(ushort *)(&DAT_00298720 + iVar3 * 4) + param_1) -
            (uint)*(ushort *)(&DAT_00298722 + iVar3 * 4) & 0xffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(&DAT_00298730 + (param_1 - (iVar2 + 0x1f)) * 2);
  }
  return (ushort)(uVar1 << 8) | (ushort)(uVar1 >> 8);
}

