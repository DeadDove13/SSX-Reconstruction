/* Ghidra pseudocode. PS2 address: 0023a998. Not validated source. */

undefined4 FUN_0023a998(long param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  
  if (param_1 != 0) {
    iVar9 = (int)param_1;
    iVar2 = (&DAT_002a33c8)[*(ushort *)(iVar9 + -0xe) & 0xf];
    if (*(int *)(iVar2 + 0x38) != 0) {
      FUN_0023ee58();
    }
    puVar5 = *(undefined2 **)(iVar9 + -4);
    puVar6 = *(undefined2 **)(iVar9 + -8);
    puVar8 = puVar5;
    puVar7 = (undefined2 *)(iVar9 + -0x10);
    if ((puVar5[1] & 0x4000) != 0) {
      puVar5[1] = puVar5[1] & 0xbfff;
      iVar9 = *(int *)(puVar5 + 10);
      iVar3 = *(int *)(puVar5 + 8);
      *puVar5 = 0x424f;
      puVar8 = *(undefined2 **)(puVar5 + 6);
      *(undefined2 **)(puVar5 + 4) = puVar6;
      *(int *)(iVar9 + 0x10) = iVar3;
      *(undefined2 **)(puVar8 + 4) = puVar5;
      *(int *)(iVar3 + 0x14) = iVar9;
      *(undefined2 **)(puVar6 + 6) = puVar5;
      puVar7 = puVar5;
    }
    if ((puVar6[1] & 0x4000) != 0) {
      iVar9 = *(int *)(puVar6 + 10);
      puVar6[1] = puVar6[1] & 0xbfff;
      iVar3 = *(int *)(puVar6 + 8);
      *puVar6 = 0x424f;
      iVar4 = *(int *)(puVar6 + 4);
      *(undefined2 **)(puVar7 + 6) = puVar8;
      *(int *)(iVar9 + 0x10) = iVar3;
      *(int *)(puVar7 + 4) = iVar4;
      *(int *)(iVar3 + 0x14) = iVar9;
      *(undefined2 **)(iVar4 + 0xc) = puVar7;
    }
    puVar5 = (undefined2 *)(iVar2 + 0x10);
    puVar6 = *(undefined2 **)(iVar2 + 0x20);
    if ((undefined2 *)((int)puVar6 + ((uint)(*(int *)(iVar2 + 0x24) - (int)puVar6) >> 1)) < puVar7)
    {
      uVar1 = puVar7[1];
      do {
        puVar5 = *(undefined2 **)(puVar5 + 10);
      } while (puVar7 < puVar5);
      puVar6 = *(undefined2 **)(puVar5 + 8);
    }
    else {
      uVar1 = puVar7[1];
      for (; puVar6 < puVar7; puVar6 = *(undefined2 **)(puVar6 + 8)) {
      }
      puVar5 = *(undefined2 **)(puVar6 + 10);
    }
    *(int *)(puVar7 + 2) = (*(int *)(puVar7 + 4) - (int)puVar7) + -0x10;
    *(undefined2 **)(puVar7 + 8) = puVar6;
    *(undefined2 **)(puVar7 + 10) = puVar5;
    *(undefined2 **)(puVar5 + 8) = puVar7;
    iVar2 = *(int *)(iVar2 + 0x38);
    *puVar7 = 0x4246;
    *(undefined2 **)(puVar6 + 10) = puVar7;
    puVar7[1] = uVar1 | 0x4000;
    if (iVar2 != 0) {
      FUN_0023ea60();
    }
  }
  return 1;
}

