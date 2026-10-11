/* Ghidra pseudocode. PS2 address: 00189438. Not validated source. */

void FUN_00189438(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  
  *(undefined4 *)(param_1 + 0x54) = 0;
  if ((1 < *(int *)(param_1 + 0x298)) && (lVar15 = FUN_00189350(), 0 < lVar15)) {
    uVar1 = *(undefined4 *)(param_1 + 0x90);
    *(int *)(param_1 + 0x54) = (int)lVar15;
    uVar2 = *(undefined4 *)(param_1 + 0xa0);
    uVar3 = *(undefined4 *)(param_1 + 0xa4);
    uVar6 = *(undefined8 *)(param_1 + 0x98);
    uVar4 = *(undefined8 *)(param_1 + 0xb0);
    uVar17 = *(undefined4 *)(param_1 + 0xb8);
    uVar18 = *(undefined4 *)(param_1 + 0xbc);
    uVar5 = *(undefined8 *)(param_1 + 0xc0);
    uVar7 = *(undefined8 *)(param_1 + 200);
    uVar8 = *(undefined8 *)(param_1 + 0xd0);
    uVar9 = *(undefined8 *)(param_1 + 0xd8);
    uVar10 = *(undefined8 *)(param_1 + 0xe0);
    uVar11 = *(undefined8 *)(param_1 + 0xe8);
    uVar12 = *(undefined8 *)(param_1 + 0xf0);
    uVar13 = *(undefined8 *)(param_1 + 0xf8);
    uVar24 = *(undefined4 *)(param_1 + 0x100);
    uVar23 = *(undefined4 *)(param_1 + 0x104);
    iVar16 = *(int *)(param_1 + 0x54) * 0x80 + param_1;
    uVar25 = *(undefined4 *)(param_1 + 0x108);
    uVar19 = *(undefined8 *)(iVar16 + 0x98);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(iVar16 + 0x90);
    *(undefined8 *)(param_1 + 0x98) = uVar19;
    uVar20 = *(undefined4 *)(iVar16 + 0xa4);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar16 + 0xa0);
    *(undefined4 *)(param_1 + 0xa4) = uVar20;
    uVar20 = *(undefined4 *)(iVar16 + 0xb4);
    uVar21 = *(undefined4 *)(iVar16 + 0xb8);
    uVar22 = *(undefined4 *)(iVar16 + 0xbc);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(iVar16 + 0xb0);
    *(undefined4 *)(param_1 + 0xb4) = uVar20;
    *(undefined4 *)(param_1 + 0xb8) = uVar21;
    *(undefined4 *)(param_1 + 0xbc) = uVar22;
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(iVar16 + 0xc0);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(iVar16 + 200);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(iVar16 + 0xd0);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(iVar16 + 0xd8);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(iVar16 + 0xe0);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(iVar16 + 0xe8);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(iVar16 + 0xf0);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(iVar16 + 0xf8);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(iVar16 + 0x100);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(iVar16 + 0x104);
    iVar14 = *(int *)(param_1 + 0x54) * 0x80 + param_1;
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(iVar16 + 0x108);
    *(ulong *)(iVar14 + 0x90) = CONCAT44(*(undefined4 *)(param_1 + 0x94),uVar1);
    *(undefined8 *)(iVar14 + 0x98) = uVar6;
    *(undefined4 *)(iVar14 + 0xa0) = uVar2;
    *(undefined4 *)(iVar14 + 0xa4) = uVar3;
    *(int *)(iVar14 + 0xb0) = (int)uVar4;
    *(int *)(iVar14 + 0xb4) = (int)((ulong)uVar4 >> 0x20);
    *(undefined4 *)(iVar14 + 0xb8) = uVar17;
    *(undefined4 *)(iVar14 + 0xbc) = uVar18;
    *(undefined8 *)(iVar14 + 0xc0) = uVar5;
    *(undefined8 *)(iVar14 + 200) = uVar7;
    *(undefined8 *)(iVar14 + 0xd0) = uVar8;
    *(undefined8 *)(iVar14 + 0xd8) = uVar9;
    *(undefined8 *)(iVar14 + 0xe0) = uVar10;
    *(undefined8 *)(iVar14 + 0xe8) = uVar11;
    *(undefined8 *)(iVar14 + 0xf0) = uVar12;
    *(undefined8 *)(iVar14 + 0xf8) = uVar13;
    *(undefined4 *)(iVar14 + 0x100) = uVar24;
    *(undefined4 *)(iVar14 + 0x104) = uVar23;
    *(undefined4 *)(iVar14 + 0x108) = uVar25;
  }
  return;
}

