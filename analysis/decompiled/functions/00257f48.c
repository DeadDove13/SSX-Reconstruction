/* Ghidra pseudocode. PS2 address: 00257f48. Not validated source. */

undefined8 FUN_00257f48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  puVar5 = (undefined8 *)param_3;
  puVar8 = (uint *)param_1;
  uVar6 = *puVar8;
  if (uVar6 < 2) {
    return param_1;
  }
  puVar3 = (uint *)param_2;
  uVar7 = *puVar3;
  if (1 < uVar7) {
    if (uVar6 == 4) {
      if ((uVar7 ^ 4) != 0) {
        return param_1;
      }
      if (puVar8[1] == puVar3[1]) {
        return param_1;
      }
      return 0x2d54c0;
    }
    if ((uVar7 ^ 4) != 0) {
      if (uVar7 == 2) {
        if ((uVar6 ^ 2) != 0) {
          return param_1;
        }
        uVar2 = *(undefined8 *)(puVar8 + 2);
        *puVar5 = *(undefined8 *)puVar8;
        puVar5[1] = uVar2;
        *(uint *)((int)puVar5 + 4) = puVar8[1] & puVar3[1];
        return param_3;
      }
      if ((uVar6 ^ 2) != 0) {
        uVar6 = puVar8[2];
        uVar7 = puVar3[2];
        uVar11 = puVar8[3];
        iVar1 = uVar6 - uVar7;
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        uVar10 = puVar3[3];
        if (iVar1 < 0x20) {
          uVar9 = puVar8[1];
          if ((int)uVar7 < (int)uVar6) {
            uVar4 = puVar3[1];
            do {
              uVar7 = uVar7 + 1;
              uVar10 = uVar10 & 1 | uVar10 >> 1;
            } while ((int)uVar7 < (int)uVar6);
          }
          else {
            uVar4 = puVar3[1];
          }
          if ((int)uVar6 < (int)uVar7) {
            iVar1 = uVar7 - uVar6;
            do {
              uVar11 = uVar11 & 1 | uVar11 >> 1;
              iVar1 = iVar1 + -1;
              uVar6 = uVar7;
            } while (iVar1 != 0);
          }
        }
        else {
          uVar9 = puVar8[1];
          if ((int)uVar7 < (int)uVar6) {
            uVar10 = 0;
            uVar4 = puVar3[1];
          }
          else {
            uVar4 = puVar3[1];
            uVar11 = 0;
            uVar6 = uVar7;
          }
        }
        uVar7 = uVar11 + uVar10;
        if (uVar9 == uVar4) {
          *(uint *)((int)puVar5 + 4) = uVar9;
          *(uint *)(puVar5 + 1) = uVar6;
          *(uint *)((int)puVar5 + 0xc) = uVar7;
        }
        else {
          iVar1 = uVar10 - uVar11;
          if (uVar9 == 0) {
            iVar1 = uVar11 - uVar10;
          }
          if (iVar1 < 0) {
            *(uint *)(puVar5 + 1) = uVar6;
            *(int *)((int)puVar5 + 0xc) = -iVar1;
            *(undefined4 *)((int)puVar5 + 4) = 1;
          }
          else {
            *(uint *)(puVar5 + 1) = uVar6;
            *(int *)((int)puVar5 + 0xc) = iVar1;
            *(undefined4 *)((int)puVar5 + 4) = 0;
          }
          uVar7 = *(uint *)((int)puVar5 + 0xc);
          while (uVar7 - 1 < 0x3fffffff) {
            uVar7 = uVar7 * 2;
            *(uint *)((int)puVar5 + 0xc) = uVar7;
            *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + -1;
          }
        }
        *(undefined4 *)puVar5 = 3;
        if ((int)uVar7 < 0) {
          *(uint *)((int)puVar5 + 0xc) = uVar7 & 1 | uVar7 >> 1;
          *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
        }
        return param_3;
      }
    }
  }
  return param_2;
}

