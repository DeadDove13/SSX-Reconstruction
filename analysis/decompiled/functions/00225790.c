/* Ghidra pseudocode. PS2 address: 00225790. Not validated source. */

undefined4 FUN_00225790(long param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_120 [160];
  int aiStack_80 [4];
  
  if (DAT_0029a888 == '\0') {
    uVar2 = 0xfffffff6;
  }
  else {
    if (param_1 == -1) {
      iVar5 = 0;
      if (DAT_0029a820._4_2_ != 0) {
        do {
          FUN_00225790(iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)(uint)DAT_0029a820._4_2_);
        return 0;
      }
    }
    else {
      lVar4 = FUN_00225958(param_1);
      if (lVar4 != 0) {
        return 0xfffffff8;
      }
      lVar4 = 0;
      FUN_002250c0();
      iVar5 = *(int *)((int)param_1 * 0xc + DAT_0029a8f4);
      if (0 < DAT_0029a890) {
        iVar6 = 0;
        do {
          if (*(char *)(DAT_0029a8f0 + iVar6 + 10) == param_1) {
            FUN_00228918(*(undefined4 *)(DAT_0029a8f0 + iVar6));
          }
          lVar4 = (long)((int)lVar4 + 1);
          iVar6 = iVar6 + 0x6c;
        } while (lVar4 < DAT_0029a890);
      }
      iVar6 = 0;
      if (*(short *)(iVar5 + 6) != 0) {
        do {
          lVar4 = FUN_0022dd90(iVar5,iVar6);
          if (lVar4 == 0) {
            uVar1 = *(ushort *)(iVar5 + 6);
            aiStack_80[0] = 0;
          }
          else {
            aiStack_80[0] = (int)lVar4 + 4;
            do {
              lVar4 = FUN_002297d0(aiStack_80,auStack_120);
              FUN_002256a8(auStack_120,2);
            } while (lVar4 != 0);
            uVar1 = *(ushort *)(iVar5 + 6);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)(uint)uVar1);
      }
      iVar6 = (int)param_1 * 0xc;
      iVar5 = *(int *)(iVar6 + DAT_0029a8f4 + 4);
      if (iVar5 != 0) {
        FUN_0022d6b8(iVar5);
      }
      puVar3 = (undefined4 *)(iVar6 + DAT_0029a8f4);
      *(undefined1 *)(puVar3 + 2) = 0;
      *puVar3 = 0;
      FUN_002250a0();
    }
    uVar2 = 0;
  }
  return uVar2;
}

