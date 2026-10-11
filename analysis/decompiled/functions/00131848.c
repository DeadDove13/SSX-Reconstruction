/* Ghidra pseudocode. PS2 address: 00131848. Not validated source. */

void FUN_00131848(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = (int)param_1;
  iVar1 = *(int *)(iVar4 + 0xc0) + -1;
  *(int *)(iVar4 + 0xc0) = iVar1;
  piVar3 = (int *)(iVar1 * 0x30 + iVar4);
  FUN_001319b0(piVar3[1],piVar3[2],piVar3[3],piVar3[4],param_1);
  if (*piVar3 != 0) {
    iVar7 = piVar3[6];
    iVar8 = piVar3[10];
    iVar5 = piVar3[8];
    iVar1 = piVar3[0xb];
    iVar6 = piVar3[5];
    puVar2 = (undefined4 *)(*(int *)(iVar4 + 0xc0) * 0x30 + iVar4);
    puVar2[9] = piVar3[9];
    puVar2[8] = iVar5;
    puVar2[0xb] = iVar1;
    puVar2[5] = iVar6;
    puVar2[6] = iVar7;
    puVar2[10] = iVar8;
    *puVar2 = 1;
    FUN_001c59c0(puVar2[1],puVar2[2],puVar2[3],puVar2[4],puVar2[5],puVar2[6],puVar2[8],puVar2[9],
                 0x2913b0);
    return;
  }
  FUN_00131958(piVar3[7],piVar3[5],piVar3[6],param_1);
  return;
}

