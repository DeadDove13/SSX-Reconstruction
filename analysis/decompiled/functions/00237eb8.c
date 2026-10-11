/* Ghidra pseudocode. PS2 address: 00237eb8. Not validated source. */

void FUN_00237eb8(undefined4 param_1,long param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  byte bStack_8d;
  
  bStack_8d = (byte)((uint)param_1 >> 0x18);
  uVar1 = *(uint *)((uint)bStack_8d * 0x30 + DAT_002a3374 + 0x10);
  puVar5 = (uint *)((uint)bStack_8d * 0x30 + DAT_002a3374);
  uVar4 = puVar5[2];
  uVar6 = 0;
  if (uVar4 != 0) {
    if ((int)uVar4 < 1) {
      if ((-3 < (int)uVar4) && ((uVar4 = *puVar5 >> 0x14 & 0xf, uVar4 == 2 || (uVar4 == 9)))) {
        FUN_00238bc8(puVar5[9]);
      }
    }
    else if (uVar4 == 1) {
      switch(*puVar5 >> 0x14 & 0xf) {
      case 2:
      case 9:
        uVar6 = puVar5[9];
        break;
      case 3:
      case 7:
      case 10:
        uVar6 = puVar5[2];
        break;
      case 4:
      case 5:
        uVar6 = puVar5[7];
        break;
      case 6:
      case 8:
        uVar6 = puVar5[6];
      }
    }
  }
  FUN_00238b78(puVar5);
  if (param_2 == 1) {
    uVar4 = *param_3;
    uVar3 = FUN_00238a38();
    puVar5 = (uint *)uVar3;
    puVar5[5] = (uint)param_3;
    puVar5[4] = uVar1;
    *puVar5 = *puVar5 & 0xff0fffff | 0x400000;
    if (uVar6 == 0) {
      puVar5[3] = 6;
      FUN_002396c8(uVar3);
    }
    uVar1 = *(uint *)(uVar6 + 4);
    puVar5[8] = uVar4;
    puVar5[9] = uVar6;
    uVar4 = 0x800;
    if ((int)uVar1 < 0x800) {
      uVar4 = uVar1;
    }
    puVar5[6] = 0;
    puVar5[7] = uVar4;
    FUN_002385e0(uVar3);
    uVar1 = *puVar5;
    iVar2 = DAT_002a3374 + (uVar1 >> 0x18) * 0x30;
    *(code **)(iVar2 + 0x28) = FUN_00237c50;
    if (*(int *)(iVar2 + 8) != 0) {
      FUN_00237c50(uVar1,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0x14));
    }
  }
  else {
    *(undefined4 *)(param_3[2] + 0xc) = 4;
    FUN_002385e0();
  }
  return;
}

