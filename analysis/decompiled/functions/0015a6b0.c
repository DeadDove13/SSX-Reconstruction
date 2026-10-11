/* Ghidra pseudocode. PS2 address: 0015a6b0. Not validated source. */

undefined4 FUN_0015a6b0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  
  iVar11 = (int)param_1;
  iVar6 = *(int *)(iVar11 + 0x14);
  uVar12 = 1;
  iVar4 = FUN_0015a570(param_1,iVar6);
  uVar3 = DAT_002c2490;
  uVar2 = DAT_002c248c;
  uVar1 = DAT_002c2488;
  piVar10 = *(int **)(iVar11 + 0xc);
  iVar9 = 0;
  do {
    iVar5 = iVar4 * 6 + *piVar10;
    (&DAT_0027ec04)[iVar5 * 2] = iVar9;
    if ((int)(&DAT_0027ec00)[iVar5 * 2] < 0) {
      if (iVar9 == 0) {
        *(undefined4 *)(iVar11 + 0x18) = uVar1;
      }
      else if (iVar9 == 1) {
        *(undefined4 *)(iVar11 + 0x18) = uVar2;
      }
      else if (iVar9 == 2) {
        *(undefined4 *)(iVar11 + 0x18) = uVar3;
      }
      else {
        uVar12 = 0;
      }
    }
    iVar9 = iVar9 + 1;
    piVar10 = piVar10 + 1;
  } while (iVar9 < 6);
  if (iVar6 == 0x1b) {
    FUN_0025a770(0x27ec00,0xc,8,0x1593a0);
    FUN_0025a770(0x27ec60,0xc,8,0x1593a0);
    puVar8 = &DAT_0027ec30;
    iVar6 = 5;
    do {
      uVar7 = *puVar8;
      iVar6 = iVar6 + -1;
      *puVar8 = puVar8[6];
      puVar8[6] = uVar7;
      puVar8 = puVar8 + 1;
    } while (-1 < iVar6);
  }
  else if (iVar6 == 0x1d) {
    FUN_0025a770(0x27ec00,0xc,8,0x1593a0);
  }
  else if (iVar6 == 0x1e) {
    FUN_0025a770(0x27ec00,6,8,0x1593a0);
    uVar12 = 0;
  }
  return uVar12;
}

