/* Ghidra pseudocode. PS2 address: 00229480. Not validated source. */

void FUN_00229480(int param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  
  iVar4 = DAT_0029a8f0 + param_1 * 0x6c;
  if (*(short *)(iVar4 + 0x66) == 0) {
    lVar3 = (long)*(short *)(iVar4 + 100);
    if (*(short *)(iVar4 + 0x62) != 0) {
      cVar1 = *(char *)(iVar4 + 0x3b);
      if (*(int *)(iVar4 + 0x54) != 0) {
        cVar1 = *(char *)(*(int *)(iVar4 + 0x54) + (int)cVar1);
      }
      lVar3 = (long)((int)*(short *)(iVar4 + 100) +
                    ((cVar1 + -0x40) * (int)*(short *)(iVar4 + 0x62) >> 6));
    }
    if (*(int *)(iVar4 + 0x5c) != 0) {
      lVar3 = (long)((int)lVar3 +
                    ((*(char *)(*(int *)(iVar4 + 0x5c) + (uint)*(byte *)(iVar4 + 0x47)) + -0x40) *
                     (int)*(short *)(iVar4 + 0x60) >> 6));
    }
    iVar6 = 0x1000;
    if (lVar3 < 0x4b0) {
      uVar7 = (uint)*(ushort *)(iVar4 + 0x68);
    }
    else {
      uVar7 = (uint)*(ushort *)(iVar4 + 0x68);
      do {
        lVar3 = (long)((int)lVar3 + -0x4b0);
        iVar6 = iVar6 << 1;
      } while (0x4af < lVar3);
    }
    for (; lVar3 < -0x4af; lVar3 = (long)((int)lVar3 + 0x4b0)) {
      iVar6 = iVar6 >> 1;
    }
    iVar2 = (int)lVar3 * 0x369d >> 0x10;
    if (iVar2 < -0xff) {
      iVar2 = -0xff;
    }
    if (iVar2 < 0) {
      uVar5 = (undefined2)((int)(iVar6 * ((byte)(&DAT_0029aa38)[iVar2] + 0x100)) >> 9);
    }
    else {
      uVar5 = (undefined2)(iVar6 * (*(byte *)(iVar2 + 0x29a938) + 0x100) >> 8);
    }
    *(undefined2 *)(iVar4 + 0x66) = uVar5;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0x68);
  }
  *(short *)(iVar4 + 0x6a) = (short)((int)(*(ushort *)(iVar4 + 0x66) * uVar7) >> 0xc);
  return;
}

