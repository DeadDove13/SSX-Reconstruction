/* Ghidra pseudocode. PS2 address: 00100e90. Not validated source. */

void FUN_00100e90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  int *piVar13;
  int aiStack_d0 [8];
  int aiStack_b0 [8];
  
  piVar13 = &DAT_0027bc0c;
  if (0 < *(int *)(param_1 + 0x8c)) {
    iVar3 = 0;
    iVar12 = 0;
    do {
      iVar4 = 50000;
      iVar1 = *(int *)(param_1 + iVar3 + 200);
      puVar11 = (undefined8 *)(iVar1 + 0x83d0);
      if ((*(int *)(iVar1 + 0x348) < 0) && (-1 < *(char *)(*(int *)(iVar1 + 0x394) + 0x54))) {
        *(undefined4 *)(iVar1 + 0x348) = 0;
      }
      else {
        iVar4 = FUN_0010b140(iVar1);
      }
      iVar8 = **(int **)(iVar1 + 0x394);
      *(int *)(&DAT_0027bc24 + iVar8 * 4) = iVar4;
      puVar5 = (undefined8 *)(&DAT_0027bc3c + iVar8 * 0x74);
      if ((((uint)puVar11 | (uint)puVar5) & 7) == 0) {
        do {
          uVar9 = puVar11[1];
          uVar10 = puVar11[2];
          uVar6 = puVar11[3];
          *puVar5 = *puVar11;
          puVar5[1] = uVar9;
          puVar5[2] = uVar10;
          puVar5[3] = uVar6;
          puVar11 = puVar11 + 4;
          puVar5 = puVar5 + 4;
        } while (puVar11 != (undefined8 *)(iVar1 + 0x8430));
      }
      else {
        do {
          uVar9 = puVar11[1];
          uVar10 = puVar11[2];
          uVar6 = puVar11[3];
          *puVar5 = *puVar11;
          puVar5[1] = uVar9;
          puVar5[2] = uVar10;
          puVar5[3] = uVar6;
          puVar11 = puVar11 + 4;
          puVar5 = puVar5 + 4;
        } while (puVar11 != (undefined8 *)(iVar1 + 0x8430));
      }
      iVar8 = iVar12 + 1;
      uVar6 = puVar11[1];
      uVar2 = *(undefined4 *)(puVar11 + 2);
      *puVar5 = *puVar11;
      puVar5[1] = uVar6;
      *(undefined4 *)(puVar5 + 2) = uVar2;
      *(int *)((int)aiStack_d0 + iVar3) = iVar12;
      if (DAT_0027ba88 == 3) {
LAB_00101078:
        *(undefined4 *)((int)aiStack_b0 + iVar3) = *(undefined4 *)(iVar1 + 0x8440);
      }
      else if (DAT_0027ba88 < 4) {
        if (DAT_0027ba88 == 0) {
          *(int *)((int)aiStack_b0 + iVar3) = *(int *)(iVar1 + 0x8414) - *(int *)(iVar1 + 0x8418);
        }
        else {
LAB_00101094:
          *(int *)((int)aiStack_b0 + iVar3) = -iVar4;
        }
      }
      else {
        if (DAT_0027ba88 == 5) goto LAB_00101078;
        if (DAT_0027ba88 != 6) goto LAB_00101094;
        *(int *)((int)aiStack_b0 + iVar3) = iVar12;
      }
      iVar3 = iVar8 * 4;
      iVar12 = iVar8;
    } while (iVar8 < *(int *)(param_1 + 0x8c));
  }
  iVar12 = 0;
  FUN_0023bed8(*(undefined4 *)(param_1 + 0x8c),aiStack_b0,aiStack_d0);
  if (0 < *(int *)(param_1 + 0x8c)) {
    piVar7 = (int *)(param_1 + 200);
    do {
      iVar3 = *piVar7;
      iVar12 = iVar12 + 1;
      piVar7 = piVar7 + 1;
      *piVar13 = aiStack_d0[**(int **)(iVar3 + 0x394)];
      piVar13 = piVar13 + 1;
    } while (iVar12 < *(int *)(param_1 + 0x8c));
  }
  return;
}

