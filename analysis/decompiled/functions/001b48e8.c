/* Ghidra pseudocode. PS2 address: 001b48e8. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_001b48e8(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 auStack_a0 [14];
  
  iVar9 = (int)param_1;
  if (param_2 != 0) {
    *(int *)(iVar9 + 0x174) = iVar9 + 0x180;
    FUN_001a9700(iVar9 + 0x180);
  }
  FUN_001d86c8(param_1);
  iVar1 = *(int *)(iVar9 + 0x174);
  *(undefined8 **)(iVar1 + 0x18) = &DAT_002b6020;
  puVar2 = auStack_a0;
  puVar3 = &DAT_002b6020;
  if (param_2 == 0) {
    do {
      puVar5 = puVar3;
      puVar4 = puVar2;
      uVar6 = puVar5[1];
      uVar7 = puVar5[2];
      uVar8 = puVar5[3];
      *puVar4 = *puVar5;
      puVar4[1] = uVar6;
      puVar4[2] = uVar7;
      puVar4[3] = uVar8;
      puVar2 = puVar4 + 4;
      puVar3 = puVar5 + 4;
    } while (puVar5 + 4 != (undefined8 *)&UNK_002b6080);
    uVar6 = puVar5[5];
    puVar4[4] = _UNK_002b6080;
    puVar4[5] = uVar6;
    *(undefined8 **)(iVar1 + 0x18) = auStack_a0;
  }
  *(undefined **)(iVar9 + 0x170) = &DAT_002b6090;
  *(undefined4 *)(iVar9 + 0x17c) = 0xb8;
  return param_1;
}

