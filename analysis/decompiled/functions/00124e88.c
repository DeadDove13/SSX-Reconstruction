/* Ghidra pseudocode. PS2 address: 00124e88. Not validated source. */

void FUN_00124e88(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
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
  
  fVar1 = *(float *)(param_1 + 0x74);
  fVar5 = *(float *)(param_1 + 0x78);
  fVar6 = *(float *)(param_1 + 0x7c);
  fVar9 = fVar5 + fVar5;
  fVar8 = *(float *)(param_1 + 0x70);
  fVar2 = fVar6 + fVar6;
  fVar12 = fVar8 * (fVar1 + fVar1);
  fVar7 = 1.0 - fVar1 * (fVar1 + fVar1);
  fVar10 = fVar1 * fVar2 - fVar8 * fVar9;
  fVar3 = fVar1 * fVar9 + fVar8 * fVar2;
  fVar15 = fVar7 - fVar5 * fVar9;
  fVar13 = fVar5 * fVar2 + fVar12;
  fVar4 = (1.0 - fVar5 * fVar9) - fVar6 * fVar2;
  fVar7 = fVar7 - fVar6 * fVar2;
  fVar6 = fVar1 * fVar9 - fVar8 * fVar2;
  fVar11 = fVar1 * fVar2 + fVar8 * fVar9;
  fVar12 = fVar5 * fVar2 - fVar12;
  fVar1 = *(float *)(param_1 + 0x100);
  fVar16 = fVar4 * fVar1 + fVar6 * *(float *)(param_1 + 0x104) +
           fVar11 * *(float *)(param_1 + 0x108);
  fVar17 = fVar4 * *(float *)(param_1 + 0x10c) + fVar6 * *(float *)(param_1 + 0x110) +
           fVar11 * *(float *)(param_1 + 0x114);
  fVar2 = fVar4 * *(float *)(param_1 + 0x118) + fVar6 * *(float *)(param_1 + 0x11c) +
          fVar11 * *(float *)(param_1 + 0x120);
  fVar18 = fVar3 * fVar1 + fVar7 * *(float *)(param_1 + 0x104) +
           fVar12 * *(float *)(param_1 + 0x108);
  fVar5 = fVar3 * *(float *)(param_1 + 0x10c) + fVar7 * *(float *)(param_1 + 0x110) +
          fVar12 * *(float *)(param_1 + 0x114);
  fVar9 = fVar3 * *(float *)(param_1 + 0x118) + fVar7 * *(float *)(param_1 + 0x11c) +
          fVar12 * *(float *)(param_1 + 0x120);
  fVar14 = fVar10 * fVar1 + fVar13 * *(float *)(param_1 + 0x104) +
           fVar15 * *(float *)(param_1 + 0x108);
  fVar1 = fVar10 * *(float *)(param_1 + 0x10c) + fVar13 * *(float *)(param_1 + 0x110) +
          fVar15 * *(float *)(param_1 + 0x114);
  fVar8 = fVar10 * *(float *)(param_1 + 0x118) + fVar13 * *(float *)(param_1 + 0x11c) +
          fVar15 * *(float *)(param_1 + 0x120);
  *(ulong *)(param_1 + 0x3c) =
       CONCAT44(fVar18 * fVar4 + fVar5 * fVar6 + fVar9 * fVar11,
                fVar16 * fVar4 + fVar17 * fVar6 + fVar2 * fVar11);
  *(ulong *)(param_1 + 0x44) =
       CONCAT44(fVar16 * fVar3 + fVar17 * fVar7 + fVar2 * fVar12,
                fVar14 * fVar4 + fVar1 * fVar6 + fVar8 * fVar11);
  *(ulong *)(param_1 + 0x4c) =
       CONCAT44(fVar14 * fVar3 + fVar1 * fVar7 + fVar8 * fVar12,
                fVar18 * fVar3 + fVar5 * fVar7 + fVar9 * fVar12);
  *(ulong *)(param_1 + 0x54) =
       CONCAT44(fVar18 * fVar10 + fVar5 * fVar13 + fVar9 * fVar15,
                fVar16 * fVar10 + fVar17 * fVar13 + fVar2 * fVar15);
  *(float *)(param_1 + 0x5c) = fVar14 * fVar10 + fVar1 * fVar13 + fVar8 * fVar15;
  return;
}

