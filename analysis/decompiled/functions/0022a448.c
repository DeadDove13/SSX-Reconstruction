/* Ghidra pseudocode. PS2 address: 0022a448. Not validated source. */

void FUN_0022a448(int param_1,undefined2 *param_2,undefined8 param_3,uint *param_4)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  int iStack_c0;
  int iStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint auStack_a0 [4];
  
  FUN_0025a60c(auStack_a0,0,8);
  iVar3 = 0;
  uVar4 = 8;
  uVar12 = 1;
  iVar10 = (int)param_3;
  puVar7 = (undefined4 *)(iVar10 + 0x18);
  puVar2 = (undefined4 *)(iVar10 + 0x10);
  iVar8 = 1;
  do {
    *puVar2 = 0;
    iVar8 = iVar8 + -1;
    *puVar7 = 0;
    puVar2 = puVar2 + 1;
    puVar7 = puVar7 + 1;
  } while (-1 < iVar8);
  FUN_0022eb20(param_3);
  *(undefined1 *)(param_2 + 1) = 1;
  *(undefined1 *)((int)param_2 + 3) = 5;
  *param_2 = 0x5622;
  *param_4 = 0;
  iStack_c0 = param_1 + 4;
  while( true ) {
    bVar11 = (byte)uVar4;
    lVar6 = FUN_0022ec80(&iStack_c0);
    if (lVar6 == 0) break;
    if (iStack_bc == 0xa0) {
      *(undefined1 *)((int)param_2 + 3) = (undefined1)uStack_b8;
    }
    else if (iStack_bc == 0x9c) {
      auStack_a0[0] = uStack_b8;
    }
    else if (iStack_bc == 0x9d) {
      auStack_a0[1] = uStack_b8;
    }
    else if (iStack_bc == 0x98) {
      uVar5 = FUN_00225218(uStack_b0);
      *(int *)(iVar10 + 0x10) = (int)uVar5;
      FUN_0022d7d0(uVar5,uStack_b4,uStack_b0);
      *(undefined4 *)(iVar10 + 0x18) = uStack_b0;
    }
    else if (iStack_bc == 0x99) {
      uVar5 = FUN_00225218(uStack_b0);
      *(int *)(iVar10 + 0x14) = (int)uVar5;
      FUN_0022d7d0(uVar5,uStack_b4,uStack_b0);
      *(undefined4 *)(iVar10 + 0x1c) = uStack_b0;
    }
    else if (iStack_bc == 0x80) {
      *(undefined1 *)(iVar10 + 7) = (undefined1)uStack_b8;
    }
    else if (iStack_bc == 0x82) {
      *(undefined1 *)(param_2 + 1) = (undefined1)uStack_b8;
    }
    else if (iStack_bc == 0x84) {
      *param_2 = (undefined2)uStack_b8;
    }
    else if (iStack_bc == 0x85) {
      *param_4 = uStack_b8;
    }
    else if (iStack_bc == 0x13) {
      *(undefined1 *)(iVar10 + 5) = (undefined1)uStack_b8;
    }
    else if (iStack_bc == 10) {
      *(undefined1 *)(iVar10 + 6) = (undefined1)uStack_b8;
    }
    else if (iStack_bc == 6) {
      *(undefined1 *)(iVar10 + 2) = (undefined1)uStack_b8;
    }
    else if (iStack_bc == 0x8c) {
      uVar4 = uStack_b8 & 0xff;
    }
    else if (iStack_bc == 0xa1) {
      uVar12 = uStack_b8 & 0xff;
    }
    else if (iStack_bc == 0x14) {
      iVar8 = iVar10 + iVar3 * 4;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar8 + 0x20) = uStack_b4;
      *(undefined4 *)(iVar8 + 0x30) = uStack_b0;
    }
  }
  if (uVar12 != 1) {
    if (uVar4 != 8) {
      *(byte *)(iVar10 + 8) = bVar11;
      goto LAB_0022a6c0;
    }
    bVar11 = 0;
    if ((uVar12 & 1) != 0) {
      bVar11 = 8;
    }
    if ((uVar12 & 2) != 0) {
      bVar11 = bVar11 | 4;
    }
    if ((uVar12 & 0x80) != 0) {
      bVar11 = bVar11 | 0x20;
    }
    bVar11 = (byte)uVar12 & 0x40 | bVar11;
  }
  *(byte *)(iVar10 + 8) = bVar11;
LAB_0022a6c0:
  iVar8 = 0;
  if (*(char *)(param_2 + 1) != '\0') {
    iVar3 = 0;
    do {
      psVar9 = (short *)(iVar10 + 0xc + iVar8 * 2);
      sVar1 = *(short *)((int)auStack_a0 + iVar3);
      *psVar9 = sVar1;
      if (*(char *)(param_2 + 1) == '\x02') {
        uVar4 = (uint)*(byte *)(param_2 + 1);
        if ((char)DAT_0029a828 != '\x02') goto LAB_0022a70c;
      }
      else {
        uVar4 = (uint)*(byte *)(param_2 + 1);
LAB_0022a70c:
        *psVar9 = sVar1 + *(short *)(&DAT_0029a90c + iVar8 * 2 + (uVar4 - 1) * 4);
        uVar4 = (uint)*(byte *)(param_2 + 1);
      }
      iVar8 = iVar8 + 1;
      iVar3 = iVar8 * 4;
    } while (iVar8 < (int)uVar4);
  }
  return;
}

