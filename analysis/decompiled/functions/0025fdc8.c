/* Ghidra pseudocode. PS2 address: 0025fdc8. Not validated source. */

undefined8 FUN_0025fdc8(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  puVar5 = PTR_DAT_002a6614;
  if (param_1 == 0) {
    uVar3 = FUN_00260ab0(PTR_DAT_002a6614,0x25fdc8);
  }
  else {
    piVar8 = (int *)param_1;
    puVar2 = (undefined *)piVar8[0x15];
    if (puVar2 == (undefined *)0x0) {
      piVar8[0x15] = (int)PTR_DAT_002a6614;
      iVar9 = *(int *)(puVar5 + 0x38);
    }
    else {
      iVar9 = *(int *)(puVar2 + 0x38);
      puVar5 = puVar2;
    }
    if (iVar9 == 0) {
      FUN_00260098(puVar5);
      uVar1 = *(ushort *)(piVar8 + 3);
    }
    else {
      uVar1 = *(ushort *)(piVar8 + 3);
    }
    uVar3 = 0;
    if (((uVar1 & 8) != 0) && (iVar9 = piVar8[4], iVar9 != 0)) {
      iVar7 = *piVar8;
      *piVar8 = iVar9;
      iVar6 = 0;
      iVar7 = iVar7 - iVar9;
      if ((uVar1 & 3) == 0) {
        iVar6 = piVar8[5];
      }
      piVar8[2] = iVar6;
      while (0 < iVar7) {
        lVar4 = (*(code *)piVar8[9])(piVar8[7],iVar9,iVar7);
        iVar7 = iVar7 - (int)lVar4;
        if (lVar4 < 1) {
          *(ushort *)(piVar8 + 3) = *(ushort *)(piVar8 + 3) | 0x40;
          return 0xffffffffffffffff;
        }
        iVar9 = iVar9 + (int)lVar4;
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}

