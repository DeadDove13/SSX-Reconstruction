/* Ghidra pseudocode. PS2 address: 002407d0. Not validated source. */

undefined4 FUN_002407d0(undefined4 *param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  byte bVar4;
  short sVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  int aiStack_90 [4];
  
  iVar15 = -1;
  uVar14 = 0;
  iVar7 = -1;
  uVar3 = *param_1;
  lVar9 = FUN_00240438(uVar3);
  if (lVar9 != 0) {
    lVar10 = FUN_00240498(uVar3,aiStack_90);
    uVar14 = 0;
    if (lVar10 != 0) {
      iVar13 = (int)lVar9;
      bVar4 = *(byte *)(iVar13 + 10) >> 5;
      if ((bVar4 & 1) == 0) {
        cVar1 = *(char *)(iVar13 + 9);
        cVar6 = FUN_00243638(100,0xffffffffffffffff);
        if (cVar1 < cVar6) {
          return 0;
        }
        uVar2 = *(undefined2 *)(iVar13 + 4);
      }
      else {
        lVar9 = FUN_002407a0(aiStack_90[0]);
        if (lVar9 == 0) {
          return 0;
        }
        iVar7 = (&DAT_002a4b80)[aiStack_90[0]];
        iVar15 = (&DAT_002a4b70)[aiStack_90[0]];
        uVar2 = *(undefined2 *)(*(int *)(&DAT_002a4ba0 + iVar7 * 0x40) + 4);
      }
      lVar9 = FUN_00240628(uVar2,aiStack_90[0],bVar4 & 1);
      if (lVar9 < 0) {
        uVar14 = 0;
        if ((bVar4 & 1) != 0) {
          FUN_00240e60(iVar7);
          uVar14 = 0;
        }
      }
      else {
        iVar7 = FUN_00208800();
        if (iVar7 == DAT_002c5b4c) {
          DAT_002c5b50 = DAT_002c5b50 + 1;
        }
        else {
          DAT_002c5b50 = 0;
        }
        sVar5 = DAT_002c5b50;
        iVar12 = (int)lVar9;
        iVar8 = iVar12 * 0x40;
        *(int *)(&DAT_002a4ba0 + iVar8) = iVar13;
        (&DAT_002a4b9b)[iVar8] = (undefined1)aiStack_90[0];
        (&DAT_002a4b94)[iVar12 * 0x10] = iVar7;
        *(undefined2 *)(&DAT_002a4b9e + iVar8) = 0xffff;
        (&DAT_002a4b98)[iVar12 * 0x20] = sVar5;
        DAT_002c5b4c = iVar7;
        (&DAT_002a4b9c)[iVar12 * 0x20] = bVar4 & 1;
        if ((bVar4 & 1) != 0) {
          *(short *)(&DAT_002a4b9e + iVar15 * 0x40) = (short)lVar9;
        }
        puVar11 = (undefined4 *)(&DAT_002a4ba4 + iVar8);
        iVar7 = 0xb;
        do {
          uVar3 = *param_1;
          iVar7 = iVar7 + -1;
          param_1 = param_1 + 1;
          *puVar11 = uVar3;
          puVar11 = puVar11 + 1;
        } while (-1 < iVar7);
        if ((bVar4 & 1) == 0) {
          (&DAT_002a4b60)[aiStack_90[0]] = (&DAT_002a4b60)[aiStack_90[0]] + 1;
        }
        (&DAT_002a4b9a)[iVar8] = 1;
        (&DAT_002a4b70)[aiStack_90[0]] = iVar12;
        if ((bVar4 & 1) == 0) {
          (&DAT_002a4b80)[aiStack_90[0]] = iVar12;
        }
        uVar14 = 1;
      }
    }
  }
  return uVar14;
}

