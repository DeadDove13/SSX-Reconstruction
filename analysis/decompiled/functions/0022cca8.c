/* Ghidra pseudocode. PS2 address: 0022cca8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0022cde4) */

undefined4
FUN_0022cca8(int param_1,undefined1 param_2,int param_3,undefined8 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  short sVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  
  iVar4 = (int)param_4 * 0x14;
  iVar9 = 1;
  uVar2 = *(undefined4 *)(param_1 + 0x58);
  iVar10 = DAT_0029a8f0 + (int)param_4 * 0x6c;
  *(undefined2 *)(iVar10 + 0x14) = *(undefined2 *)(param_1 + 0x56);
  *(undefined4 *)(iVar10 + 0xc) = uVar2;
  puVar11 = (undefined4 *)(&DAT_0029e080 + iVar4);
  puVar6 = (undefined4 *)(param_1 + 0x88);
  (&DAT_0029e091)[iVar4] = *(undefined1 *)(param_1 + 3);
  (&DAT_0029e090)[iVar4] = param_2;
  do {
    puVar11 = puVar11 + 1;
    uVar2 = *puVar6;
    iVar9 = iVar9 + -1;
    puVar6 = puVar6 + 1;
    *puVar11 = uVar2;
  } while (-1 < iVar9);
  if (((&DAT_0029e090)[iVar4] & 8) == 0) {
    if (DAT_0029e8d8 == 0) {
      return 0xfffffff7;
    }
    iVar9 = 0;
    if ((&DAT_0029e091)[iVar4] != '\0') {
      iVar5 = 0;
      do {
        iVar7 = iVar9 * 4;
        iVar9 = iVar9 + 1;
        FUN_0022f5d0((int)*(short *)(iVar10 + 4 + iVar5) - (uint)DAT_0029a828._2_1_,
                     *(undefined1 *)(param_1 + 0x13),1,param_3 + *(int *)(param_1 + 0x68 + iVar7),
                     *(undefined4 *)(param_1 + 0x70 + iVar7),(&DAT_0029e091)[iVar4],
                     *(undefined4 *)(iVar10 + 0xc),*(undefined4 *)(param_1 + 0x5c));
        iVar5 = iVar9 * 2;
      } while (iVar9 < (int)(uint)(byte)(&DAT_0029e091)[iVar4]);
    }
    iVar9 = 0;
    FUN_0022bbc8(*(undefined2 *)(iVar10 + 4));
    FUN_0022ca48(*(undefined2 *)(iVar10 + 4));
    FUN_0022bd38(*(undefined2 *)(iVar10 + 4),0);
    FUN_0022c2a0(*(undefined2 *)(iVar10 + 4),param_5);
    FUN_0022c368(*(undefined2 *)(iVar10 + 4),param_6);
    FUN_0022c428(*(undefined2 *)(iVar10 + 4),param_7);
    FUN_0022c520(*(undefined2 *)(iVar10 + 4),param_8);
    if ((&DAT_0029e091)[iVar4] != '\0') {
      iVar5 = 0;
      do {
        iVar9 = iVar9 + 1;
        FUN_0022f7a0((int)*(short *)(iVar10 + 4 + iVar5) - (uint)DAT_0029a828._2_1_);
        iVar5 = iVar9 * 2;
      } while (iVar9 < (int)(uint)(byte)(&DAT_0029e091)[iVar4]);
    }
  }
  else {
    iVar9 = 0;
    FUN_0022bbc8(param_4);
    FUN_0022ca48(param_4);
    FUN_0022bd38(param_4,0);
    if ((&DAT_0029e091)[iVar4] != '\0') {
      puVar3 = *(uint **)(param_1 + 100);
      iVar5 = 0;
      do {
        sVar1 = *(short *)(iVar10 + 4 + iVar5);
        puVar8 = (uint *)(&DAT_0029e08c + sVar1 * 0x14);
        *puVar8 = *puVar3;
        if (iVar9 == 1) {
          *(int *)(&DAT_0029e08c + *(short *)(iVar10 + 6) * 0x14) =
               *(int *)(&DAT_0029e08c + *(short *)(iVar10 + 6) * 0x14) +
               (*(int *)(iVar10 + 0xc) << 4) / 0x1c;
        }
        iVar9 = iVar9 + 1;
        DAT_0029e8d4 = DAT_0029e8d4 + 0x200000;
        *(uint *)(&DAT_0029ad10 + sVar1 * 8) = *puVar8 | DAT_0029e8d4;
        *(uint *)(&DAT_0029ae90 + sVar1 * 4) = *puVar8;
        iVar5 = iVar9 * 2;
      } while (iVar9 < (int)(uint)(byte)(&DAT_0029e091)[iVar4]);
      return 0;
    }
  }
  return 0;
}

