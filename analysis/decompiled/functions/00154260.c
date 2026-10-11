/* Ghidra pseudocode. PS2 address: 00154260. Not validated source. */

void FUN_00154260(int param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  int *piVar15;
  undefined8 *puVar16;
  int aiStack_e0 [8];
  int aiStack_c0 [8];
  
  piVar4 = aiStack_e0;
  piVar15 = aiStack_e0;
  piVar11 = aiStack_c0;
  iVar12 = 7;
  piVar7 = piVar11;
  do {
    *piVar4 = 4;
    iVar12 = iVar12 + -1;
    *piVar7 = 0;
    piVar4 = piVar4 + 1;
    piVar7 = piVar7 + 1;
  } while (-1 < iVar12);
  iVar12 = param_1 + 0x1528;
  puVar10 = (undefined4 *)(param_1 + 0x1520);
  iVar13 = 3;
  do {
    cVar1 = *(char *)(puVar10 + -6);
    if (-1 < (long)cVar1) {
      iVar2 = *(int *)*puVar10;
      if ((long)cVar1 < (long)aiStack_e0[iVar2]) {
        aiStack_e0[iVar2] = (int)cVar1;
        piVar11[iVar2] = iVar12;
      }
    }
    iVar12 = iVar12 + 0x50;
    iVar13 = iVar13 + -1;
    puVar10 = puVar10 + 0x14;
  } while (-1 < iVar13);
  puVar14 = (undefined8 *)(param_1 + 0xc);
  iVar12 = 0;
  puVar16 = puVar14;
  do {
    if (*piVar15 != 4) {
      lVar5 = FUN_0023b924(puVar14,0x18);
      lVar6 = FUN_0023b924(*piVar11,0x18);
      if (lVar5 != lVar6) {
        puVar3 = (undefined8 *)*piVar11;
        uVar8 = puVar3[1];
        uVar9 = puVar3[2];
        *puVar16 = *puVar3;
        puVar16[1] = uVar8;
        puVar16[2] = uVar9;
        *(undefined4 *)(param_1 + 0x1664) = 1;
      }
    }
    iVar12 = iVar12 + 1;
    puVar16 = puVar16 + 3;
    puVar14 = puVar14 + 3;
    piVar11 = piVar11 + 1;
    piVar15 = piVar15 + 1;
  } while (iVar12 < 8);
  return;
}

