/* Ghidra pseudocode. PS2 address: 001ca2f8. Not validated source. */

void FUN_001ca2f8(int param_1,ulong param_2,int *param_3)

{
  ulong *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  int iVar5;
  float *pfVar6;
  ulong uVar7;
  
  puVar1 = *(ulong **)(param_1 + 0x1458);
  iVar5 = (int)param_2;
  if (*(int *)(param_1 + 4) == 0) {
    *puVar1 = (long)(iVar5 + 4) | 0x10000000;
    *(ulong **)(param_1 + 0x1458) = puVar1 + 1;
    puVar1[1] = 0;
    *(ulong **)(param_1 + 0x1458) = puVar1 + 2;
    puVar1[2] = 0;
    *(ulong **)(param_1 + 0x1458) = puVar1 + 3;
    puVar1[3] = ((long)(iVar5 + 3) | 0x50000000U) << 0x20;
    *(ulong **)(param_1 + 0x1458) = puVar1 + 4;
    puVar1[4] = 0x1400000000000001;
    *(ulong **)(param_1 + 0x1458) = puVar1 + 5;
    puVar1[5] = 0;
    *(ulong **)(param_1 + 0x1458) = puVar1 + 6;
    puVar1[6] = 0x4c;
    *(ulong **)(param_1 + 0x1458) = puVar1 + 7;
    puVar1[7] = 0;
    *(ulong **)(param_1 + 0x1458) = puVar1 + 8;
    puVar1[8] = param_2 | 0x2400000000008000;
    *(ulong **)(param_1 + 0x1458) = puVar1 + 9;
    puVar1[9] = 0x51;
    *(ulong **)(param_1 + 0x1458) = puVar1 + 10;
    iVar5 = *(int *)(param_1 + 0x1450);
    if (0 < (long)param_2) {
      do {
        iVar2 = *param_3;
        param_2 = (ulong)((int)param_2 + -1);
        puVar3 = *(ulong **)(param_1 + 0x1458);
        param_3 = param_3 + 1;
        pfVar6 = (float *)(iVar2 * 0x30 + iVar5);
        *puVar3 = (long)(int)(pfVar6[5] * 128.0) | (long)(int)pfVar6[3] << 0x20 |
                  (long)(int)(pfVar6[7] * 128.0) << 0x10 | (long)(int)(pfVar6[6] * 128.0) << 8 |
                  (long)(int)(pfVar6[4] * 128.0) << 0x18;
        *(ulong **)(param_1 + 0x1458) = puVar3 + 1;
        puVar3[1] = (long)(int)*pfVar6 | (long)(int)pfVar6[1] << 0x10 |
                    (long)(int)(pfVar6[2] * pfVar6[3]) << 0x20;
        *(ulong **)(param_1 + 0x1458) = puVar3 + 2;
      } while (param_2 != 0);
    }
  }
  else {
    iVar5 = (iVar5 * 3 + 1) / 2;
    *puVar1 = (long)(iVar5 + 4) | 0x10000000;
    *(ulong **)(param_1 + 0x1458) = puVar1 + 1;
    puVar1[1] = 0;
    *(ulong **)(param_1 + 0x1458) = puVar1 + 2;
    puVar1[2] = 0;
    *(ulong **)(param_1 + 0x1458) = puVar1 + 3;
    puVar1[3] = ((long)(iVar5 + 3) | 0x50000000U) << 0x20;
    *(ulong **)(param_1 + 0x1458) = puVar1 + 4;
    puVar1[4] = 0x1400000000000001;
    *(ulong **)(param_1 + 0x1458) = puVar1 + 5;
    puVar1[5] = 0;
    *(ulong **)(param_1 + 0x1458) = puVar1 + 6;
    puVar1[6] = 0x5c;
    *(ulong **)(param_1 + 0x1458) = puVar1 + 7;
    uVar7 = param_2 & 1;
    puVar1[7] = 0;
    *(ulong **)(param_1 + 0x1458) = puVar1 + 8;
    puVar1[8] = param_2 | 0x3400000000008000;
    *(ulong **)(param_1 + 0x1458) = puVar1 + 9;
    puVar1[9] = 0x521;
    *(ulong **)(param_1 + 0x1458) = puVar1 + 10;
    iVar5 = *(int *)(param_1 + 0x1450);
    if (0 < (long)param_2) {
      do {
        iVar2 = *param_3;
        param_2 = (ulong)((int)param_2 + -1);
        puVar3 = *(ulong **)(param_1 + 0x1458);
        param_3 = param_3 + 1;
        pfVar6 = (float *)(iVar2 * 0x30 + iVar5);
        *puVar3 = (long)(int)(pfVar6[5] * 128.0) | (long)(int)pfVar6[3] << 0x20 |
                  (long)(int)(pfVar6[7] * 128.0) << 0x10 | (long)(int)(pfVar6[6] * 128.0) << 8 |
                  (long)(int)(pfVar6[4] * 128.0) << 0x18;
        *(ulong **)(param_1 + 0x1458) = puVar3 + 1;
        puVar3[1] = (long)(int)pfVar6[8] | (long)(int)pfVar6[9] << 0x20;
        *(ulong **)(param_1 + 0x1458) = puVar3 + 2;
        puVar3[2] = (long)(int)*pfVar6 | (long)(int)pfVar6[1] << 0x10 |
                    (long)(int)(pfVar6[2] * pfVar6[3]) << 0x20;
        *(ulong **)(param_1 + 0x1458) = puVar3 + 3;
      } while (param_2 != 0);
    }
    if (uVar7 == 0) {
      iVar5 = *(int *)(param_1 + 0x1458);
      goto LAB_001ca6d4;
    }
    puVar4 = *(undefined8 **)(param_1 + 0x1458);
    *puVar4 = 0;
    *(undefined8 **)(param_1 + 0x1458) = puVar4 + 1;
  }
  iVar5 = *(int *)(param_1 + 0x1458);
LAB_001ca6d4:
  *(int *)(param_1 + 0x1458) = iVar5 + 0x10;
  FUN_001d39e8(*(undefined4 *)(param_1 + 8),puVar1,iVar5,0);
  return;
}

