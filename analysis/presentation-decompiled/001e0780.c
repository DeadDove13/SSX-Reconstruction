
undefined4 FUN_001e0780(int param_1,long param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_v1_lo;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  
  iVar5 = (int)param_2;
  if (*(int *)(param_1 + 4) <= in_v1_lo) {
    if (param_2 != 0) {
      iVar9 = (&DAT_002a33c8)[*(ushort *)(iVar5 + -0xe) & 0xf];
      if (*(int *)(iVar9 + 0x38) != 0) {
        FUN_0023ee58();
      }
      puVar6 = *(undefined2 **)(iVar5 + -4);
      puVar7 = *(undefined2 **)(iVar5 + -8);
      puVar10 = puVar6;
      puVar8 = (undefined2 *)(iVar5 + -0x10);
      if ((puVar6[1] & 0x4000) != 0) {
        puVar6[1] = puVar6[1] & 0xbfff;
        iVar5 = *(int *)(puVar6 + 10);
        iVar3 = *(int *)(puVar6 + 8);
        *puVar6 = 0x424f;
        puVar10 = *(undefined2 **)(puVar6 + 6);
        *(undefined2 **)(puVar6 + 4) = puVar7;
        *(int *)(iVar5 + 0x10) = iVar3;
        *(undefined2 **)(puVar10 + 4) = puVar6;
        *(int *)(iVar3 + 0x14) = iVar5;
        *(undefined2 **)(puVar7 + 6) = puVar6;
        puVar8 = puVar6;
      }
      if ((puVar7[1] & 0x4000) != 0) {
        iVar5 = *(int *)(puVar7 + 10);
        puVar7[1] = puVar7[1] & 0xbfff;
        iVar3 = *(int *)(puVar7 + 8);
        *puVar7 = 0x424f;
        iVar4 = *(int *)(puVar7 + 4);
        *(undefined2 **)(puVar8 + 6) = puVar10;
        *(int *)(iVar5 + 0x10) = iVar3;
        *(int *)(puVar8 + 4) = iVar4;
        *(int *)(iVar3 + 0x14) = iVar5;
        *(undefined2 **)(iVar4 + 0xc) = puVar8;
      }
      puVar6 = (undefined2 *)(iVar9 + 0x10);
      puVar7 = *(undefined2 **)(iVar9 + 0x20);
      if ((undefined2 *)((int)puVar7 + ((uint)(*(int *)(iVar9 + 0x24) - (int)puVar7) >> 1)) < puVar8
         ) {
        uVar1 = puVar8[1];
        do {
          puVar6 = *(undefined2 **)(puVar6 + 10);
        } while (puVar8 < puVar6);
        puVar7 = *(undefined2 **)(puVar6 + 8);
      }
      else {
        uVar1 = puVar8[1];
        for (; puVar7 < puVar8; puVar7 = *(undefined2 **)(puVar7 + 8)) {
        }
        puVar6 = *(undefined2 **)(puVar7 + 10);
      }
      *(int *)(puVar8 + 2) = (*(int *)(puVar8 + 4) - (int)puVar8) + -0x10;
      *(undefined2 **)(puVar8 + 8) = puVar7;
      *(undefined2 **)(puVar8 + 10) = puVar6;
      *(undefined2 **)(puVar6 + 8) = puVar8;
      iVar5 = *(int *)(iVar9 + 0x38);
      *puVar8 = 0x4246;
      *(undefined2 **)(puVar7 + 10) = puVar8;
      puVar8[1] = uVar1 | 0x4000;
      if (iVar5 != 0) {
        FUN_0023ea60();
      }
    }
    return 1;
  }
  iVar9 = *(int *)(param_1 + 8) + *(int *)(iVar5 + -0x10) * 0x10;
  if (*(int *)(iVar9 + 4) == -0x10) {
    trap(7);
    trap(7);
  }
  uVar2 = *(undefined4 *)(iVar9 + 8);
  *(undefined4 *)(iVar5 + -0xc) = uVar2;
  *(int *)(iVar9 + 8) = iVar5 + -0x10;
  return uVar2;
}

