/* Ghidra pseudocode. PS2 address: 0019cc48. Not validated source. */

undefined8
FUN_0019cc48(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
            long param_6,long param_7)

{
  undefined2 uVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  iVar7 = (int)param_1;
  FUN_00122128(iVar7 + 0x30);
  fVar8 = *(float *)(param_5 + 0xc);
  uVar1 = *(undefined2 *)(param_5 + 8);
  iVar4 = *(int *)(*(int *)(param_4 + 0xcc) * 8 + DAT_00299ce0);
  *(undefined **)(iVar7 + 0x38) = &DAT_002b5598;
  *(undefined2 *)(iVar7 + 8) = uVar1;
  *(undefined4 *)(iVar7 + 100) = 0;
  if (fVar8 < 0.0) {
    fVar8 = 1.0;
  }
  *(float *)(iVar7 + 0x28) = fVar8;
  fVar9 = *(float *)(param_5 + 0x10);
  if (fVar9 < 0.0) {
    fVar9 = *(float *)(iVar4 + 0xc);
  }
  *(float *)(iVar7 + 0x2c) = fVar9;
  *(int *)(iVar7 + 0x18) = (int)(*(float *)(param_5 + 0x1c) * 60.0);
  if (*(int *)(param_5 + 0x20) != 0) {
    fVar8 = (float)FUN_00210a00();
  }
  *(float *)(iVar7 + 0x24) = fVar8;
  if (*(float *)(param_5 + 0x18) == 0.0) {
    fVar8 = *(float *)(param_5 + 0x14);
  }
  else {
    fVar8 = (float)FUN_00210a68(*(undefined4 *)(param_5 + 0x14));
  }
  *(float *)(iVar7 + 0x20) = fVar8 * DAT_002c2ae4 * 30.0;
  if (*(short *)(param_5 + 10) == 4) {
    *(float *)(iVar7 + 0x20) = -*(float *)(iVar7 + 0x20);
    iVar4 = *(int *)(iVar7 + 0x58);
  }
  else {
    iVar4 = *(int *)(iVar7 + 0x58);
  }
  *(uint *)(iVar4 + 0xe8) = *(uint *)(iVar4 + 0xe8) & 0xfffffffd | 4;
  iVar6 = 0;
  piVar2 = *(int **)(*(int *)(iVar4 + 0xcc) * 8 + DAT_00299ce0);
  *(undefined4 *)(iVar7 + 0x5c) = 0;
  piVar5 = piVar2 + 9;
  if (0 < *piVar2) {
    do {
      if (*(int *)(*piVar5 + 0x1c) == 0) {
        iVar4 = *piVar2;
      }
      else {
        *(int *)(iVar7 + 0x5c) = *(int *)(iVar7 + 0x5c) + 1;
        iVar4 = *piVar2;
      }
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar6 < iVar4);
  }
  iVar4 = *(int *)(iVar7 + 0x5c);
  if (iVar4 == 0) {
    *(undefined4 *)(iVar7 + 0x60) = 0;
  }
  else {
    iVar6 = iVar4 * 0x70 + 0x10;
    lVar3 = FUN_002107c8(0x298590,iVar6,0x50000000,0x2b5280,0,0);
    if (lVar3 != 0) {
      FUN_0023bbd0(lVar3,0xffffffffdeadc0ed,iVar6);
    }
    piVar5 = (int *)lVar3 + 4;
    *(int *)lVar3 = iVar4;
    iVar6 = iVar4 + -1;
    piVar2 = piVar5;
    if (iVar4 != 0) {
      do {
        iVar6 = iVar6 + -1;
        FUN_001d7df0(piVar2);
        piVar2 = piVar2 + 0x1c;
      } while (iVar6 != -1);
    }
    *(int **)(iVar7 + 0x60) = piVar5;
  }
  if (param_7 != 0) {
    FUN_0019d570(param_1);
  }
  *(undefined4 *)(iVar7 + 0x14) = 0;
  *(undefined4 *)(iVar7 + 0xc) = 1;
  *(undefined4 *)(iVar7 + 0x10) = 0;
  if (param_6 == 0) {
    *(undefined4 *)(iVar7 + 0x1c) = 0;
  }
  else {
    *(undefined4 *)(iVar7 + 0x1c) = *(undefined4 *)(iVar7 + 0x18);
  }
  return param_1;
}

