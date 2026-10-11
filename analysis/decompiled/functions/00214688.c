/* Ghidra pseudocode. PS2 address: 00214688. Not validated source. */

void FUN_00214688(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint auStack_840 [260];
  int aiStack_430 [260];
  
  uVar11 = 1;
  auStack_840[0] = 0;
  uVar8 = 0;
  iVar13 = (int)param_1;
  puVar3 = (uint *)(iVar13 + 0x100);
  puVar6 = (uint *)(aiStack_430 + 1);
  puVar5 = auStack_840 + 1;
  do {
    puVar3[0x919] = 99;
    if (*puVar3 != 0) {
      *puVar5 = *puVar3;
      uVar11 = uVar11 + 1;
      *puVar6 = uVar8;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar8 = uVar8 + 1;
    puVar3 = puVar3 + 1;
  } while (uVar8 < 0x100);
  *(uint *)(iVar13 + 0x2dc4) = uVar11 - 1;
  iVar1 = 0x100;
  if (uVar11 < 3) {
    FUN_00214618(param_1,aiStack_430[uVar11 - 1],1);
  }
  else {
    do {
      iVar14 = iVar1;
      uVar9 = uVar11 - 1;
      uVar11 = uVar11 - 2;
      uVar8 = auStack_840[uVar9];
      puVar3 = auStack_840 + uVar11;
      uVar4 = uVar11;
      uVar10 = uVar9;
      uVar7 = uVar8;
      uVar12 = *puVar3;
      if (uVar8 < *puVar3) {
        uVar7 = *puVar3;
        uVar4 = uVar9;
        uVar10 = uVar11;
        uVar12 = uVar8;
      }
      uVar8 = uVar4;
      uVar2 = uVar12;
      if (uVar11 != 0) {
        while( true ) {
          uVar12 = uVar2;
          uVar4 = uVar8;
          puVar3 = puVar3 + -1;
          uVar11 = uVar11 - 1;
          if (uVar7 < *puVar3) {
            puVar5 = auStack_840 + uVar11;
            do {
              puVar5 = puVar5 + -1;
              puVar3 = puVar3 + -1;
              uVar11 = uVar11 - 1;
            } while (uVar7 < *puVar5);
          }
          if (uVar11 == 0) break;
          uVar8 = uVar4;
          uVar10 = uVar11;
          uVar2 = uVar12;
          uVar7 = *puVar3;
          if (*puVar3 <= uVar12) {
            uVar8 = uVar11;
            uVar10 = uVar4;
            uVar2 = *puVar3;
            uVar7 = uVar12;
          }
        }
      }
      *(int *)(iVar13 + 0x1524 + iVar14 * 4) = aiStack_430[uVar10];
      *(int *)(iVar13 + 0x1d44 + iVar14 * 4) = aiStack_430[uVar4];
      auStack_840[uVar10] = uVar7 + uVar12;
      aiStack_430[uVar10] = iVar14;
      auStack_840[uVar4] = auStack_840[uVar9];
      aiStack_430[uVar4] = aiStack_430[uVar9];
      iVar1 = iVar14 + 1;
      uVar11 = uVar9;
    } while (2 < uVar9);
    FUN_00214618(param_1,iVar14,0);
  }
  return;
}

