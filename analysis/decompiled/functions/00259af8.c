/* Ghidra pseudocode. PS2 address: 00259af8. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00259af8(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  
  puVar1 = PTR_DAT_002a6620;
  param_2 = param_2 + (int)_DAT_002a6a28;
  uVar8 = *(uint *)(PTR_DAT_002a6620 + 4) & 0xfffffffc;
  uVar7 = param_2 + 0x10;
  puVar9 = PTR_DAT_002a6620 + uVar8;
  if (DAT_002a6a30 != (undefined *)0xffffffff) {
    uVar7 = param_2 + 0x100fU & 0xfffff000;
  }
  puVar3 = (undefined *)FUN_0025b198(param_1,uVar7);
  if ((puVar3 != (undefined *)0xffffffff) && ((puVar9 <= puVar3 || (puVar1 == &DAT_002a6618)))) {
    DAT_002a6a48 = DAT_002a6a48 + uVar7;
    if (puVar3 == puVar9) {
      *(uint *)(PTR_DAT_002a6620 + 4) = uVar7 + uVar8 | 1;
    }
    else {
      puVar2 = puVar3;
      if (DAT_002a6a30 != (undefined *)0xffffffff) {
        DAT_002a6a48 = puVar3 + ((int)DAT_002a6a48 - (int)puVar9);
        puVar2 = DAT_002a6a30;
      }
      DAT_002a6a30 = puVar2;
      if (((uint)(puVar3 + 8) & 0xf) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0x10 - ((uint)(puVar3 + 8) & 0xf);
        puVar3 = puVar3 + iVar6;
      }
      iVar6 = iVar6 + (0x1000 - ((uint)(puVar3 + uVar7) & 0xfff));
      lVar4 = FUN_0025b198(param_1,iVar6);
      if (lVar4 == -1) {
        return;
      }
      DAT_002a6a48 = DAT_002a6a48 + iVar6;
      *(uint *)(puVar3 + 4) = ((int)lVar4 - (int)puVar3) + iVar6 | 1;
      PTR_DAT_002a6620 = puVar3;
      if (puVar1 != &DAT_002a6618) {
        if (uVar8 < 0x10) {
          *(undefined4 *)(puVar3 + 4) = 1;
          return;
        }
        uVar7 = uVar8 - 0xc & 0xfffffff0;
        *(uint *)(puVar1 + 4) = *(uint *)(puVar1 + 4) & 1 | uVar7;
        *(undefined4 *)(puVar1 + uVar7 + 8) = 5;
        *(undefined4 *)(puVar1 + uVar7 + 4) = 5;
        if (0xf < uVar7) {
          FUN_00260248(param_1,puVar1 + 8);
        }
      }
    }
    uVar5 = (ulong)(int)DAT_002a6a48;
    if (DAT_002a6a38 < uVar5) {
      DAT_002a6a38 = uVar5;
    }
    if (DAT_002a6a40 < uVar5) {
      DAT_002a6a40 = uVar5;
    }
  }
  return;
}

