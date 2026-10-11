/* Ghidra pseudocode. PS2 address: 0024b9b0. Not validated source. */

undefined4 FUN_0024b9b0(int param_1,int param_2,ulong param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  ulong *puVar8;
  int iVar9;
  
  iVar2 = param_1 / DAT_002a53e8;
  param_1 = param_1 % DAT_002a53e8;
  if (DAT_002a53e8 == 0) {
    trap(7);
  }
  if ((param_3 & 1) == 0) {
    if (2 < (int)param_4 - 1U) {
      FUN_0024af68(0x2bf320,param_4);
      DAT_002a53c8 = 1;
      return 0;
    }
    FUN_0024bce0(param_1 << 4,iVar2 << 4,param_3);
    do {
      uVar5 = REG_DMAC_9_SPR_TO_CHCR;
    } while ((uVar5 >> 8 & 1) != 0);
    iVar9 = 0;
    iVar3 = *(int *)(&DAT_002a59e4 + DAT_002a5b38 * 0x140);
    puVar8 = (ulong *)((uint)PTR_DAT_002a529c & 0xfffffff | 0x20000000);
    if (0 < iVar3) {
      piVar7 = (int *)(&DAT_002a58d0 + DAT_002a5b38 * 0x140);
      do {
        iVar4 = *piVar7;
        lVar6 = 0;
        if (iVar9 != iVar3 + -1) {
          lVar6 = 3;
        }
        *puVar8 = ((long)piVar7[-4] & 0xfffffffU) << 0x20 | 0x30000030;
        iVar9 = iVar9 + 1;
        puVar8[2] = ((long)iVar4 & 0xfffffffU) << 0x20 | lVar6 << 0x1c | 0x30;
        piVar7 = piVar7 + 1;
        puVar8 = puVar8 + 4;
      } while (iVar9 < iVar3);
    }
    SYNC(0);
    REG_DMAC_9_SPR_TO_SADR = (&DAT_002a58b8)[DAT_002a5b38 * 0x50];
    REG_DMAC_9_SPR_TO_TADR = PTR_DAT_002a529c;
    REG_DMAC_9_SPR_TO_QWC = 0;
    REG_DMAC_9_SPR_TO_CHCR = 0x105;
    *(undefined4 *)(&DAT_002a59f0 + DAT_002a5b38 * 0x140) = 1;
  }
  else {
    do {
      uVar5 = REG_DMAC_9_SPR_TO_CHCR;
    } while ((uVar5 >> 8 & 1) != 0);
    *(undefined4 *)(&DAT_002a59f0 + DAT_002a5b38 * 0x140) = 0;
  }
  if ((param_2 == 1) && ((param_3 & 2) != 0)) {
    *(undefined4 *)(&DAT_002a59ec + DAT_002a5b38 * 0x140) = 1;
  }
  else {
    *(undefined4 *)(&DAT_002a59ec + DAT_002a5b38 * 0x140) = 0;
  }
  iVar3 = DAT_002a546c;
  bVar1 = DAT_002a546c == 3;
  *(int *)(&DAT_002a59e8 + DAT_002a5b38 * 0x140) = (int)(param_3 & 1);
  if (bVar1) {
    *(int *)(&DAT_002a59e0 + DAT_002a5b38 * 0x140) =
         *DAT_002a5504 + (param_1 * DAT_002a5504[4] + iVar2) * 0x180;
  }
  else {
    piVar7 = DAT_002a550c;
    if (iVar3 != 2) {
      piVar7 = DAT_002a5508;
    }
    *(int *)(&DAT_002a59e0 + DAT_002a5b38 * 0x140) = *piVar7 + (param_1 * piVar7[4] + iVar2) * 0x180
    ;
  }
  return 1;
}

