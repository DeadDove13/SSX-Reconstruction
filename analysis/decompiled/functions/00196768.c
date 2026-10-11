/* Ghidra pseudocode. PS2 address: 00196768. Not validated source. */

void FUN_00196768(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  
  iVar12 = (int)param_1;
  piVar10 = *(int **)(iVar12 + 0x395c);
  iVar11 = 0;
  if (piVar10 != (int *)0x0) {
    iVar1 = piVar10[4];
    piVar9 = (int *)(iVar12 + 0x394c + iVar1 * 4);
    piVar10[1] = piVar10[1] + (*(int *)(iVar12 + 0x2c) - *(int *)(iVar12 + 0x3960));
    uVar2 = *(uint *)(iVar12 + 0x2c);
    uVar3 = *(uint *)(*piVar10 + 0x38);
    if (0 < *piVar9) {
      puVar13 = (undefined4 *)(iVar12 + iVar1 * 4 + 0x392c);
      piVar10 = (int *)(iVar1 * 0x40 + iVar12 + 0x3e68);
      do {
        piVar8 = (int *)*piVar10;
        piVar4 = *(int **)(iVar12 + 0x395c);
        if (piVar8 == piVar4) {
          iVar7 = *piVar9;
        }
        else {
          uVar5 = *(uint *)(*piVar8 + 0x38);
          if (uVar5 < uVar3) {
            iVar7 = *piVar9;
          }
          else {
            if (uVar5 < uVar2) {
              iVar7 = piVar8[1] - (uVar2 - uVar5);
              if (iVar7 < 1) {
                uVar6 = *puVar13;
              }
              else {
                piVar4[1] = piVar4[1] + iVar7;
                uVar6 = *puVar13;
                piVar8 = (int *)*piVar10;
              }
              iVar11 = iVar11 + -1;
              FUN_00198598(uVar6,piVar8);
              FUN_001987d0(*piVar10);
              iVar7 = *piVar10;
              piVar10 = piVar10 + -1;
              FUN_001963e0(param_1,iVar1,iVar7);
            }
            iVar7 = *piVar9;
          }
        }
        iVar11 = iVar11 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar11 < iVar7);
    }
  }
  *(undefined4 *)(iVar12 + 0x395c) = 0;
  return;
}

