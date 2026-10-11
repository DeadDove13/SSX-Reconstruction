/* Ghidra pseudocode. PS2 address: 001890d0. Not validated source. */

void FUN_001890d0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  
  if (0 < *(int *)(param_1 + 0x54)) {
    uVar20 = *(undefined4 *)(param_1 + 0xa0);
    uVar1 = *(undefined4 *)(param_1 + 0xa4);
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    uVar13 = *(undefined4 *)(param_1 + 0xb0);
    uVar15 = *(undefined4 *)(param_1 + 0xb4);
    uVar16 = *(undefined4 *)(param_1 + 0xb8);
    uVar17 = *(undefined4 *)(param_1 + 0xbc);
    uVar3 = *(undefined8 *)(param_1 + 0xc0);
    uVar6 = *(undefined8 *)(param_1 + 200);
    uVar7 = *(undefined8 *)(param_1 + 0xd0);
    uVar8 = *(undefined8 *)(param_1 + 0xd8);
    uVar9 = *(undefined8 *)(param_1 + 0xe0);
    uVar10 = *(undefined8 *)(param_1 + 0xe8);
    uVar11 = *(undefined8 *)(param_1 + 0xf0);
    uVar12 = *(undefined8 *)(param_1 + 0xf8);
    uVar26 = *(undefined4 *)(param_1 + 0x100);
    uVar25 = *(undefined4 *)(param_1 + 0x104);
    iVar18 = *(int *)(param_1 + 0x54) * 0x80 + param_1;
    uVar27 = *(undefined4 *)(param_1 + 0x108);
    uVar19 = *(undefined8 *)(iVar18 + 0x98);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(iVar18 + 0x90);
    *(undefined8 *)(param_1 + 0x98) = uVar19;
    uVar21 = *(undefined4 *)(iVar18 + 0xa4);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar18 + 0xa0);
    *(undefined4 *)(param_1 + 0xa4) = uVar21;
    uVar21 = *(undefined4 *)(iVar18 + 0xb4);
    uVar22 = *(undefined4 *)(iVar18 + 0xb8);
    uVar23 = *(undefined4 *)(iVar18 + 0xbc);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(iVar18 + 0xb0);
    *(undefined4 *)(param_1 + 0xb4) = uVar21;
    *(undefined4 *)(param_1 + 0xb8) = uVar22;
    *(undefined4 *)(param_1 + 0xbc) = uVar23;
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(iVar18 + 0xc0);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(iVar18 + 200);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(iVar18 + 0xd0);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(iVar18 + 0xd8);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(iVar18 + 0xe0);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(iVar18 + 0xe8);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(iVar18 + 0xf0);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(iVar18 + 0xf8);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(iVar18 + 0x100);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(iVar18 + 0x104);
    iVar14 = *(int *)(param_1 + 0x54) * 0x80 + param_1;
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(iVar18 + 0x108);
    *(undefined8 *)(iVar14 + 0x90) = uVar4;
    *(undefined8 *)(iVar14 + 0x98) = uVar5;
    *(undefined4 *)(iVar14 + 0xa0) = uVar20;
    *(undefined4 *)(iVar14 + 0xa4) = uVar1;
    *(undefined4 *)(iVar14 + 0xb0) = uVar13;
    *(undefined4 *)(iVar14 + 0xb4) = uVar15;
    *(undefined4 *)(iVar14 + 0xb8) = uVar16;
    *(undefined4 *)(iVar14 + 0xbc) = uVar17;
    *(undefined8 *)(iVar14 + 0xc0) = uVar3;
    *(undefined8 *)(iVar14 + 200) = uVar6;
    *(undefined8 *)(iVar14 + 0xd0) = uVar7;
    *(undefined8 *)(iVar14 + 0xd8) = uVar8;
    *(undefined8 *)(iVar14 + 0xe0) = uVar9;
    *(undefined8 *)(iVar14 + 0xe8) = uVar10;
    *(undefined8 *)(iVar14 + 0xf0) = uVar11;
    *(undefined8 *)(iVar14 + 0xf8) = uVar12;
    *(undefined4 *)(iVar14 + 0x100) = uVar26;
    *(undefined4 *)(iVar14 + 0x104) = uVar25;
    *(undefined4 *)(iVar14 + 0x108) = uVar27;
  }
  iVar14 = 0;
  if (0 < *(int *)(param_1 + 0x298)) {
    iVar18 = *(int *)(param_1 + 0x14);
    iVar24 = param_1;
    while( true ) {
      uVar20 = *(undefined4 *)(iVar18 + 200);
      if (iVar14 < *(int *)(iVar18 + 0x80)) {
        puVar2 = *(undefined4 **)(iVar18 + iVar14 * 4 + 0x90);
        uVar20 = 0;
        if (puVar2 != (undefined4 *)0x0) {
          uVar20 = *puVar2;
        }
      }
      else if (iVar14 < *(int *)(iVar18 + 0x8c)) {
        uVar20 = *(undefined4 *)(iVar18 + ((*(int *)(iVar18 + 0x8c) - iVar14) + -1) * 4 + 200);
      }
      uVar1 = *(undefined4 *)(iVar24 + 0xa0);
      *(int *)(*(int *)(iVar24 + 0xa4) + 0x24) = iVar14;
      iVar24 = iVar24 + 0x80;
      FUN_0015bbe0(uVar1,uVar20);
      iVar14 = iVar14 + 1;
      if (*(int *)(param_1 + 0x298) <= iVar14) break;
      iVar18 = *(int *)(param_1 + 0x14);
    }
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}

