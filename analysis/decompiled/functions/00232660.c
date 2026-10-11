/* Ghidra pseudocode. PS2 address: 00232660. Not validated source. */

void FUN_00232660(int param_1,float *param_2,float *param_3,float *param_4)

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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar2 = *param_2;
  fVar1 = param_2[1];
  fVar4 = param_2[2];
  fVar3 = param_2[3];
  fVar6 = param_2[4];
  fVar5 = param_2[5];
  fVar8 = param_2[6];
  fVar7 = param_2[7];
  fVar10 = param_2[8];
  fVar9 = param_2[9];
  fVar12 = param_2[10];
  fVar11 = param_2[0xb];
  fVar14 = *param_3;
  fVar13 = param_3[1];
  fVar16 = param_3[2];
  fVar15 = param_3[3];
  fVar18 = param_3[4];
  fVar17 = param_3[5];
  fVar20 = param_3[6];
  fVar19 = param_3[7];
  fVar22 = param_3[8];
  fVar21 = param_3[9];
  fVar24 = param_3[10];
  fVar23 = param_3[0xb];
  do {
    param_1 = param_1 + -1;
    fVar23 = fVar11 * fVar23 +
             fVar12 * fVar24 +
             fVar9 * fVar21 +
             fVar10 * fVar22 +
             fVar7 * fVar19 +
             fVar8 * fVar20 +
             fVar5 * fVar17 +
             fVar6 * fVar18 +
             fVar3 * fVar15 + fVar4 * fVar16 + fVar1 * fVar13 + fVar2 * fVar14 + *param_4 + 0.0 +
             0.0;
    *param_4 = fVar23;
    fVar24 = fVar2 * fVar23 +
             fVar11 * fVar24 +
             fVar12 * fVar21 +
             fVar9 * fVar22 +
             fVar10 * fVar19 +
             fVar7 * fVar20 +
             fVar8 * fVar17 +
             fVar5 * fVar18 +
             fVar6 * fVar15 + fVar3 * fVar16 + fVar4 * fVar13 + fVar1 * fVar14 + param_4[1] + 0.0 +
             0.0;
    param_4[1] = fVar24;
    fVar21 = fVar2 * fVar24 +
             fVar11 * fVar21 +
             fVar12 * fVar22 +
             fVar9 * fVar19 +
             fVar10 * fVar20 +
             fVar7 * fVar17 +
             fVar8 * fVar18 +
             fVar5 * fVar15 +
             fVar6 * fVar16 + fVar3 * fVar13 + fVar4 * fVar14 + fVar1 * fVar23 + param_4[2] + 0.0 +
             0.0;
    param_4[2] = fVar21;
    fVar22 = fVar2 * fVar21 +
             fVar11 * fVar22 +
             fVar12 * fVar19 +
             fVar9 * fVar20 +
             fVar10 * fVar17 +
             fVar7 * fVar18 +
             fVar8 * fVar15 +
             fVar5 * fVar16 +
             fVar6 * fVar13 + fVar3 * fVar14 + fVar4 * fVar23 + fVar1 * fVar24 + param_4[3] + 0.0 +
             0.0;
    param_4[3] = fVar22;
    fVar19 = fVar2 * fVar22 +
             fVar11 * fVar19 +
             fVar12 * fVar20 +
             fVar9 * fVar17 +
             fVar10 * fVar18 +
             fVar7 * fVar15 +
             fVar8 * fVar16 +
             fVar5 * fVar13 +
             fVar6 * fVar14 + fVar3 * fVar23 + fVar4 * fVar24 + fVar1 * fVar21 + param_4[4] + 0.0 +
             0.0;
    param_4[4] = fVar19;
    fVar20 = fVar2 * fVar19 +
             fVar11 * fVar20 +
             fVar12 * fVar17 +
             fVar9 * fVar18 +
             fVar10 * fVar15 +
             fVar7 * fVar16 +
             fVar8 * fVar13 +
             fVar5 * fVar14 +
             fVar6 * fVar23 + fVar3 * fVar24 + fVar4 * fVar21 + fVar1 * fVar22 + param_4[5] + 0.0 +
             0.0;
    param_4[5] = fVar20;
    fVar17 = fVar2 * fVar20 +
             fVar11 * fVar17 +
             fVar12 * fVar18 +
             fVar9 * fVar15 +
             fVar10 * fVar16 +
             fVar7 * fVar13 +
             fVar8 * fVar14 +
             fVar5 * fVar23 +
             fVar6 * fVar24 + fVar3 * fVar21 + fVar4 * fVar22 + fVar1 * fVar19 + param_4[6] + 0.0 +
             0.0;
    param_4[6] = fVar17;
    fVar18 = fVar2 * fVar17 +
             fVar11 * fVar18 +
             fVar12 * fVar15 +
             fVar9 * fVar16 +
             fVar10 * fVar13 +
             fVar7 * fVar14 +
             fVar8 * fVar23 +
             fVar5 * fVar24 +
             fVar6 * fVar21 + fVar3 * fVar22 + fVar4 * fVar19 + fVar1 * fVar20 + param_4[7] + 0.0 +
             0.0;
    param_4[7] = fVar18;
    fVar15 = fVar2 * fVar18 +
             fVar11 * fVar15 +
             fVar12 * fVar16 +
             fVar9 * fVar13 +
             fVar10 * fVar14 +
             fVar7 * fVar23 +
             fVar8 * fVar24 +
             fVar5 * fVar21 +
             fVar6 * fVar22 + fVar3 * fVar19 + fVar4 * fVar20 + fVar1 * fVar17 + param_4[8] + 0.0 +
             0.0;
    param_4[8] = fVar15;
    fVar16 = fVar2 * fVar15 +
             fVar11 * fVar16 +
             fVar12 * fVar13 +
             fVar9 * fVar14 +
             fVar10 * fVar23 +
             fVar7 * fVar24 +
             fVar8 * fVar21 +
             fVar5 * fVar22 +
             fVar6 * fVar19 + fVar3 * fVar20 + fVar4 * fVar17 + fVar1 * fVar18 + param_4[9] + 0.0 +
             0.0;
    param_4[9] = fVar16;
    fVar13 = fVar2 * fVar16 +
             fVar11 * fVar13 +
             fVar12 * fVar14 +
             fVar9 * fVar23 +
             fVar10 * fVar24 +
             fVar7 * fVar21 +
             fVar8 * fVar22 +
             fVar5 * fVar19 +
             fVar6 * fVar20 + fVar3 * fVar17 + fVar4 * fVar18 + fVar1 * fVar15 + param_4[10] + 0.0 +
             0.0;
    param_4[10] = fVar13;
    fVar14 = fVar2 * fVar13 +
             fVar11 * fVar14 +
             fVar12 * fVar23 +
             fVar9 * fVar24 +
             fVar10 * fVar21 +
             fVar7 * fVar22 +
             fVar8 * fVar19 +
             fVar5 * fVar20 +
             fVar6 * fVar17 + fVar3 * fVar18 + fVar4 * fVar15 + fVar1 * fVar16 + param_4[0xb] + 0.0
             + 0.0;
    param_4[0xb] = fVar14;
    param_4 = param_4 + 0xc;
  } while (0 < param_1);
  *param_3 = fVar14;
  param_3[1] = fVar13;
  param_3[2] = fVar16;
  param_3[3] = fVar15;
  param_3[4] = fVar18;
  param_3[5] = fVar17;
  param_3[6] = fVar20;
  param_3[7] = fVar19;
  param_3[8] = fVar22;
  param_3[9] = fVar21;
  param_3[10] = fVar24;
  param_3[0xb] = fVar23;
  return;
}

