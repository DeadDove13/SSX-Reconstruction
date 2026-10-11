/* Ghidra pseudocode. PS2 address: 00229ca0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00229e74) */

undefined4
FUN_00229ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4,
            undefined8 param_5,undefined4 param_6,int param_7,long param_8)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int *piVar4;
  short sVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined2 uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined4 *puStack_b0;
  
  iVar12 = (int)param_5;
  iStack_bc = (int)*param_4;
  iStack_b8 = (int)param_4[1];
  iStack_b4 = (int)param_4[2];
  lVar13 = (long)param_4[4];
  cVar1 = *(char *)(iVar12 + 0x11);
  lVar14 = (long)cVar1;
  uStack_d0 = param_1;
  uStack_cc = param_2;
  uStack_c8 = param_3;
  uStack_c4 = param_6;
  iStack_c0 = param_7;
  if (*(char *)(iVar12 + 0x12) != '\0') {
    iVar6 = FUN_0022ec28(*(char *)(iVar12 + 0x12));
    lVar14 = (long)(cVar1 + iVar6);
  }
  if (lVar14 < 0x80) {
    if (lVar14 < 0) {
      lVar14 = 0;
    }
  }
  else {
    lVar14 = 0x7f;
  }
  uStack_d4 = 0;
  puStack_b0 = &uStack_d4;
  while( true ) {
    do {
      iVar6 = (int)lVar13;
      lVar8 = FUN_0022dad8(puStack_b0,param_5);
      if (lVar8 == 0) {
        return uStack_d8;
      }
      FUN_0022c258(lVar8,&uStack_e0,(uint)&uStack_e0 | 4);
      lVar7 = FUN_00228d18(*(undefined1 *)(iVar12 + 3),*(undefined1 *)(iVar12 + 0xc),
                           (uint)&uStack_e0 | 8,uStack_e0,uStack_dc);
    } while (lVar7 < 0);
    iVar11 = DAT_0029a8f0 + (int)lVar7 * 0x6c;
    *(undefined1 *)(iVar11 + 0x3f) = *(undefined1 *)(iVar12 + 0x1e);
    sVar5 = *(short *)(iVar12 + 4);
    *(short *)(iVar11 + 100) = sVar5;
    sVar5 = sVar5 + ((short)*(char *)(iVar12 + 0xd) - (short)uStack_c4) * -100;
    *(short *)(iVar11 + 100) = sVar5;
    if (param_8 != 0) {
      *(short *)(iVar11 + 100) = sVar5 + (short)param_8;
    }
    if (*(short *)(iVar12 + 6) != 0) {
      sVar5 = FUN_0022ec28();
      *(short *)(iVar11 + 100) = *(short *)(iVar11 + 100) + sVar5;
    }
    uVar3 = *(undefined4 *)(iVar12 + 0x24);
    *(undefined4 *)(iVar11 + 0x50) = *(undefined4 *)(iVar12 + 0x20);
    *(undefined4 *)(iVar11 + 0x54) = uVar3;
    *(int *)(iVar11 + 0x28) = iStack_bc << 0x10;
    *(undefined4 *)(iVar11 + 0x20) = 0;
    *(char *)(iVar11 + 0x1b) = (char)lVar13;
    if (*(char *)(iVar11 + 0x3f) != '\x01') {
      iVar6 = (iVar6 + -0x40) * (int)*(char *)(iVar11 + 0x3f) + 0x40;
    }
    lVar13 = (long)((int)lVar14 + iVar6 + -0x40);
    if (lVar13 < 0) {
      lVar13 = 0;
    }
    else if (0x7f < lVar13) {
      lVar13 = 0x7f;
    }
    cVar1 = *(char *)(iVar12 + 0x14);
    lVar10 = (long)cVar1;
    if (*(char *)(iVar12 + 0x15) != '\0') {
      iVar6 = FUN_0022ec28();
      lVar10 = (long)(cVar1 + iVar6);
    }
    if (0x7f < lVar10) {
      lVar10 = 0x7f;
    }
    if (lVar10 < 0) {
      lVar10 = 0;
    }
    *(char *)(iVar11 + 0x3a) = (char)lVar14;
    *(char *)(iVar11 + 0x38) = (char)(((int)lVar10 * iStack_c0) / 0x7f);
    cVar1 = *(char *)(iVar12 + 0x10);
    *(char *)(iVar11 + 0x3b) = (char)iStack_b8;
    piVar4 = *(int **)(iVar12 + 0x28);
    *(int **)(iVar11 + 0x4c) = piVar4;
    *(short *)(iVar11 + 0x62) = cVar1 * 100;
    cVar1 = *(char *)(iVar12 + 0x19);
    *(undefined1 *)(iVar11 + 0x3d) = 0;
    *(int *)(iVar11 + 0x30) = (int)cVar1 << 0x10;
    *(undefined1 *)(iVar11 + 0x3c) = *(undefined1 *)(iVar12 + 0xf);
    *(undefined1 *)(iVar11 + 0x3e) = *(undefined1 *)(iVar12 + 0xe);
    iVar6 = *piVar4;
    *(int *)(iVar11 + 0x34) = iVar6;
    if (iVar6 < 0) {
      *(undefined4 *)(iVar11 + 0x34) = 0x7fffffff;
    }
    iVar6 = *(int *)(*(int *)(iVar11 + 0x4c) + 4);
    if (*(int *)(iVar11 + 0x34) == 0) {
      trap(7);
    }
    uVar3 = *(undefined4 *)(iVar12 + 0x30);
    *(undefined4 *)(iVar11 + 0x58) = *(undefined4 *)(iVar12 + 0x2c);
    *(undefined4 *)(iVar11 + 0x5c) = uVar3;
    *(int *)(iVar11 + 0x2c) = (iVar6 * 0x10000 - *(int *)(iVar11 + 0x30)) / *(int *)(iVar11 + 0x34);
    *(undefined1 *)(iVar11 + 0x44) = *(undefined1 *)(iVar12 + 0x1a);
    *(undefined1 *)(iVar11 + 0x45) = *(undefined1 *)(iVar12 + 0x1c);
    *(undefined2 *)(iVar11 + 0x60) = *(undefined2 *)(iVar12 + 0x54);
    if (*(char *)(iVar12 + 0x1b) == '\0') {
      *(undefined1 *)(iVar11 + 0x46) = 0;
    }
    else {
      iVar6 = FUN_0022ab00();
      if (*(char *)(iVar12 + 0x1b) == '\0') {
        trap(7);
      }
      *(char *)(iVar11 + 0x46) = (char)(iVar6 % (int)*(char *)(iVar12 + 0x1b));
    }
    if (*(char *)(iVar12 + 0x1d) == '\0') {
      *(undefined1 *)(iVar11 + 0x47) = 0;
    }
    else {
      iVar6 = FUN_0022ab00();
      if (*(byte *)(iVar12 + 0x1c) == 0) {
        trap(7);
      }
      *(char *)(iVar11 + 0x47) = (char)(iVar6 % (int)(uint)*(byte *)(iVar12 + 0x1c));
    }
    *(undefined2 *)(iVar11 + 0x48) = *(undefined2 *)(param_4 + 0xe);
    uVar9 = *(undefined2 *)(param_4 + 0xc);
    *(undefined2 *)(iVar11 + 0x66) = 0;
    *(undefined2 *)(iVar11 + 0x68) = uVar9;
    FUN_00229480(lVar7);
    uVar2 = *(undefined1 *)(iVar12 + 0x16);
    *(char *)(iVar11 + 0x41) = (char)iStack_b4;
    *(undefined1 *)(iVar11 + 0x40) = uVar2;
    FUN_0022ebb0(0,lVar7);
    FUN_002293d0(lVar7);
    *(char *)(iVar11 + 10) = (char)uStack_d0;
    *(short *)(iVar11 + 8) = (short)uStack_cc;
    if (param_4[3] == '\0') {
      uVar9 = 0;
      sVar5 = ((short)lVar13 + -0x40) * 0x100;
    }
    else {
      sVar5 = *(short *)(param_4 + 8);
      uVar9 = *(undefined2 *)(param_4 + 10);
    }
    *(undefined2 *)(iVar11 + 0x12) = uVar9;
    *(short *)(iVar11 + 0x10) = sVar5;
    lVar8 = FUN_0022cca8(param_5,lVar8,uStack_c8,lVar7,*(undefined2 *)(param_4 + 0xe),
                         *(undefined2 *)(param_4 + 0x12),*(undefined2 *)(param_4 + 0x14),
                         *(undefined2 *)(param_4 + 0x16));
    if (-1 < lVar8) break;
    lVar8 = 0;
    if ('\0' < *(char *)(iVar12 + 3)) {
      do {
        iVar6 = (int)lVar8;
        lVar8 = (long)(iVar6 + 1);
        FUN_002291c8(*(undefined2 *)((int)lVar7 * 0x6c + DAT_0029a8f0 + iVar6 * 2 + 4));
      } while (lVar8 < *(char *)(iVar12 + 3));
    }
    uStack_d8 = 0xfffffff7;
  }
  return uStack_d8;
}

