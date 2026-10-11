/* Ghidra pseudocode. PS2 address: 001c6bf8. Not validated source. */

void FUN_001c6bf8(int param_1,ulong param_2,int param_3)

{
  ulong *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  ulong *puVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  
  FUN_001cb238(0x2913b0,5,0);
  if (*(int *)(param_1 + 4) == 0) {
    FUN_0011ecd8(0x295e90,*(undefined4 *)(*(int *)(DAT_002859e4 + 0x7c) + 0x74),1);
  }
  bVar2 = false;
  if (param_2 != 0) {
    iVar12 = 0;
    do {
      if (bVar2) {
        uVar11 = 0x47;
        if ((long)param_2 < 0x48) {
          uVar11 = param_2;
        }
        iVar12 = iVar12 + -0x60;
        iVar9 = (int)uVar11;
        uVar11 = (ulong)(iVar9 + 2);
      }
      else {
        uVar11 = 0x49;
        if ((long)param_2 < 0x4a) {
          uVar11 = param_2;
        }
        iVar9 = (int)uVar11;
      }
      param_2 = (ulong)((int)param_2 - iVar9);
      iVar10 = (int)uVar11;
      puVar1 = *(ulong **)(param_1 + 0x1458);
      *puVar1 = (long)(iVar10 * 3 + 4) | 0x10000000;
      *(ulong **)(param_1 + 0x1458) = puVar1 + 1;
      puVar1[1] = 0;
      *(ulong **)(param_1 + 0x1458) = puVar1 + 2;
      puVar1[2] = 0;
      *(ulong **)(param_1 + 0x1458) = puVar1 + 3;
      puVar1[3] = ((long)((iVar10 * 3 + 2) * 0x10000) | 0x6c008000U) << 0x20;
      *(ulong **)(param_1 + 0x1458) = puVar1 + 4;
      puVar1[4] = uVar11 | 0x302e400000008000;
      iVar9 = iVar10 + -1;
      *(ulong **)(param_1 + 0x1458) = puVar1 + 5;
      puVar1[5] = 0x412;
      *(ulong **)(param_1 + 0x1458) = puVar1 + 6;
      puVar1[6] = (long)(int)((ulong)((long)iVar10 * 3) >> 0x20) << 0x20 |
                  (long)iVar10 * 3 & 0xffffffffU;
      *(ulong **)(param_1 + 0x1458) = puVar1 + 7;
      puVar1[7] = 0;
      *(ulong **)(param_1 + 0x1458) = puVar1 + 8;
      if (uVar11 != 0) {
        puVar7 = (undefined4 *)(iVar12 + param_3);
        puVar8 = puVar1 + 8;
        do {
          uVar5 = puVar7[4];
          iVar12 = iVar12 + 0x30;
          *(undefined4 *)puVar8 = *puVar7;
          iVar9 = iVar9 + -1;
          *(undefined4 *)(puVar8 + 2) = uVar5;
          uVar5 = puVar7[5];
          *(undefined4 *)((int)puVar8 + 4) = puVar7[1];
          *(undefined4 *)((int)puVar8 + 0x14) = uVar5;
          uVar5 = puVar7[6];
          *(undefined4 *)(puVar8 + 1) = puVar7[2];
          *(undefined4 *)(puVar8 + 3) = uVar5;
          uVar5 = puVar7[7];
          *(undefined4 *)((int)puVar8 + 0xc) = puVar7[3];
          *(undefined4 *)((int)puVar8 + 0x1c) = uVar5;
          uVar3 = *(undefined8 *)(puVar7 + 8);
          uVar5 = puVar7[10];
          uVar6 = puVar7[0xb];
          *(int *)(puVar8 + 4) = (int)uVar3;
          *(int *)((int)puVar8 + 0x24) = (int)((ulong)uVar3 >> 0x20);
          *(undefined4 *)(puVar8 + 5) = uVar5;
          *(undefined4 *)((int)puVar8 + 0x2c) = uVar6;
          puVar7 = puVar7 + 0xc;
          puVar8 = puVar8 + 6;
        } while (iVar9 != -1);
      }
      puVar4 = (undefined8 *)(*(int *)(param_1 + 0x1458) + iVar10 * 0x30);
      *puVar4 = 0;
      puVar4[1] = 0x140000bb00000000;
      *(undefined8 **)(param_1 + 0x1458) = puVar4 + 4;
      FUN_001d39e8(*(undefined4 *)(param_1 + 8),puVar1,puVar4 + 2,0);
      bVar2 = true;
    } while (param_2 != 0);
  }
  return;
}

