/* Ghidra pseudocode. PS2 address: 00263828. Not validated source. */

uint FUN_00263828(uint param_1,undefined8 param_2)

{
  undefined *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  
  puVar6 = PTR_DAT_002a6614;
  uVar3 = 0xffffffff;
  if (param_1 != 0xffffffff) {
    puVar9 = (uint *)param_2;
    puVar1 = (undefined *)puVar9[0x15];
    if (puVar1 == (undefined *)0x0) {
      puVar9[0x15] = (uint)PTR_DAT_002a6614;
      iVar4 = *(int *)(puVar6 + 0x38);
    }
    else {
      iVar4 = *(int *)(puVar1 + 0x38);
      puVar6 = puVar1;
    }
    if (iVar4 == 0) {
      FUN_00260098(puVar6);
      uVar2 = (ushort)puVar9[3];
    }
    else {
      uVar2 = (ushort)puVar9[3];
    }
    *(ushort *)(puVar9 + 3) = uVar2 & 0xffdf;
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x10) == 0) {
        return 0xffffffff;
      }
      if ((uVar2 & 8) == 0) {
        uVar2 = (ushort)puVar9[3];
      }
      else {
        lVar5 = FUN_0025fdc8(param_2);
        if (lVar5 != 0) {
          return 0xffffffff;
        }
        puVar9[2] = 0;
        puVar9[6] = 0;
        *(ushort *)(puVar9 + 3) = (ushort)puVar9[3] & 0xfff7;
        uVar2 = (ushort)puVar9[3];
      }
      *(ushort *)(puVar9 + 3) = uVar2 | 4;
    }
    uVar3 = param_1 & 0xff;
    if (puVar9[0xc] == 0) {
      uVar8 = *puVar9;
      if (puVar9[4] == 0) {
        uVar7 = puVar9[1];
      }
      else {
        uVar7 = puVar9[1];
        if ((puVar9[4] < uVar8) && (*(byte *)(uVar8 - 1) == uVar3)) {
          *puVar9 = uVar8 - 1;
          puVar9[1] = uVar7 + 1;
          return uVar3;
        }
      }
      puVar9[1] = 1;
      puVar9[0xf] = uVar7;
      puVar9[0xe] = uVar8;
      puVar9[0xc] = (uint)(puVar9 + 0x10);
      puVar9[0xd] = 3;
      *puVar9 = (int)puVar9 + 0x42;
      *(char *)((int)puVar9 + 0x42) = (char)param_1;
    }
    else {
      if ((int)puVar9[1] < (int)puVar9[0xd]) {
        uVar8 = *puVar9;
      }
      else {
        lVar5 = FUN_00263738(param_2);
        if (lVar5 != 0) {
          return 0xffffffff;
        }
        uVar8 = *puVar9;
      }
      *puVar9 = uVar8 - 1;
      *(char *)(uVar8 - 1) = (char)param_1;
      puVar9[1] = puVar9[1] + 1;
    }
  }
  return uVar3;
}

