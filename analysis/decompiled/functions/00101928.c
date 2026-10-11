/* Ghidra pseudocode. PS2 address: 00101928. Not validated source. */

undefined * FUN_00101928(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  
  iVar8 = (int)param_1;
  bVar7 = false;
  if (*(uint *)(iVar8 + 4) < 2) {
    lVar4 = FUN_00101818(param_1,0);
    bVar7 = lVar4 != 0;
  }
  FUN_001014f0(param_2,bVar7);
  iVar1 = 0;
  bVar7 = false;
  uVar5 = FUN_0015da60(*(undefined4 *)(DAT_002859e4 + 0xa0));
  uVar5 = uVar5 ^ 1;
  if (DAT_002852a4 < 1) {
    uVar6 = *(undefined4 *)(iVar8 + 4);
  }
  else {
    do {
      lVar4 = FUN_00100528(param_2,iVar1);
      if ((lVar4 != 0) && (lVar4 = FUN_001826e0(0x285290,iVar1), lVar4 != 0)) {
        iVar1 = FUN_00182670(0x285290,iVar1);
        *(undefined4 *)(iVar1 + 0x28) = 0;
        uVar2 = *(uint *)(iVar1 + 0xc) & ~*(uint *)(iVar1 + 8);
        if (DAT_00285308 == 1) {
          bVar7 = (uVar2 & 0xc0) != 0;
        }
        else {
          bVar7 = (uVar2 & 0x880) != 0;
        }
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_002852a4);
    uVar6 = *(undefined4 *)(iVar8 + 4);
  }
  puVar3 = &DAT_002a0000;
  iVar1 = (int)param_2;
  switch(uVar6) {
  case 0:
    puVar3 = *(undefined **)(iVar1 + 0x438);
    if (puVar3 == (undefined *)0x0) {
      if (bVar7) {
        FUN_0015c980();
        FUN_0020a818(DAT_002c56e8,2);
        FUN_00209730(DAT_002c56e8,0);
      }
      else if (uVar5 == 0) {
        return (undefined *)0x0;
      }
      puVar3 = (undefined *)FUN_00101e30(param_1,param_2);
      return puVar3;
    }
    if (uVar5 != 0) {
      puVar3 = (undefined *)FUN_00101d88(param_1,param_2);
      return puVar3;
    }
    break;
  case 1:
    puVar3 = *(undefined **)(iVar1 + 0x438);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = (undefined *)FUN_00101e30(param_1,param_2);
      return puVar3;
    }
    break;
  case 2:
    puVar3 = *(undefined **)(iVar1 + 0x438);
    if ((bVar7) || (uVar5 != 0)) {
      puVar3 = (undefined *)FUN_00101ea8(param_1,param_2);
      return puVar3;
    }
    break;
  case 3:
    puVar3 = *(undefined **)(iVar1 + 0x438);
    if ((puVar3 == (undefined *)0x0) &&
       ((puVar3 = &DAT_00280000, *(int *)(iVar8 + 8) == 0 || (bVar7)))) {
      FUN_001a32c8(*(undefined4 *)(DAT_002859e4 + 0x30),3,0xffffffffffffffff);
      puVar3 = (undefined *)FUN_00101fd8(param_1,param_2);
      return puVar3;
    }
    break;
  case 4:
    puVar3 = (undefined *)FUN_001f8b30(DAT_002c56e8,5);
    if (bVar7) {
      FUN_0020a818(DAT_002c56e8,2);
      FUN_00209730(DAT_002c56e8,0);
      puVar3 = (undefined *)FUN_00102098(param_1,param_2);
      return puVar3;
    }
    if (uVar5 != 0) {
      lVar4 = FUN_0020a7d0(DAT_002c56e8,2);
      puVar3 = (undefined *)0x0;
      if (lVar4 < 2) {
        puVar3 = (undefined *)FUN_00102098(param_1,param_2);
        return puVar3;
      }
    }
    break;
  case 5:
    puVar3 = (undefined *)
             (**(code **)(*(int *)(iVar1 + 8) + 0x9c))
                       (iVar1 + *(short *)(*(int *)(iVar1 + 8) + 0x98));
  }
  return puVar3;
}

