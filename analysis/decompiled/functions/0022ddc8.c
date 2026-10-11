/* Ghidra pseudocode. PS2 address: 0022ddc8. Not validated source. */

undefined4 FUN_0022ddc8(int param_1,undefined8 param_2,undefined2 *param_3,char *param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined1 auStack_160 [3];
  undefined1 uStack_15d;
  undefined1 uStack_148;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 *puStack_ac;
  
  uStack_b4 = 0;
  if (DAT_0029a888 == '\0') {
    uVar4 = 0xfffffff6;
  }
  else {
    puVar14 = (undefined4 *)param_2;
    uVar13 = (uint)*(byte *)((int)puVar14 + 2);
    iVar12 = 0;
    puVar2 = (undefined4 *)(&DAT_002a1b10)[param_1];
    iStack_b0 = param_1;
    FUN_002250c0();
    uStack_148 = *(undefined1 *)(param_3 + 4);
    uStack_15d = *(undefined1 *)((int)puVar14 + 2);
    uStack_b4 = 0;
    puVar2[0xb] = *puVar14;
    puVar2[1] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *(undefined2 *)((int)puVar2 + 0x16) = 0;
    *(undefined2 *)(puVar2 + 5) = 0;
    *(undefined1 *)((int)puVar2 + 0x13) = 1;
    puStack_ac = &uStack_b4;
    if (*(char *)((int)puVar2 + 0x2e) == '\0') {
      puStack_ac = &uStack_b4;
    }
    else {
      iVar8 = 0;
      do {
        iVar9 = iVar12 * 2;
        uVar4 = *(undefined4 *)((int)param_3 + iVar8 + 0x10);
        *(undefined2 *)((int)puVar2 + iVar9 + 0xc) = 0;
        *(undefined4 *)((int)puVar2 + iVar8 + 0x30) = uVar4;
        iVar12 = iVar12 + 1;
        *(undefined2 *)((int)puVar2 + iVar9 + 8) = 0;
        iVar8 = iVar12 * 4;
      } while (iVar12 < (int)(uint)*(byte *)((int)puVar2 + 0x2e));
    }
    while (lVar6 = FUN_0022dad8(puStack_ac,auStack_160), lVar6 != 0) {
      FUN_0022c258(lVar6,&uStack_c0,&uStack_bc);
      lVar5 = FUN_00228d18(uVar13,0x65,&uStack_b8,uStack_c0,uStack_bc);
      if (lVar5 < 0) {
        *puVar2 = 0xfffffff7;
      }
      else {
        sVar7 = -1;
        iVar8 = -1;
        uVar11 = 0xff;
        iVar12 = 0;
        *puVar2 = uStack_b8;
        iVar9 = (int)lVar5;
        if (*(byte *)((int)puVar14 + 2) != 0) {
          do {
            sVar10 = *(short *)(iVar9 * 0x6c + DAT_0029a8f0 + iVar12 * 2 + 4);
            iVar3 = iVar12;
            if (sVar10 <= sVar7) {
              iVar3 = iVar8;
              sVar10 = sVar7;
            }
            iVar8 = iVar3;
            uVar11 = (undefined1)iVar8;
            iVar12 = iVar12 + 1;
            sVar7 = sVar10;
          } while (iVar12 < (int)(uint)*(byte *)((int)puVar14 + 2));
        }
        *(undefined1 *)((int)puVar2 + 0x12) = uVar11;
        iVar12 = DAT_0029a8f0 + iVar9 * 0x6c;
        if (param_4[3] == '\0') {
          sVar7 = (param_4[4] + -0x40) * 0x100;
        }
        else {
          sVar7 = *(short *)(param_4 + 8);
        }
        *(short *)(iVar12 + 0x10) = sVar7;
        *(undefined1 *)(iVar12 + 10) = 0xff;
        *(undefined4 *)(iVar12 + 0x20) = 0;
        *(undefined2 *)(iVar12 + 100) = *param_3;
        *(undefined2 *)(iVar12 + 0x68) = *(undefined2 *)(param_4 + 0xc);
        cVar1 = *param_4;
        *(undefined4 *)(iVar12 + 0x34) = 0x7fffffff;
        *(undefined4 *)(iVar12 + 0x30) = 0x7f0000;
        *(int *)(iVar12 + 0x28) = (int)cVar1 << 0x10;
        *(undefined4 *)(iVar12 + 0x2c) = 0;
        *(undefined1 *)(iVar12 + 0x38) = *(undefined1 *)((int)param_3 + 3);
        *(undefined1 *)(iVar12 + 0x3a) = *(undefined1 *)(param_3 + 2);
        cVar1 = param_4[1];
        *(undefined1 *)(iVar12 + 0x3c) = 1;
        *(char *)(iVar12 + 0x3b) = cVar1;
        *(undefined1 *)(iVar12 + 0x3d) = 0;
        *(undefined1 *)(iVar12 + 0x3e) = 0;
        *(undefined1 *)(iVar12 + 0x3f) = 1;
        *(undefined1 *)(iVar12 + 0x40) = *(undefined1 *)((int)param_3 + 5);
        *(char *)(iVar12 + 0x41) = param_4[2];
        cVar1 = *(char *)(param_3 + 3);
        *(undefined1 *)(iVar12 + 0x1a) = 0;
        *(undefined1 *)(iVar12 + 0x17) = 0;
        *(short *)(iVar12 + 0x62) = cVar1 * 100;
        cVar1 = param_4[4];
        *(undefined4 *)(iVar12 + 0x4c) = 0;
        *(char *)(iVar12 + 0x1b) = cVar1;
        *(undefined4 *)(iVar12 + 0x50) = 0;
        *(undefined2 *)(iVar12 + 0x66) = 0;
        *(undefined4 *)(iVar12 + 0x54) = 0;
        *(undefined4 *)(iVar12 + 0x58) = 0;
        *(undefined4 *)(iVar12 + 0x5c) = 0;
        FUN_00229480(lVar5);
        FUN_002293d0(lVar5);
        FUN_0022ebb0(0,lVar5);
        lVar6 = FUN_00233f88(iStack_b0,lVar5,lVar6,*(undefined2 *)(param_4 + 0xe),
                             *(undefined2 *)(param_4 + 0x12),*(undefined2 *)(param_4 + 0x14),
                             *(undefined2 *)(param_4 + 0x16),param_2);
        if (-1 < lVar6) break;
        iVar12 = 0;
        if (uVar13 != 0) {
          do {
            iVar8 = iVar12 * 2;
            iVar12 = iVar12 + 1;
            FUN_002291c8(*(undefined2 *)(iVar9 * 0x6c + DAT_0029a8f0 + iVar8 + 4));
          } while (iVar12 < (int)uVar13);
        }
        *puVar2 = (int)lVar6;
      }
    }
    FUN_002250a0();
    uVar4 = *puVar2;
  }
  return uVar4;
}

