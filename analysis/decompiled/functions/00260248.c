/* Ghidra pseudocode. PS2 address: 00260248. Not validated source. */

void FUN_00260248(undefined8 param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined *puVar9;
  int iVar10;
  
  if (param_2 == 0) {
    return;
  }
  FUN_0025a6d0();
  iVar10 = (int)param_2;
  puVar9 = (undefined *)(iVar10 + -8);
  uVar5 = *(uint *)(iVar10 + -4);
  uVar8 = uVar5 & 0xfffffffe;
  puVar4 = puVar9 + uVar8;
  uVar6 = *(uint *)(puVar4 + 4) & 0xfffffffc;
  if (puVar4 == PTR_DAT_002a6620) {
    uVar8 = uVar8 + uVar6;
    PTR_DAT_002a6620 = puVar9;
    if ((uVar5 & 1) == 0) {
      PTR_DAT_002a6620 = puVar9 + -*(int *)(iVar10 + -8);
      uVar8 = uVar8 + *(int *)(iVar10 + -8);
      iVar10 = *(int *)(PTR_DAT_002a6620 + 0xc);
      iVar1 = *(int *)(PTR_DAT_002a6620 + 8);
      *(int *)(iVar1 + 0xc) = iVar10;
      *(int *)(iVar10 + 8) = iVar1;
    }
    bVar2 = DAT_002a6a20 <= uVar8;
    *(uint *)(PTR_DAT_002a6620 + 4) = uVar8 | 1;
    if (bVar2) {
      FUN_00260568(param_1,DAT_002a6a28);
    }
    FUN_0025a6d8(param_1);
    return;
  }
  *(uint *)(puVar4 + 4) = uVar6;
  bVar2 = false;
  if ((uVar5 & 1) == 0) {
    puVar9 = puVar9 + -*(int *)(iVar10 + -8);
    ppuVar3 = *(undefined ***)(puVar9 + 8);
    uVar8 = uVar8 + *(int *)(iVar10 + -8);
    if (ppuVar3 == &PTR_DAT_002a6620) {
      bVar2 = true;
    }
    else {
      puVar7 = *(undefined **)(puVar9 + 0xc);
      ppuVar3[3] = puVar7;
      *(undefined ***)(puVar7 + 8) = ppuVar3;
    }
  }
  if ((*(uint *)(puVar4 + uVar6 + 4) & 1) == 0) {
    uVar8 = uVar8 + uVar6;
    if (bVar2) {
      ppuVar3 = *(undefined ***)(puVar4 + 8);
      puVar4 = *(undefined **)(puVar4 + 0xc);
    }
    else {
      ppuVar3 = *(undefined ***)(puVar4 + 8);
      if (ppuVar3 == &PTR_DAT_002a6620) {
        bVar2 = true;
        PTR_PTR_002a6628 = puVar9;
        PTR_PTR_002a662c = puVar9;
        *(undefined ***)(puVar9 + 8) = &PTR_DAT_002a6620;
        *(undefined ***)(puVar9 + 0xc) = &PTR_DAT_002a6620;
        goto LAB_002603b8;
      }
      puVar4 = *(undefined **)(puVar4 + 0xc);
    }
    ppuVar3[3] = puVar4;
    *(undefined ***)(puVar4 + 8) = ppuVar3;
  }
LAB_002603b8:
  *(uint *)(puVar9 + 4) = uVar8 | 1;
  *(uint *)(puVar9 + uVar8) = uVar8;
  if (!bVar2) {
    uVar5 = uVar8 >> 3;
    if (uVar8 < 0x200) {
      puVar4 = (&PTR_DAT_002a6620)[uVar5 * 2];
      *(undefined **)(puVar9 + 0xc) = &DAT_002a6618 + uVar5 * 8;
      *(undefined **)(puVar9 + 8) = puVar4;
      DAT_002a661c = DAT_002a661c | (uint)(1L << (long)((int)uVar5 >> 2));
      (&PTR_DAT_002a6620)[uVar5 * 2] = puVar9;
      *(undefined **)(puVar4 + 0xc) = puVar9;
    }
    else {
      uVar5 = uVar8 >> 9;
      if (uVar5 == 0) {
        uVar6 = uVar8 >> 3;
      }
      else if (uVar5 < 5) {
        uVar6 = (uVar8 >> 6) + 0x38;
      }
      else {
        uVar6 = uVar5 + 0x5b;
        if (0x14 < uVar5) {
          if (uVar5 < 0x55) {
            uVar6 = (uVar8 >> 0xc) + 0x6e;
          }
          else if (uVar5 < 0x155) {
            uVar6 = (uVar8 >> 0xf) + 0x77;
          }
          else if (uVar5 < 0x555) {
            uVar6 = (uVar8 >> 0x12) + 0x7c;
          }
          else {
            uVar6 = 0x7e;
          }
        }
      }
      puVar7 = &DAT_002a6618 + uVar6 * 8;
      puVar4 = (&PTR_DAT_002a6620)[uVar6 * 2];
      if (puVar4 == puVar7) {
        DAT_002a661c = DAT_002a661c | (uint)(1L << (long)((int)uVar6 >> 2));
      }
      else if (uVar8 < (*(uint *)(puVar4 + 4) & 0xfffffffc)) {
        for (puVar4 = *(undefined **)(puVar4 + 8); puVar4 != puVar7;
            puVar4 = *(undefined **)(puVar4 + 8)) {
          if ((*(uint *)(puVar4 + 4) & 0xfffffffc) <= uVar8) {
            puVar7 = *(undefined **)(puVar4 + 0xc);
            goto LAB_00260528;
          }
        }
        puVar7 = *(undefined **)(puVar4 + 0xc);
      }
      else {
        puVar7 = *(undefined **)(puVar4 + 0xc);
      }
LAB_00260528:
      *(undefined **)(puVar9 + 0xc) = puVar7;
      *(undefined **)(puVar9 + 8) = puVar4;
      *(undefined **)(puVar7 + 8) = puVar9;
      *(undefined **)(puVar4 + 0xc) = puVar9;
    }
  }
  FUN_0025a6d8(param_1);
  return;
}

