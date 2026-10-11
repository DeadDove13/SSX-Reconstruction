/* Ghidra pseudocode. PS2 address: 001e52a8. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_001e52a8(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 auStack_a0 [14];
  
  iVar9 = (int)param_1;
  if (param_2 != 0) {
    *(int *)(iVar9 + 0x174) = iVar9 + 0x194;
    FUN_001a9700(iVar9 + 0x194);
  }
  FUN_001b48e8(param_1,0);
  iVar1 = *(int *)(iVar9 + 0x174);
  *(undefined8 **)(iVar1 + 0x18) = &DAT_002b7bd8;
  puVar2 = auStack_a0;
  puVar3 = &DAT_002b7bd8;
  if (param_2 == 0) {
    do {
      puVar8 = puVar3;
      puVar7 = puVar2;
      uVar4 = puVar8[1];
      uVar5 = puVar8[2];
      uVar6 = puVar8[3];
      *puVar7 = *puVar8;
      puVar7[1] = uVar4;
      puVar7[2] = uVar5;
      puVar7[3] = uVar6;
      puVar2 = puVar7 + 4;
      puVar3 = puVar8 + 4;
    } while (puVar8 + 4 != (undefined8 *)&DAT_002b7c38);
    uVar4 = puVar8[5];
    puVar7[4] = CONCAT62(_UNK_002b7c3a,DAT_002b7c38);
    puVar7[5] = uVar4;
    *(undefined8 **)(iVar1 + 0x18) = auStack_a0;
  }
  *(undefined **)(iVar9 + 0x170) = &DAT_002b7c48;
  *(undefined4 *)(iVar9 + 0x180) = 5;
  *(undefined4 *)(iVar9 + 400) = 0xffffffff;
  *(undefined4 *)(iVar9 + 0x188) = 0xffffffff;
  *(undefined4 *)(iVar9 + 0x18c) = 0;
  return param_1;
}

