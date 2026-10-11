/* Ghidra pseudocode. PS2 address: 0022d4c0. Not validated source. */

int FUN_0022d4c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = 0;
  if (DAT_0029e6c0 < 0x80) {
    iVar8 = param_1 + 0x3f >> 6;
    if (DAT_0029e6c0 == 0) {
      uVar6 = (uint)DAT_0029e6c2;
      iVar3 = (uint)DAT_0029e6c4 - (uint)DAT_0029e6c2;
      if ((int)(uint)DAT_0029e6c6 < (int)((uint)DAT_0029e6c2 + iVar3)) {
        iVar3 = (uint)DAT_0029e6c6 - (uint)DAT_0029e6c2;
      }
      iVar7 = 0;
    }
    else {
      if (DAT_0029e6c0 != 0) {
        iVar7 = 0;
        do {
          if (iVar3 == 0) {
            uVar6 = (uint)DAT_0029e6c2;
            iVar4 = (uint)*(ushort *)(&DAT_0029e6c8 + iVar7) - (uint)DAT_0029e6c2;
          }
          else {
            uVar6 = (uint)*(ushort *)((int)&DAT_0029e6c4 + iVar7) +
                    (uint)*(ushort *)((int)&DAT_0029e6c6 + iVar7);
            iVar4 = *(ushort *)(&DAT_0029e6c8 + iVar7) - uVar6;
          }
          iVar1 = DAT_0029e6c2 - uVar6;
          if (uVar6 < DAT_0029e6c2) {
            iVar4 = iVar4 - iVar1;
            uVar6 = uVar6 + iVar1;
          }
          if ((int)(uint)DAT_0029e6c4 < (int)(uVar6 + iVar4)) {
            iVar4 = DAT_0029e6c4 - uVar6;
          }
          if ((int)(uint)DAT_0029e6c6 < (int)(uVar6 + iVar4)) {
            iVar4 = DAT_0029e6c6 - uVar6;
          }
          if (iVar8 <= iVar4) {
            uVar5 = (uint)DAT_0029e6c0;
            if (iVar3 < (int)uVar5) {
              puVar2 = (undefined4 *)(&DAT_0029e6c8 + (uint)DAT_0029e6c0 * 4);
              do {
                *puVar2 = puVar2[-1];
                uVar5 = uVar5 - 1;
                puVar2 = puVar2 + -1;
              } while (iVar3 < (int)uVar5);
            }
            goto LAB_0022d690;
          }
          iVar3 = iVar3 + 1;
          iVar7 = iVar3 * 4;
        } while (iVar3 < (int)(uint)DAT_0029e6c0);
      }
      iVar7 = iVar3 * 4;
      uVar6 = (uint)(&DAT_0029e6c4)[iVar3 * 2] + (uint)(&DAT_0029e6c6)[iVar3 * 2];
      iVar3 = DAT_0029e6c4 - uVar6;
      if (uVar6 < DAT_0029e6c2) {
        iVar4 = DAT_0029e6c2 - uVar6;
        iVar3 = iVar3 - iVar4;
        uVar6 = uVar6 + iVar4;
      }
      if ((int)(uint)DAT_0029e6c4 < (int)(uVar6 + iVar3)) {
        iVar3 = DAT_0029e6c4 - uVar6;
      }
      if ((int)(uint)DAT_0029e6c6 < (int)(uVar6 + iVar3)) {
        iVar3 = DAT_0029e6c6 - uVar6;
      }
    }
    if (iVar8 <= iVar3) {
LAB_0022d690:
      *(short *)(&DAT_0029e6ca + iVar7) = (short)iVar8;
      *(short *)(&DAT_0029e6c8 + iVar7) = (short)uVar6;
      DAT_0029e6c0 = DAT_0029e6c0 + 1;
      return uVar6 << 6;
    }
  }
  return 0;
}

