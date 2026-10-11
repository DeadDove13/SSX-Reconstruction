/* Ghidra pseudocode. PS2 address: 002380d8. Not validated source. */

uint * FUN_002380d8(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  uint *puVar9;
  
  iVar5 = DAT_002a3380;
  puVar2 = (uint *)FUN_00238a38();
  puVar2[5] = param_4;
  puVar2[4] = param_3;
  *puVar2 = *puVar2 & 0xff0fffff | 0x900000;
  if (iVar5 == 0) {
LAB_00238188:
    puVar3 = (undefined4 *)FUN_0023a448(param_1,0x10,param_2);
    puVar3[2] = puVar2;
    uVar4 = FUN_0023a448(0x2be620,0x800,DAT_002c5ac0);
    *puVar3 = uVar4;
    uVar7 = FUN_00238a38();
    puVar9 = (uint *)uVar7;
    puVar9[5] = (uint)puVar3;
    puVar9[6] = 1;
    puVar9[4] = param_3;
    *puVar9 = *puVar9 & 0xff0fffff | 0x200000;
    lVar6 = FUN_002396d0();
    puVar9[9] = (uint)lVar6;
    if (lVar6 == 0) {
      puVar9[3] = 2;
      FUN_002396c8(uVar7);
    }
    FUN_0025c0c8(puVar9[9] + 0xc,param_1,0x40);
    FUN_002385e0(uVar7);
    uVar1 = *puVar9;
    iVar5 = DAT_002a3374 + (uVar1 >> 0x18) * 0x30;
    *(code **)(iVar5 + 0x28) = FUN_00237eb8;
    if (*(int *)(iVar5 + 8) != 0) {
      FUN_00237eb8(uVar1,*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0x14));
    }
    puVar2 = (uint *)*puVar2;
  }
  else {
    iVar8 = *(int *)(iVar5 + 4);
    while (lVar6 = FUN_0025bf10(param_1,iVar8 + 0xc,0x40), lVar6 != 0) {
      iVar5 = *(int *)(iVar5 + 0xc);
      if (iVar5 == 0) goto LAB_00238188;
      iVar8 = *(int *)(iVar5 + 4);
    }
    puVar2[9] = *(uint *)(iVar5 + 4);
    FUN_002385e0(puVar2);
  }
  return puVar2;
}

