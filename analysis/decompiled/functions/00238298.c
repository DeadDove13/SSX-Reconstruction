/* Ghidra pseudocode. PS2 address: 00238298. Not validated source. */

uint FUN_00238298(uint param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  puVar1 = DAT_002a3380;
  puVar10 = (undefined4 *)0x0;
  puVar3 = (uint *)FUN_00238a38();
  piVar7 = DAT_002a3378;
  puVar3[4] = param_2;
  puVar3[5] = param_3;
  *puVar3 = *puVar3 & 0xff0fffff | 0xa00000;
  if (*(int *)(param_1 + 8) != 0) {
    puVar3[3] = 1;
  }
  iVar4 = 0;
  if (0 < DAT_002a335c) {
    if (((piVar7 == (int *)0x0) || (piVar7[2] == 0)) || (*(uint *)(*piVar7 + 4) != param_1)) {
      do {
        piVar6 = piVar7;
        iVar4 = iVar4 + 1;
        piVar7 = piVar6 + 0x13;
        if (DAT_002a335c <= iVar4) goto LAB_002383c4;
      } while (((piVar7 == (int *)0x0) || (piVar6[0x15] == 0)) ||
              (*(uint *)(*piVar7 + 4) != param_1));
      puVar3[2] = 0xfffffffe;
      puVar3[3] = 1;
    }
    else {
      puVar3[2] = 0xfffffffe;
      puVar3[3] = 1;
    }
  }
LAB_002383c4:
  do {
    puVar9 = puVar1;
    if (puVar9 == (undefined4 *)0x0) break;
    if (puVar9[1] == param_1) {
      if (puVar9 != (undefined4 *)0x0) goto LAB_002383e4;
      break;
    }
    puVar1 = (undefined4 *)puVar9[3];
    puVar10 = puVar9;
  } while( true );
  puVar3[3] = 1;
LAB_002383e4:
  if (puVar10 == (undefined4 *)0x0) {
    DAT_002a3380 = (undefined4 *)DAT_002a3380[3];
  }
  else {
    puVar10[3] = puVar9[3];
  }
  FUN_0023a998(*puVar9);
  FUN_0023a998(puVar9);
  uVar5 = FUN_00238a38();
  puVar1 = DAT_002a3380;
  puVar8 = (uint *)uVar5;
  *puVar8 = *puVar8 & 0xff0fffff | 0x300000;
  puVar8[4] = param_2;
  puVar8[5] = (uint)puVar3;
  puVar8[9] = param_1;
  do {
    if (puVar1 == (undefined4 *)0x0) {
LAB_00238478:
      FUN_002385e0(uVar5);
      uVar2 = *puVar8;
      iVar4 = DAT_002a3374 + (uVar2 >> 0x18) * 0x30;
      *(code **)(iVar4 + 0x28) = FUN_002397b8;
      if (*(int *)(iVar4 + 8) != 0) {
        FUN_002397b8(uVar2,*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0x14));
      }
      return *puVar3;
    }
    if (puVar1[1] == param_1) {
      puVar8[3] = 3;
      FUN_002396c8(uVar5);
      goto LAB_00238478;
    }
    puVar1 = (undefined4 *)puVar1[3];
  } while( true );
}

