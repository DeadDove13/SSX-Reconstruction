/* Ghidra pseudocode. PS2 address: 002297d0. Not validated source. */

undefined4 FUN_002297d0(undefined4 *param_1,undefined2 *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined4 uVar8;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  int iStack_4c8;
  undefined4 uStack_4c4;
  int iStack_4b4;
  undefined *puStack_4ac;
  undefined4 uStack_4a0;
  int iStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  int iStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 auStack_470 [18];
  int iStack_428;
  int iStack_414;
  int iStack_40c;
  int iStack_3fc;
  int iStack_3f0;
  undefined4 auStack_3dc [3];
  undefined4 auStack_3d0 [2];
  undefined4 uStack_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a0;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  uint uStack_34c;
  undefined4 auStack_140 [10];
  undefined4 uStack_118;
  undefined4 auStack_bc [7];
  undefined4 uStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  
  iVar6 = 0x25;
  puVar4 = (undefined4 *)(param_2 + 0x38);
  puVar7 = param_2 + 0x40;
  uStack_a0 = *param_1;
  *(undefined4 *)(param_2 + 0x48) = uStack_a0;
  puVar3 = auStack_3dc;
  do {
    *puVar3 = 0;
    iVar6 = iVar6 + -1;
    puVar3 = puVar3 + -1;
  } while (-1 < iVar6);
  iVar6 = 0x21;
  puVar3 = auStack_bc;
  do {
    *puVar3 = 0;
    iVar6 = iVar6 + -1;
    puVar3 = puVar3 + -1;
  } while (-1 < iVar6);
  iVar6 = 1;
  do {
    *puVar4 = 0;
    iVar6 = iVar6 + -1;
    *puVar7 = 0;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  } while (-1 < iVar6);
  uStack_4f4 = 0x3c;
  uStack_4e0 = 0x40;
  puStack_4ac = &DAT_0029aa38;
  uVar8 = 0;
  uStack_4a0 = 0x7f;
  uStack_3c0 = 0x5622;
  uStack_50c = 0;
  uStack_508 = 0x7f;
  uStack_504 = 0;
  uStack_500 = 0x7f;
  uStack_4f8 = 0;
  uStack_4f0 = 0xffffffff;
  uStack_4ec = 1;
  uStack_4e8 = 0;
  uStack_4dc = 0;
  uStack_4d8 = 0x7f;
  uStack_4d4 = 0;
  uStack_4d0 = 0;
  uStack_4cc = 0;
  iStack_4c8 = 0;
  uStack_4c4 = 0;
  *(undefined1 *)((int)param_2 + 0x17) = 0;
  iStack_4b4 = 0;
  iStack_49c = 0;
  uStack_498 = 0;
  uStack_494 = 0;
  iStack_490 = 0;
  uStack_48c = 0;
  uStack_488 = 0;
  uStack_484 = 0;
  uStack_480 = 0;
  uStack_47c = 1;
  auStack_3d0[0] = 0;
  uStack_3c8 = 1;
  uStack_3bc = 0;
  uStack_3b4 = 0xffffffff;
  uStack_350 = 5;
  uStack_3a0 = 8;
  uStack_34c = 1;
  uStack_3b8 = 0xffffffff;
  uStack_3b0 = 0;
  uStack_3ac = 0;
  uStack_380 = 0;
  uStack_37c = 0;
  uStack_360 = 0;
  uStack_35c = 0;
  uStack_358 = 0;
  uStack_354 = 0;
  do {
    while( true ) {
      while( true ) {
        lVar5 = FUN_0022ec80(&uStack_a0);
        uVar2 = uStack_94;
        if (lVar5 == 0) goto LAB_00229a7c;
        if (0x25 < iStack_9c) break;
        (&uStack_510)[iStack_9c] = uStack_98;
        bVar1 = iStack_9c == 0x14;
        auStack_470[iStack_9c] = uVar2;
        if (bVar1) {
          *(undefined4 *)(param_2 + *(char *)((int)param_2 + 0x17) * 2 + 0x1a) = uStack_94;
          *(undefined4 *)(param_2 + *(char *)((int)param_2 + 0x17) * 2 + 0x22) = uStack_90;
          *(char *)((int)param_2 + 0x17) = *(char *)((int)param_2 + 0x17) + '\x01';
        }
      }
      if (0x21 < iStack_9c - 0x80U) break;
      auStack_3d0[iStack_9c - 0x80U] = uStack_98;
      iVar6 = iStack_9c;
      bVar1 = iStack_9c == 0x98;
      auStack_140[iStack_9c + -0x80] = uVar2;
      if (bVar1) {
        *(undefined4 *)(param_2 + 0x38) = uStack_94;
        param_2[0x40] = (undefined2)uStack_90;
      }
      else if (iVar6 == 0x99) {
        *(undefined4 *)(param_2 + 0x3a) = uStack_94;
        param_2[0x41] = (undefined2)uStack_90;
      }
    }
  } while (iStack_9c != 0xfe);
  uVar8 = 1;
LAB_00229a7c:
  *(undefined1 *)(param_2 + 4) = (undefined1)uStack_50c;
  *(undefined1 *)(param_2 + 5) = (undefined1)uStack_504;
  *(undefined1 *)((int)param_2 + 0xb) = (undefined1)uStack_500;
  *(undefined1 *)(param_2 + 6) = (undefined1)uStack_4f8;
  *(undefined1 *)((int)param_2 + 0xd) = (undefined1)uStack_4f4;
  *(undefined1 *)(param_2 + 7) = (undefined1)uStack_4f0;
  *(undefined1 *)((int)param_2 + 0xf) = (undefined1)uStack_4ec;
  *(undefined1 *)(param_2 + 8) = (undefined1)uStack_4e8;
  *(undefined1 *)((int)param_2 + 0x11) = (undefined1)uStack_4e0;
  *(undefined1 *)(param_2 + 9) = (undefined1)uStack_4dc;
  *(undefined1 *)(param_2 + 10) = (undefined1)uStack_4d8;
  *(undefined1 *)((int)param_2 + 0x15) = (undefined1)uStack_4d4;
  param_2[2] = (undefined2)uStack_4d0;
  param_2[3] = (undefined2)uStack_4cc;
  *(undefined1 *)((int)param_2 + 9) = (undefined1)uStack_508;
  *(int *)(param_2 + 0x10) = iStack_428 + iStack_4c8;
  *(undefined1 *)(param_2 + 0xb) = (undefined1)uStack_4c4;
  *(int *)(param_2 + 0x12) = iStack_414 + iStack_4b4;
  *(undefined **)(param_2 + 0x14) = puStack_4ac + iStack_40c;
  *(undefined1 *)((int)param_2 + 0x19) = (undefined1)uStack_4a0;
  *(int *)(param_2 + 0x16) = iStack_3fc + iStack_49c;
  *(undefined1 *)(param_2 + 0xd) = (undefined1)uStack_498;
  *(undefined1 *)((int)param_2 + 0x1b) = (undefined1)uStack_494;
  *(int *)(param_2 + 0x18) = iStack_3f0 + iStack_490;
  *(undefined1 *)(param_2 + 0xe) = (undefined1)uStack_48c;
  param_2[0x2a] = (undefined2)uStack_488;
  *(undefined1 *)((int)param_2 + 0x1d) = (undefined1)uStack_484;
  *param_2 = (undefined2)uStack_480;
  *(undefined1 *)(param_2 + 0xf) = (undefined1)uStack_47c;
  *(undefined1 *)(param_2 + 1) = (undefined1)auStack_3d0[0];
  *(undefined1 *)((int)param_2 + 3) = (undefined1)uStack_3c8;
  *(undefined1 *)((int)param_2 + 0x13) = (undefined1)uStack_350;
  param_2[0x2b] = (undefined2)uStack_3c0;
  *(undefined4 *)(param_2 + 0x2c) = uStack_3bc;
  *(undefined4 *)(param_2 + 0x2e) = uStack_3b8;
  *(undefined4 *)(param_2 + 0x30) = uStack_3b4;
  *(undefined4 *)(param_2 + 0x32) = uStack_118;
  *(undefined4 *)(param_2 + 0x34) = uStack_3b0;
  *(undefined4 *)(param_2 + 0x36) = uStack_3ac;
  *(undefined4 *)(param_2 + 0x44) = uStack_360;
  *(undefined4 *)(param_2 + 0x46) = uStack_35c;
  *(char *)(param_2 + 0xc) = (char)uStack_3a0;
  if ((uStack_34c != 1) && ((char)uStack_3a0 == '\b')) {
    *(undefined1 *)(param_2 + 0xc) = 0;
    if ((uStack_34c & 1) != 0) {
      *(undefined1 *)(param_2 + 0xc) = 8;
    }
    if ((uStack_34c & 2) != 0) {
      *(byte *)(param_2 + 0xc) = *(byte *)(param_2 + 0xc) | 4;
    }
    if ((uStack_34c & 0x80) != 0) {
      *(byte *)(param_2 + 0xc) = *(byte *)(param_2 + 0xc) | 0x20;
    }
    if ((uStack_34c & 0x40) != 0) {
      *(byte *)(param_2 + 0xc) = *(byte *)(param_2 + 0xc) | 0x40;
    }
  }
  *param_1 = uStack_a0;
  return uVar8;
}

