/* Ghidra pseudocode. PS2 address: 00135af8. Not validated source. */

void FUN_00135af8(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar1 = *param_2;
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((int)param_2 + 0xc);
  *(int *)(param_1 + 0x80) = (int)uVar1;
  *(int *)(param_1 + 0x84) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  fVar9 = *(float *)(param_1 + 0xc);
  fVar18 = *(float *)(param_1 + 0x80);
  fVar16 = *(float *)(param_1 + 0x10);
  fVar17 = *(float *)(param_1 + 0x84);
  fVar19 = *(float *)(param_1 + 0x88);
  fVar11 = *(float *)(param_1 + 0x14);
  fVar13 = *(float *)(param_1 + 0x18);
  fVar6 = *(float *)(param_1 + 0x1c);
  fVar4 = *(float *)(param_1 + 0x20);
  fVar10 = *(float *)(param_1 + 0x24);
  fVar15 = fVar16 * fVar4 - fVar11 * fVar6;
  fVar8 = *(float *)(param_1 + 0x28);
  fVar5 = *(float *)(param_1 + 0x2c);
  fVar12 = fVar8 * fVar11 - fVar5 * fVar16;
  fVar7 = fVar6 * fVar5 - fVar4 * fVar8;
  fVar14 = 1.0 / (fVar9 * fVar7 + fVar13 * fVar12 + fVar10 * fVar15);
  *(float *)(param_1 + 0x60) =
       fVar7 * fVar14 * fVar18 + (fVar10 * fVar4 - fVar5 * fVar13) * fVar14 * fVar17 +
       (fVar13 * fVar8 - fVar6 * fVar10) * fVar14 * fVar19;
  *(float *)(param_1 + 100) =
       fVar12 * fVar14 * fVar18 + (fVar9 * fVar5 - fVar11 * fVar10) * fVar14 * fVar17 +
       (fVar10 * fVar16 - fVar8 * fVar9) * fVar14 * fVar19;
  *(float *)(param_1 + 0x68) =
       fVar15 * fVar14 * fVar18 + (fVar13 * fVar11 - fVar4 * fVar9) * fVar14 * fVar17 +
       (fVar9 * fVar6 - fVar16 * fVar13) * fVar14 * fVar19;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}

