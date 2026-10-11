/* Ghidra pseudocode. PS2 address: 00237c50. Not validated source. */

void FUN_00237c50(undefined4 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  uint *puVar9;
  byte bStack_8d;
  
  iVar3 = DAT_002a3374;
  bStack_8d = (byte)((uint)param_1 >> 0x18);
  iVar8 = DAT_002a3374 + (uint)bStack_8d * 0x30;
  uVar2 = *(uint *)(iVar8 + 0x24);
  uVar5 = *(uint *)(iVar8 + 0x10);
  param_3[1] = uVar2;
  *(uint *)(param_3[2] + 0x24) = uVar2;
  puVar9 = (uint *)((uint)bStack_8d * 0x30 + iVar3);
  uVar2 = puVar9[2];
  if (uVar2 != 0) {
    if ((int)uVar2 < 1) {
      if ((-3 < (int)uVar2) && ((uVar2 = *puVar9 >> 0x14 & 0xf, uVar2 == 2 || (uVar2 == 9)))) {
        FUN_00238bc8(puVar9[9]);
      }
    }
    else if (uVar2 == 1) {
      switch(*puVar9 >> 0x14 & 0xf) {
      case 3:
      case 7:
      case 10:
      }
    }
  }
  FUN_00238b78(puVar9);
  lVar6 = FUN_00239d98(*param_3);
  if (lVar6 == 0) {
    FUN_0023a998(*param_3);
  }
  uVar2 = FUN_00239df8(*param_3);
  iVar3 = FUN_0023b460(*param_3);
  if (iVar3 < (int)uVar2) {
    FUN_0023a998(*param_3);
    uVar4 = FUN_0023a448(0x2be620,uVar2,DAT_002c5ac0);
    uVar1 = param_3[1];
    *param_3 = uVar4;
    uVar7 = FUN_00238a38();
    puVar9 = (uint *)uVar7;
    puVar9[5] = (uint)param_3;
    puVar9[4] = uVar5;
    *puVar9 = *puVar9 & 0xff0fffff | 0x400000;
    if (uVar1 == 0) {
      puVar9[3] = 6;
      FUN_002396c8(uVar7);
    }
    uVar5 = *(uint *)(uVar1 + 4);
    puVar9[8] = uVar4;
    puVar9[9] = uVar1;
    if ((int)uVar2 <= (int)uVar5) {
      uVar5 = uVar2;
    }
    puVar9[6] = 0;
    puVar9[7] = uVar5;
    FUN_002385e0(uVar7);
    uVar2 = *puVar9;
    iVar3 = DAT_002a3374 + (uVar2 >> 0x18) * 0x30;
    *(code **)(iVar3 + 0x28) = FUN_00237c50;
    if (*(int *)(iVar3 + 8) != 0) {
      FUN_00237c50(uVar2,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0x14));
    }
  }
  else {
    puVar9 = param_3;
    param_3[3] = (uint)DAT_002a3380;
    DAT_002a3380 = puVar9;
    FUN_002385e0(param_3[2]);
  }
  return;
}

