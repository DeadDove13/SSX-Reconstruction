/* Ghidra pseudocode. PS2 address: 00227b10. Not validated source. */

int FUN_00227b10(int param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,ulong param_5,
                undefined8 param_6,undefined2 *param_7,int param_8)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  int iVar7;
  undefined8 uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulong in_hi;
  long lVar6;
  
  if (DAT_0029a888 == '\0') {
    iVar12 = -10;
  }
  else {
    iVar12 = 0;
    piVar9 = &DAT_0029a7e8;
    do {
      if (*piVar9 == 0) {
        *(int *)(param_7 + 0x50) = param_1;
        *(undefined2 **)(param_7 + 0x56) = param_7 + 0x58;
        uVar1 = *(undefined1 *)(param_1 + 4);
        *(int *)(param_7 + 0x52) = param_1 + 0xc;
        *(undefined1 *)(param_7 + 2) = uVar1;
        iVar11 = 0;
        lVar6 = ((long)(param_1 + 0xc) | in_hi) + (long)(int)((uint)*(byte *)(param_1 + 6) * 0x1c);
        uVar5 = (uint)lVar6;
        *(uint *)(param_7 + 8) = uVar5;
        bVar2 = *(byte *)(param_1 + 7);
        bVar3 = *(byte *)(param_1 + 0xb);
        *param_7 = param_3;
        param_7[0x4e] = 0xffff;
        param_7[0x4c] = 0xffff;
        param_7[0x4d] = 0;
        param_7[0x4f] = 0;
        *(uint *)(param_7 + 10) = (uVar5 | (uint)((ulong)lVar6 >> 0x20)) + (uint)bVar3 * (uint)bVar2
        ;
        *(undefined1 *)((int)param_7 + 7) = 0;
        *(undefined1 *)(param_7 + 3) = 0;
        bVar2 = *(byte *)(param_1 + 5);
        *(char *)(param_7 + 4) = (char)param_5;
        param_7[1] = (ushort)bVar2;
        if ((param_5 & 0xff) != 0) {
          iVar10 = *(int *)(param_7 + 0x56);
          iVar7 = 0;
          do {
            iVar11 = iVar11 + 1;
            ((undefined4 *)(iVar7 + iVar10))[1] = 0xffffffff;
            *(undefined4 *)(iVar7 + iVar10) = 0;
            iVar7 = iVar11 * 8;
          } while (iVar11 < (int)(uint)*(byte *)(param_7 + 4));
        }
        FUN_0025bbe4(param_7 + 0xc,param_2);
        iVar11 = FUN_00226a00(param_4,param_5,param_6,param_7 + 0x58 + (int)param_5 * 4,
                              param_8 + -0xb0 + (int)param_5 * -8);
        *(int *)(param_7 + 0x54) = iVar11;
        if (iVar11 < 0) {
          return iVar11;
        }
        uVar8 = FUN_00229740(*(int *)(param_7 + 10) + (short)param_7[1] * 4,4);
        iVar11 = FUN_00226b28(*(undefined4 *)(param_7 + 0x54),100,param_2,uVar8);
        piVar9 = *(int **)(param_7 + 0x56);
        *(int *)(param_7 + 6) = iVar11;
        piVar9[1] = iVar11;
        sVar4 = param_7[1];
        *piVar9 = (int)sVar4;
        *(undefined1 *)((int)param_7 + 9) = 1;
        if (*(char *)(param_7 + 2) == '\0') {
          *(undefined1 *)((int)param_7 + 5) = 1;
        }
        else {
          *(undefined1 *)((int)param_7 + 5) =
               *(undefined1 *)(sVar4 * 0x1c + *(int *)(param_7 + 0x52) + 2);
        }
        iVar11 = 0;
        piVar9 = &DAT_0029a7e8;
        iVar10 = 7;
        (&DAT_0029a7e8)[iVar12] = param_7;
        do {
          iVar7 = *piVar9;
          piVar9 = piVar9 + 1;
          iVar10 = iVar10 + -1;
          if (iVar7 != 0) {
            iVar11 = iVar11 + 1;
          }
        } while (-1 < iVar10);
        if (iVar11 != 1) {
          return iVar12;
        }
        FUN_0022da10(0x228378);
        DAT_0029a8e8 = FUN_00228290;
        return iVar12;
      }
      iVar12 = iVar12 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar12 < 8);
    iVar12 = -0xd;
  }
  return iVar12;
}

