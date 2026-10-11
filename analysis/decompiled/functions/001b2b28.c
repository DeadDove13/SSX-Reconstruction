/* Ghidra pseudocode. PS2 address: 001b2b28. Not validated source. */

void FUN_001b2b28(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 in_hi;
  uint uVar14;
  ulong uVar13;
  int aiStack_180 [9];
  int aiStack_15c [35];
  undefined1 auStack_d0 [16];
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  undefined1 *puStack_b4;
  int *piStack_b0;
  
  uVar14 = (uint)((ulong)in_hi >> 0x20);
  FUN_001ab4f8();
  iVar12 = (int)param_1;
  *(undefined4 *)(iVar12 + 0x48) = 0;
  uVar3 = DAT_002852fc;
  *(undefined4 *)(iVar12 + 0x38) = 0;
  *(undefined4 *)(iVar12 + 0x34) = 0;
  uVar3 = FUN_00234e80(uVar3,0x70);
  puStack_b4 = auStack_d0;
  *(undefined4 *)(iVar12 + 0x10) = uVar3;
  *(undefined4 *)(iVar12 + 0xc) = 0;
  puVar7 = &DAT_0028b1fc;
  iVar4 = 0xf;
  do {
    *puVar7 = 0xffffffff;
    iVar4 = iVar4 + -1;
    puVar7 = puVar7 + -1;
  } while (-1 < iVar4);
  iStack_bc = iVar12 + 0x4c;
  iStack_b8 = iVar12 + 0x5c;
  puVar7 = &DAT_0028b1bc;
  iVar4 = 7;
  do {
    *puVar7 = 0xffffffff;
    iVar4 = iVar4 + -1;
    puVar7 = puVar7 + -1;
  } while (-1 < iVar4);
  FUN_0019a830(0x28f670,0x2c50d0);
  uVar3 = FUN_00152ec8(0x27a598);
  puVar2 = puStack_b4;
  iVar11 = DAT_002c4694;
  piVar9 = &DAT_0027e9a8;
  *(undefined4 *)(iVar12 + 0x44) = uVar3;
  iVar6 = 0;
  iVar4 = 0;
  uVar13 = (ulong)uVar14 << 0x20;
  while( true ) {
    iVar5 = iVar6 * 4;
    *(undefined4 *)(puStack_b4 + iVar5) = 0;
    puVar7 = (undefined4 *)((int)aiStack_15c + iVar4 + 4);
    *(undefined4 *)(iStack_bc + iVar5) = 0;
    *(undefined4 *)(iStack_b8 + iVar5) = 0;
    iVar4 = 10;
    iVar6 = iVar6 + 1;
    do {
      *puVar7 = 0;
      iVar4 = iVar4 + -1;
      puVar7 = puVar7 + -1;
    } while (-1 < iVar4);
    if (3 < iVar6) break;
    iVar4 = iVar6 * 0x2c;
    uVar13 = CONCAT44((int)(uVar13 >> 0x20),iVar4 >> 0x1f);
  }
  if (0 < iVar11) {
    do {
      iVar4 = *piVar9;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      if (piVar9[1] == 10) {
        aiStack_15c[iVar4 * 0xb + 1] = piVar9[2];
      }
      else {
        aiStack_180[iVar4 * 0xb + piVar9[1]] = aiStack_180[iVar4 * 0xb + piVar9[1]] + 1;
      }
      uVar13 = CONCAT44((int)(uVar13 >> 0x20),iVar4 * 0x2c >> 0x1f);
      piVar9 = piVar9 + 3;
      iVar11 = iVar11 + -1;
      *(undefined4 *)(puVar2 + iVar4 * 4) = 1;
    } while (iVar11 != 0);
  }
  *(undefined4 *)(iVar12 + 8) = 0;
  *(undefined4 *)(iVar12 + 4) = 0;
  iStack_c0 = 0;
  piStack_b0 = aiStack_180;
  iVar4 = 0;
  iVar11 = 0;
  iVar6 = 0;
  do {
    iVar5 = 0;
    if (*(int *)(puStack_b4 + iVar11 * 4) != 0) {
      iStack_c0 = iStack_c0 + 1;
      iVar8 = *(int *)((int)aiStack_180 + iVar6 + 0x14);
      uVar3 = DAT_0028aed4;
      if ((1 < iVar8) || (uVar3 = DAT_0028af04, 0 < iVar8)) {
        iVar5 = 1;
        FUN_0019a8a8(&DAT_0028b270 + iVar4 * 0x800,uVar3);
      }
      iVar8 = *(int *)((int)aiStack_180 + iVar6 + 0x10);
      uVar3 = DAT_0028aed0;
      if ((1 < iVar8) || (uVar3 = DAT_0028af00, 0 < iVar8)) {
        iVar8 = iVar5 * 0x80;
        iVar5 = iVar5 + 1;
        FUN_0019a8a8(&DAT_0028b270 + iVar4 * 0x800 + iVar8,uVar3);
      }
      iVar8 = *(int *)((int)aiStack_180 + iVar6 + 0xc);
      iVar10 = iVar5 + 1;
      uVar3 = DAT_0028aecc;
      if ((1 < iVar8) || (uVar3 = DAT_0028aefc, 0 < iVar8)) {
        iVar8 = iVar10 * 0x80;
        iVar10 = iVar5 + 2;
        FUN_0019a8a8(&DAT_0028b270 + iVar4 * 0x800 + iVar8,uVar3);
      }
      iVar5 = *(int *)((int)aiStack_180 + iVar6 + 8);
      uVar3 = DAT_0028aec8;
      if ((1 < iVar5) || (uVar3 = DAT_0028aef8, 0 < iVar5)) {
        iVar5 = iVar10 * 0x80;
        iVar10 = iVar10 + 1;
        FUN_0019a8a8(&DAT_0028b270 + iVar4 * 0x800 + iVar5,uVar3);
      }
      iVar5 = *(int *)((int)aiStack_180 + iVar6 + 4);
      uVar3 = DAT_0028aec4;
      if ((1 < iVar5) || (uVar3 = DAT_0028aef4, 0 < iVar5)) {
        iVar5 = iVar10 * 0x80;
        iVar10 = iVar10 + 1;
        FUN_0019a8a8(&DAT_0028b270 + iVar4 * 0x800 + iVar5,uVar3);
      }
      iVar5 = iVar10 * 0x80;
      uVar3 = DAT_0028aec0;
      if ((1 < *piStack_b0) || (uVar3 = DAT_0028aef0, 0 < *piStack_b0)) {
        iVar10 = iVar10 + 1;
        FUN_0019a8a8(&DAT_0028b270 + iVar4 * 0x800 + iVar5,uVar3);
      }
      uVar3 = DAT_0028aee4;
      if ((1 < *(int *)((int)aiStack_15c + iVar6)) ||
         (uVar3 = DAT_0028af14, 0 < *(int *)((int)aiStack_15c + iVar6))) {
        iVar5 = iVar10 * 0x80;
        iVar10 = iVar10 + 1;
        FUN_0019a8a8(&DAT_0028b270 + iVar4 * 0x800 + iVar5,uVar3);
      }
      iVar5 = *(int *)((int)aiStack_15c + iVar6 + 4);
      uVar3 = DAT_0028aee8;
      if ((1 < iVar5) || (uVar3 = DAT_0028af18, 0 < iVar5)) {
        iVar5 = iVar10 * 0x80;
        iVar10 = iVar10 + 1;
        FUN_0019a8a8(&DAT_0028b270 + iVar4 * 0x800 + iVar5,uVar3);
      }
      *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 1;
      uVar3 = FUN_00155370(0x27a598,iVar11);
      iVar5 = *(int *)((int)aiStack_180 + iVar6 + 0x14);
      *(undefined4 *)(iStack_bc + iVar4 * 4) = uVar3;
      if ((iVar5 < 1) && (*(int *)((int)aiStack_180 + iVar6 + 0x10) < 1)) {
        iVar5 = *(int *)(iVar12 + 4);
      }
      else {
        iVar5 = FUN_00154c60(0x27a598,iVar11);
        lVar1 = (uVar13 | 0x27c380) + (long)(iVar5 * 0x3c);
        uVar13 = (ulong)(int)((ulong)lVar1 >> 0x20);
        *(undefined4 *)(iStack_b8 + iVar4 * 4) = *(undefined4 *)((int)lVar1 + 4);
        iVar5 = *(int *)(iVar12 + 4);
      }
      if (iVar5 < iVar10) {
        *(int *)(iVar12 + 4) = iVar10;
      }
      iVar4 = iVar4 + 1;
    }
    iVar11 = iVar11 + 1;
    iVar6 = iVar6 + 0x2c;
    piStack_b0 = piStack_b0 + 0xb;
  } while (iVar11 < 4);
  if (iStack_c0 < 2) {
    DAT_0028b248 = 180.0;
  }
  else {
    *(undefined4 *)(iVar12 + 0x48) = 1;
    DAT_0028b248 = 60.0;
  }
  FUN_001ab478(0x43110000,param_1,iStack_c0);
  DAT_0028b184 = 1;
  DAT_0028b160 = 0;
  DAT_0028b164 = 0;
  DAT_0028b180 = 1;
  DAT_0028b24c = DAT_0028b248 + 280.0;
  DAT_0028b250 = DAT_0028b248 + 280.0 + 280.0;
  return;
}

