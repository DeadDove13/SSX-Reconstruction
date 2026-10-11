/* Ghidra pseudocode. PS2 address: 001b6f30. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b6f30(undefined8 param_1,ulong param_2)

{
  int iVar1;
  short sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_a0;
  short sStack_98;
  short sStack_58;
  short sStack_50;
  
  iVar1 = *(int *)param_1;
  *(undefined8 **)(iVar1 + 0x18) = &DAT_002b5fb0;
  puVar3 = &uStack_a0;
  puVar4 = &DAT_002b5fb0;
  if (param_2 == 0) {
    do {
      puVar8 = puVar4;
      puVar7 = puVar3;
      uVar5 = puVar8[1];
      uVar6 = puVar8[2];
      uVar9 = puVar8[3];
      *puVar7 = *puVar8;
      puVar7[1] = uVar5;
      puVar7[2] = uVar6;
      puVar7[3] = uVar9;
      sStack_58 = (short)DAT_002b5ff8;
      sStack_98 = (short)DAT_002b5fb8;
      puVar3 = puVar7 + 4;
      puVar4 = puVar8 + 4;
    } while (puVar8 + 4 != (undefined8 *)&UNK_002b6010);
    sVar2 = (short)param_1 - ((short)iVar1 + -0x44);
    sStack_50 = DAT_002b6000 + sVar2;
    uVar5 = puVar8[5];
    puVar7[4] = _UNK_002b6010;
    sStack_98 = sStack_98 + sVar2;
    puVar7[5] = uVar5;
    sStack_58 = sStack_58 + sVar2;
    *(undefined8 **)(iVar1 + 0x18) = &uStack_a0;
  }
  if ((param_2 & 2) != 0) {
    FUN_001b7158(*(int *)param_1,0);
  }
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
  }
  return;
}

