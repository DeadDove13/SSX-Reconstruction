/* Ghidra pseudocode. PS2 address: 00198460. Not validated source. */

uint FUN_00198460(undefined8 param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  
  iVar10 = (int)param_1;
  piVar1 = *(int **)(iVar10 + 8);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    uVar3 = piVar1[4];
    uVar2 = (uint)(uVar3 < 4);
    if (0.0 < (float)piVar1[2]) {
      piVar6 = (int *)(iVar10 + 0xc);
      iVar8 = 0;
      iVar7 = 0;
      piVar4 = piVar6;
      piVar5 = piVar6;
      do {
        if (*piVar5 == 0) {
          *piVar4 = (int)piVar1;
          goto LAB_00198578;
        }
        if (*(float *)(*piVar5 + 8) < *(float *)(piVar6[iVar8] + 8)) {
          iVar8 = iVar7;
        }
        iVar7 = iVar7 + 1;
        piVar4 = piVar4 + 1;
        uVar2 = (uint)(iVar7 < 3);
        piVar5 = piVar5 + 1;
      } while (uVar2 != 0);
      puVar9 = (uint *)(piVar6 + iVar8);
      if (*(float *)(*puVar9 + 8) < (float)piVar1[2]) {
        FUN_001987d0();
        FUN_001963e0(*(undefined4 *)(DAT_002859e4 + 0x38),uVar3,*puVar9);
        uVar2 = *(uint *)(iVar10 + 8);
        *puVar9 = uVar2;
LAB_00198578:
        *(undefined4 *)(iVar10 + 8) = 0;
        return uVar2;
      }
    }
  }
  uVar3 = FUN_001982b8(param_1);
  return uVar3;
}

