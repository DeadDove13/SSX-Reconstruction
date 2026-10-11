/* Ghidra pseudocode. PS2 address: 00177e90. Not validated source. */

undefined8 FUN_00177e90(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  
  iVar7 = (int)param_1;
  puVar10 = (undefined4 *)(iVar7 + 0xb78);
  iVar8 = 3;
  FUN_0016c3d0();
  *(undefined **)(iVar7 + 4) = &DAT_002b1218;
  *(undefined4 *)(iVar7 + 0xb64) = 0xffffffff;
  *(undefined4 *)(iVar7 + 0xb38) = 3;
  *(undefined4 *)(iVar7 + 0xb50) = param_2;
  *(undefined4 *)(iVar7 + 0xb5c) = 0;
  *(undefined4 *)(iVar7 + 0xb60) = 0;
  do {
    lVar4 = FUN_0023a448(0x2b1140,0x38,0x10);
    if (lVar4 != 0) {
      FUN_0023bbd0(lVar4,0xffffffffdeadc0de,0x38);
    }
    puVar6 = (undefined4 *)lVar4;
    puVar6[9] = &DAT_002b1028;
    puVar6[1] = 0;
    *puVar6 = &DAT_002c4a08;
    puVar6[2] = 1;
    puVar6[3] = 0;
    iVar8 = iVar8 + -1;
    puVar6[4] = 1;
    puVar6[5] = 0;
    puVar6[6] = 1;
    puVar6[7] = 1;
    puVar6[8] = 0;
    FUN_00177718(lVar4);
    *puVar10 = puVar6;
    puVar6[6] = 2;
    puVar10 = puVar10 + 1;
    puVar6[9] = &DAT_002b0fb8;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = &DAT_002c4a10;
    puVar6[0xd] = 0;
  } while (-1 < iVar8);
  *(undefined4 *)(iVar7 + 0xb54) = 0;
  if (DAT_0027bc04 == 0) {
    if (*(int *)(*(int *)(iVar7 + 0xb50) + 0x470) == 0) {
      puVar10 = &DAT_00283778;
    }
    else {
      puVar10 = &DAT_00283790;
    }
  }
  else {
    if (DAT_0027bc04 != 1) {
      *(undefined4 *)(iVar7 + 0xb70) = 0;
      goto LAB_00177ffc;
    }
    puVar10 = &DAT_002837a0;
  }
  *(undefined4 **)(iVar7 + 0xb70) = puVar10;
LAB_00177ffc:
  piVar1 = *(int **)(iVar7 + 0xb70);
  *(undefined4 *)(iVar7 + 0xb6c) = 0;
  *(undefined4 *)(iVar7 + 0xb68) = 0xffffffff;
  iVar8 = DAT_0027ba88;
  iVar9 = 0;
  if (*piVar1 != -1) {
    iVar3 = *piVar1;
    piVar5 = piVar1;
    do {
      if (iVar3 == iVar8) {
        *(int *)(iVar7 + 0xb68) = iVar9;
      }
      piVar5 = piVar5 + 1;
      *(int *)(iVar7 + 0xb6c) = *(int *)(iVar7 + 0xb6c) + 1;
      iVar3 = *piVar5;
      iVar9 = iVar9 + 1;
    } while (iVar3 != -1);
  }
  iVar8 = *(int *)(iVar7 + 0xb6c);
  if ((*(int *)(iVar7 + 0xb68) < 0) && (iVar8 != 0)) {
    *(undefined4 *)(iVar7 + 0xb68) = 0;
    DAT_0027ba88 = *piVar1;
  }
  uVar2 = DAT_002c4a00;
  if (iVar8 == 0) {
    *(undefined4 *)(iVar7 + 0xb74) = 0xfffffff6;
    FUN_001783c8(param_1,2);
  }
  else {
    *(int *)(iVar7 + 0xb74) = -10 - (iVar8 * 0x12 >> 1);
    FUN_001783c8(param_1,uVar2);
  }
  return param_1;
}

