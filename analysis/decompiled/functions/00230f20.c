/* Ghidra pseudocode. PS2 address: 00230f20. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0023108c) */

undefined4 FUN_00230f20(undefined8 param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  
  iVar11 = (int)param_1;
  *(undefined4 *)(iVar11 + 0x1c) = param_4;
  iVar12 = *(int *)(iVar11 + 0x34);
  if (iVar12 < param_2) {
    iVar8 = 0;
    if (iVar12 < 1) {
      iVar5 = *(int *)(iVar11 + 0x2c);
      iVar9 = *(int *)(iVar11 + 0x28);
      iVar4 = *(int *)(iVar11 + 0x20);
      pcVar10 = *(code **)(iVar11 + 0x38);
    }
    else {
      iVar5 = *(int *)(iVar11 + 0x2c);
      iVar9 = *(int *)(iVar11 + 0x28);
      iVar4 = *(int *)(iVar11 + 0x20);
      pcVar10 = *(code **)(iVar11 + 0x38);
      do {
        iVar6 = iVar8 * 2;
        puVar2 = *(undefined2 **)(iVar11 + 0x1c);
        iVar8 = iVar8 + 1;
        uVar1 = *(undefined2 *)(iVar11 + 0x44 + iVar6);
        *(undefined2 **)(iVar11 + 0x1c) = puVar2 + 1;
        *puVar2 = uVar1;
      } while (iVar8 < iVar12);
    }
    param_2 = param_2 - iVar12;
    iVar8 = (iVar5 - iVar9) + -0x1b;
    iVar12 = param_2;
    if (iVar8 <= param_2) {
      iVar12 = iVar8;
    }
    if (iVar12 < 0) {
      iVar12 = 0;
    }
    *(int *)(iVar11 + 0x10) = iVar12;
    *(int *)(iVar11 + 0x18) = iVar4 + (iVar9 * 0xf) / 0x1c;
    (*pcVar10)(iVar11 + 0x10);
    iVar5 = 0;
    iVar8 = *(int *)(iVar11 + 0x10);
    iVar4 = (*(int *)(iVar11 + 0x28) + iVar12) - iVar8;
    *(int *)(iVar11 + 0x28) = iVar4;
    if (iVar8 < 0) {
      iVar9 = *(int *)(iVar11 + 0x1c);
      iVar6 = *(int *)(iVar11 + 0x2c);
      do {
        iVar3 = iVar8 * 2;
        iVar7 = iVar5 * 2;
        iVar8 = iVar8 + 1;
        iVar5 = iVar5 + 1;
        *(undefined2 *)(iVar11 + 0x44 + iVar7) = *(undefined2 *)(iVar3 + iVar9);
      } while (iVar8 < 0);
      iVar8 = iVar5 * 2;
    }
    else {
      iVar9 = *(int *)(iVar11 + 0x1c);
      iVar6 = *(int *)(iVar11 + 0x2c);
      iVar8 = 0;
    }
    *(int *)(iVar11 + 0x34) = iVar5;
    *(int *)(iVar11 + 0x1c) = iVar9 - iVar8;
    if (iVar6 - iVar4 < 0x1c) {
      *(undefined2 *)(iVar11 + 0x3c) = *(undefined2 *)(iVar11 + 0x14);
      *(undefined2 *)(iVar11 + 0x3e) = *(undefined2 *)(iVar11 + 0x16);
      *(code **)(iVar11 + 4) = FUN_00230ca8;
      if (0 < param_2 - iVar12) {
        FUN_00230ca8(param_1,param_2 - iVar12,param_3,iVar9 - iVar8,*(undefined2 *)(iVar11 + 0xe));
      }
    }
  }
  else {
    iVar8 = 0;
    if (0 < param_2) {
      do {
        iVar4 = iVar8 * 2;
        puVar2 = *(undefined2 **)(iVar11 + 0x1c);
        iVar8 = iVar8 + 1;
        uVar1 = *(undefined2 *)(iVar11 + 0x44 + iVar4);
        *(undefined2 **)(iVar11 + 0x1c) = puVar2 + 1;
        *puVar2 = uVar1;
      } while (iVar8 < param_2);
    }
    iVar4 = 0;
    for (; iVar8 < iVar12; iVar8 = iVar8 + 1) {
      iVar5 = iVar4 * 2;
      iVar4 = iVar4 + 1;
      *(undefined2 *)(iVar11 + 0x44 + iVar5) = *(undefined2 *)(iVar11 + 0x44 + iVar8 * 2);
    }
    *(int *)(iVar11 + 0x34) = iVar4;
  }
  return 1;
}

