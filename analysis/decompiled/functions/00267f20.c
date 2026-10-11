/* Ghidra pseudocode. PS2 address: 00267f20. Not validated source. */

undefined4 FUN_00267f20(undefined8 param_1,ulong param_2,int param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  lVar3 = FUN_00267950();
  if (DAT_002a6aac != 0) {
    if (lVar3 == 0) {
      return 0xfffffff7;
    }
    puVar8 = (undefined4 *)lVar3;
    if (puVar8[1] == 0) {
      return 0xfffffff7;
    }
    DAT_002d7400 = *puVar8;
    uVar7 = (uint)param_2;
    if ((param_2 & 0xf) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (uVar7 & 0xfffffff0) - (uVar7 - 0x10);
    }
    uVar1 = puVar8[1];
    if (param_3 < iVar6) {
      iVar6 = param_3;
    }
    DAT_002d7404 = uVar7;
    DAT_002d7408 = param_3;
    if ((uVar1 & 0x20000000) == 0) {
      FUN_002669d0(param_2,param_3);
    }
    iVar5 = 0;
    DAT_002d740c = iVar6;
    if (0 < iVar6) {
      do {
        puVar2 = (undefined1 *)((uVar7 | 0x20000000) + iVar5);
        puVar4 = &DAT_002d7410 + iVar5;
        iVar5 = iVar5 + 1;
        *puVar4 = *puVar2;
      } while (iVar5 < iVar6);
    }
    lVar3 = FUN_00267268(0x2d7a10,3,(uVar1 & 0x8000) != 0,0x2d7400,0x20,0x2d7840,4,0);
    if (-1 < lVar3) {
      if ((puVar8[1] & 0x8000) != 0) {
        return 0;
      }
      return DAT_002d7840;
    }
  }
  return 0xffffffff;
}

