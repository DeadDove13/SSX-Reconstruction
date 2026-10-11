/* Ghidra pseudocode. PS2 address: 001d6548. Not validated source. */

void FUN_001d6548(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int aiStack_40 [4];
  
  iVar7 = (int)param_1;
  if (*(int *)(iVar7 + 0x540) != 0) {
    FUN_00103710();
    *(undefined4 *)(iVar7 + 0x540) = 0;
  }
  *(float *)(iVar7 + 0x2c) = (float)param_2;
  lVar3 = FUN_0023a448(0x2b7770,0xe00,0);
  if (lVar3 != 0) {
    FUN_0023bbd0(lVar3,0xffffffffdeadc0ed,0xe00);
  }
  aiStack_40[0] = (int)lVar3;
  *(int *)(iVar7 + 0x540) = aiStack_40[0];
  *(int *)(iVar7 + 0x548) = aiStack_40[0] + 0x220;
  *(int *)(iVar7 + 0x544) = aiStack_40[0];
  *(int *)(iVar7 + 0x54c) = aiStack_40[0] + 0x580;
  *(int *)(iVar7 + 0x550) = aiStack_40[0] + 0xaa0;
  FUN_001d6820(param_1,aiStack_40);
  iVar4 = 0;
  iVar2 = *(int *)(iVar7 + 0x548);
  fVar9 = *(float *)(iVar7 + 0x2c) * 0.0078125 * DAT_002c3648;
  fVar10 = 0.0;
  do {
    fVar8 = 0.0;
    iVar6 = 3;
    puVar1 = (undefined4 *)(aiStack_40[0] + 0xc);
    iVar5 = aiStack_40[0];
    do {
      puVar1[-3] = fVar10;
      aiStack_40[0] = iVar5 + 0x10;
      *(float *)(iVar5 + 4) = fVar8;
      iVar6 = iVar6 + -1;
      *(undefined4 *)(iVar5 + 8) = 0x3f800000;
      fVar8 = fVar8 + fVar9;
      *puVar1 = 0x3f800000;
      puVar1 = puVar1 + 4;
      iVar5 = aiStack_40[0];
    } while (-1 < iVar6);
    iVar4 = iVar4 + 1;
    fVar10 = fVar10 + fVar9;
  } while (iVar4 < 4);
  aiStack_40[0] = iVar2;
  FUN_001d6820(param_1,aiStack_40);
  iVar4 = 0;
  iVar2 = *(int *)(iVar7 + 0x54c);
  fVar9 = *(float *)(iVar7 + 0x2c) * 0.0078125 * DAT_002c364c;
  fVar10 = 0.0;
  do {
    fVar8 = 0.0;
    iVar6 = 5;
    puVar1 = (undefined4 *)(aiStack_40[0] + 0xc);
    iVar5 = aiStack_40[0];
    do {
      puVar1[-3] = fVar10;
      aiStack_40[0] = iVar5 + 0x10;
      *(float *)(iVar5 + 4) = fVar8;
      iVar6 = iVar6 + -1;
      *(undefined4 *)(iVar5 + 8) = 0x3f800000;
      fVar8 = fVar8 + fVar9;
      *puVar1 = 0x3f800000;
      puVar1 = puVar1 + 4;
      iVar5 = aiStack_40[0];
    } while (-1 < iVar6);
    iVar4 = iVar4 + 1;
    fVar10 = fVar10 + fVar9;
  } while (iVar4 < 6);
  aiStack_40[0] = iVar2;
  FUN_001d6820(param_1,aiStack_40);
  iVar4 = 0;
  iVar2 = *(int *)(iVar7 + 0x550);
  fVar9 = *(float *)(iVar7 + 0x2c) * 0.0078125 * DAT_002c3650;
  fVar10 = 0.0;
  do {
    fVar8 = 0.0;
    iVar6 = 7;
    puVar1 = (undefined4 *)(aiStack_40[0] + 0xc);
    iVar5 = aiStack_40[0];
    do {
      puVar1[-3] = fVar10;
      aiStack_40[0] = iVar5 + 0x10;
      *(float *)(iVar5 + 4) = fVar8;
      iVar6 = iVar6 + -1;
      *(undefined4 *)(iVar5 + 8) = 0x3f800000;
      fVar8 = fVar8 + fVar9;
      *puVar1 = 0x3f800000;
      puVar1 = puVar1 + 4;
      iVar5 = aiStack_40[0];
    } while (-1 < iVar6);
    iVar4 = iVar4 + 1;
    fVar10 = fVar10 + fVar9;
  } while (iVar4 < 8);
  aiStack_40[0] = iVar2;
  FUN_001d6820(param_1,aiStack_40);
  iVar2 = 0;
  fVar10 = *(float *)(iVar7 + 0x2c) * 0.0078125 * DAT_002c3654;
  fVar9 = fVar10;
  do {
    iVar2 = iVar2 + 1;
    iVar4 = 5;
    puVar1 = (undefined4 *)(aiStack_40[0] + 0xc);
    fVar8 = fVar10;
    iVar7 = aiStack_40[0];
    do {
      puVar1[-3] = fVar9;
      aiStack_40[0] = iVar7 + 0x10;
      *(float *)(iVar7 + 4) = fVar8;
      iVar4 = iVar4 + -1;
      *(undefined4 *)(iVar7 + 8) = 0x3f800000;
      fVar8 = fVar8 + fVar10;
      *puVar1 = 0x3f800000;
      puVar1 = puVar1 + 4;
      iVar7 = aiStack_40[0];
    } while (-1 < iVar4);
    fVar9 = fVar9 + fVar10;
  } while (iVar2 < 6);
  return;
}

