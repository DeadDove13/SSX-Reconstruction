/* Ghidra pseudocode. PS2 address: 00230a30. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00230b8c) */

undefined4 FUN_00230a30(int param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = *(int *)(param_1 + 0x24);
  iVar6 = *(int *)(param_1 + 0x28);
  if (iVar6 < iVar9) {
    iVar10 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x1c) = param_4;
    if (iVar10 < param_2) {
      iVar5 = 0;
      if (iVar10 < 1) {
        iVar7 = *(int *)(param_1 + 0x20);
        pcVar3 = *(code **)(param_1 + 0x68);
      }
      else {
        iVar7 = *(int *)(param_1 + 0x20);
        pcVar3 = *(code **)(param_1 + 0x68);
        do {
          iVar8 = iVar5 * 2;
          puVar2 = *(undefined2 **)(param_1 + 0x1c);
          iVar5 = iVar5 + 1;
          uVar1 = *(undefined2 *)(param_1 + 0x30 + iVar8);
          *(undefined2 **)(param_1 + 0x1c) = puVar2 + 1;
          *puVar2 = uVar1;
        } while (iVar5 < iVar10);
      }
      iVar9 = iVar9 - iVar6;
      param_2 = param_2 - iVar10;
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      iVar10 = param_2;
      if (iVar9 <= param_2) {
        iVar10 = iVar9;
      }
      *(int *)(param_1 + 0x10) = iVar10;
      *(int *)(param_1 + 0x18) = iVar7 + (iVar6 * 0xf) / 0x1c;
      (*pcVar3)(param_1 + 0x10);
      iVar6 = *(int *)(param_1 + 0x10);
      iVar5 = (*(int *)(param_1 + 0x28) + iVar10) - iVar6;
      *(int *)(param_1 + 0x28) = iVar5;
      if (iVar9 == iVar10) {
        iVar9 = (param_2 - iVar10) - (iVar5 - *(int *)(param_1 + 0x24));
        if (iVar9 < 1) {
          return 1;
        }
        do {
          puVar2 = *(undefined2 **)(param_1 + 0x1c);
          iVar9 = iVar9 + -1;
          *puVar2 = 0;
          *(undefined2 **)(param_1 + 0x1c) = puVar2 + 1;
        } while (0 < iVar9);
        return 1;
      }
      iVar9 = 0;
      if (iVar6 < 0) {
        iVar10 = *(int *)(param_1 + 0x1c);
        do {
          iVar5 = iVar6 * 2;
          iVar7 = iVar9 * 2;
          iVar6 = iVar6 + 1;
          iVar9 = iVar9 + 1;
          *(undefined2 *)(param_1 + 0x30 + iVar7) = *(undefined2 *)(iVar5 + iVar10);
        } while (iVar6 < 0);
      }
      *(int *)(param_1 + 0x2c) = iVar9;
    }
    else {
      iVar9 = 0;
      if (0 < param_2) {
        do {
          iVar6 = iVar9 * 2;
          puVar2 = *(undefined2 **)(param_1 + 0x1c);
          iVar9 = iVar9 + 1;
          uVar1 = *(undefined2 *)(param_1 + 0x30 + iVar6);
          *(undefined2 **)(param_1 + 0x1c) = puVar2 + 1;
          *puVar2 = uVar1;
        } while (iVar9 < param_2);
      }
      iVar6 = 0;
      if (iVar9 < iVar10) {
        do {
          iVar5 = iVar9 * 2;
          iVar7 = iVar6 * 2;
          iVar9 = iVar9 + 1;
          iVar6 = iVar6 + 1;
          *(undefined2 *)(param_1 + 0x30 + iVar7) = *(undefined2 *)(param_1 + 0x30 + iVar5);
        } while (iVar9 < iVar10);
      }
      *(int *)(param_1 + 0x2c) = iVar6;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

