/* Ghidra pseudocode. PS2 address: 0015a5a0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0015a5e4) */

void FUN_0015a5a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int aiStack_80 [8];
  
  piVar9 = aiStack_80;
  piVar6 = aiStack_80;
  piVar3 = *(int **)(param_1 + 8);
  iVar8 = 0;
  if (0 < *piVar3) {
    do {
      iVar2 = FUN_002109b0();
      uVar4 = FUN_002109b0();
      iVar5 = -(iVar2 % 0x1194);
      if ((uVar4 & 1) == 0) {
        iVar5 = iVar2 % 0x1194;
      }
      piVar3 = *(int **)(param_1 + 8);
      *(int *)(*(int *)(param_1 + 0xc) + iVar8 * 4 + 0x18) = iVar5 + 30000;
      *piVar9 = iVar8;
      iVar8 = iVar8 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar8 < *piVar3);
    piVar3 = *(int **)(param_1 + 8);
  }
  iVar8 = 0;
  FUN_0023bed8(*piVar3,*(int *)(param_1 + 0xc) + 0x18,aiStack_80);
  piVar3 = *(int **)(param_1 + 8);
  if (0 < *piVar3) {
    puVar7 = *(undefined4 **)(param_1 + 0xc);
    do {
      uVar1 = *piVar6;
      iVar8 = iVar8 + 1;
      piVar6 = piVar6 + 1;
      *puVar7 = uVar1;
      puVar7 = puVar7 + 1;
    } while (iVar8 < *piVar3);
  }
  return;
}

