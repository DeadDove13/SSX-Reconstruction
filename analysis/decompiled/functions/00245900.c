/* Ghidra pseudocode. PS2 address: 00245900. Not validated source. */

void FUN_00245900(undefined4 *param_1,undefined4 *param_2,undefined1 (*param_3) [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  auVar12 = _lqc2(*param_3);
  auVar13 = _lqc2(*(undefined1 (*) [16])(param_2 + 0xc));
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  uVar8 = param_2[8];
  uVar9 = param_2[9];
  uVar10 = param_2[10];
  uVar11 = param_2[0xb];
  auVar12 = _vadd(auVar13,auVar12);
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  param_1[8] = uVar8;
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  param_1[0xb] = uVar11;
  auVar12 = _sqc2(auVar12);
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar12;
  return;
}

