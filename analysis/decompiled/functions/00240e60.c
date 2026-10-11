/* Ghidra pseudocode. PS2 address: 00240e60. Not validated source. */

void FUN_00240e60(uint param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  if ((param_1 < 0x10) && (iVar3 = param_1 * 0x40, (&DAT_002a4b9c)[param_1 * 0x20] == 0)) {
    bVar1 = (&DAT_002a4b9b)[iVar3];
    (&DAT_002a4b9a)[iVar3] = 0;
    if (param_1 == (&DAT_002a4b80)[bVar1]) {
      (&DAT_002a4b80)[bVar1] = 0xffffffff;
    }
    if (param_1 == (&DAT_002a4b70)[bVar1]) {
      (&DAT_002a4b70)[bVar1] = 0xffffffff;
    }
    uVar4 = (ulong)*(short *)(&DAT_002a4b9e + iVar3);
    if ((uVar4 != 0xffffffffffffffff) && (uVar4 < 0x10)) {
      iVar3 = (int)*(short *)(&DAT_002a4b9e + iVar3);
      do {
        iVar2 = iVar3 * 0x40;
        if ((&DAT_002a4b9c)[iVar3 * 0x20] == 0) {
          uVar4 = 0xffffffffffffffff;
        }
        else if ((&DAT_002a4b9a)[iVar2] == '\0') {
          uVar4 = 0xffffffffffffffff;
        }
        else {
          if (uVar4 == (long)(int)(&DAT_002a4b70)[bVar1]) {
            (&DAT_002a4b70)[bVar1] = -1;
          }
          uVar4 = (ulong)*(short *)(&DAT_002a4b9e + iVar2);
          (&DAT_002a4b9a)[iVar2] = 0;
        }
      } while ((uVar4 != 0xffffffffffffffff) && (iVar3 = (int)uVar4, uVar4 < 0x10));
    }
    if ((&DAT_002a4b9c)[param_1 * 0x20] == 0) {
      (&DAT_002a4b60)[bVar1] = (&DAT_002a4b60)[bVar1] + -1;
    }
    if ((int)(&DAT_002a4b60)[bVar1] < 0) {
      (&DAT_002a4b60)[bVar1] = 0;
    }
  }
  return;
}

