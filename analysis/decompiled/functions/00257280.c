/* Ghidra pseudocode. PS2 address: 00257280. Not validated source. */

undefined8 FUN_00257280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  
  puVar6 = (undefined8 *)param_3;
  puVar8 = (uint *)param_1;
  uVar7 = *puVar8;
  if (uVar7 < 2) {
    return param_1;
  }
  puVar4 = (uint *)param_2;
  uVar10 = *puVar4;
  if (1 < uVar10) {
    if (uVar7 == 4) {
      if ((uVar10 ^ 4) != 0) {
        return param_1;
      }
      if (puVar8[1] == puVar4[1]) {
        return param_1;
      }
      return 0x2d54a8;
    }
    if ((uVar10 ^ 4) != 0) {
      if (uVar10 == 2) {
        if ((uVar7 ^ 2) != 0) {
          return param_1;
        }
        *puVar6 = *(undefined8 *)puVar8;
        puVar6[1] = *(undefined8 *)(puVar8 + 2);
        puVar6[2] = *(undefined8 *)(puVar8 + 4);
        *(uint *)((int)puVar6 + 4) = puVar8[1] & puVar4[1];
        return param_3;
      }
      if ((uVar7 ^ 2) != 0) {
        uVar7 = puVar8[2];
        uVar10 = puVar4[2];
        uVar12 = *(ulong *)(puVar8 + 4);
        iVar3 = uVar7 - uVar10;
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        uVar11 = *(ulong *)(puVar4 + 4);
        if (iVar3 < 0x40) {
          uVar9 = puVar8[1];
          if ((int)uVar10 < (int)uVar7) {
            uVar5 = puVar4[1];
            do {
              uVar10 = uVar10 + 1;
              uVar11 = uVar11 & 1 | uVar11 >> 1;
            } while ((int)uVar10 < (int)uVar7);
          }
          else {
            uVar5 = puVar4[1];
          }
          if ((int)uVar7 < (int)uVar10) {
            iVar3 = uVar10 - uVar7;
            do {
              uVar12 = uVar12 & 1 | uVar12 >> 1;
              iVar3 = iVar3 + -1;
              uVar7 = uVar10;
            } while (iVar3 != 0);
          }
        }
        else {
          uVar9 = puVar8[1];
          if ((int)uVar10 < (int)uVar7) {
            uVar11 = 0;
            uVar5 = puVar4[1];
          }
          else {
            uVar5 = puVar4[1];
            uVar12 = 0;
            uVar7 = uVar10;
          }
        }
        uVar1 = uVar12 + uVar11;
        if (uVar9 == uVar5) {
          *(uint *)((int)puVar6 + 4) = uVar9;
          *(uint *)(puVar6 + 1) = uVar7;
          puVar6[2] = uVar1;
        }
        else {
          lVar2 = uVar11 - uVar12;
          if (uVar9 == 0) {
            lVar2 = uVar12 - uVar11;
          }
          if (lVar2 < 0) {
            *(uint *)(puVar6 + 1) = uVar7;
            puVar6[2] = -lVar2;
            *(undefined4 *)((int)puVar6 + 4) = 1;
          }
          else {
            *(uint *)(puVar6 + 1) = uVar7;
            puVar6[2] = lVar2;
            *(undefined4 *)((int)puVar6 + 4) = 0;
          }
          uVar1 = puVar6[2];
          while (uVar1 - 1 < 0xfffffffffffffff) {
            uVar1 = uVar1 * 2;
            puVar6[2] = uVar1;
            *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + -1;
          }
        }
        *(undefined4 *)puVar6 = 3;
        if (0x1fffffffffffffff < uVar1) {
          puVar6[2] = uVar1 & 1 | uVar1 >> 1;
          *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
        }
        return param_3;
      }
    }
  }
  return param_2;
}

