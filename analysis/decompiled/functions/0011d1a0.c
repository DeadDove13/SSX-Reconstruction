/* Ghidra pseudocode. PS2 address: 0011d1a0. Not validated source. */

void FUN_0011d1a0(undefined8 param_1,ulong param_2)

{
  undefined4 *puVar1;
  short sVar2;
  short sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 uStack_d0;
  short asStack_c8 [4];
  undefined8 auStack_c0 [6];
  short sStack_90;
  
  puVar5 = &uStack_d0;
  puVar4 = &DAT_002a8898;
  puVar9 = (undefined4 *)param_1;
  puVar1 = (undefined4 *)*puVar9;
  *puVar1 = &DAT_002a8898;
  sVar3 = DAT_002a88d8;
  sVar2 = (short)DAT_002a88a0;
  if (param_2 == 0) {
    do {
      uVar6 = puVar4[1];
      uVar7 = puVar4[2];
      uVar8 = puVar4[3];
      *puVar5 = *puVar4;
      puVar5[1] = uVar6;
      puVar5[2] = uVar7;
      puVar5[3] = uVar8;
      puVar4 = puVar4 + 4;
      puVar5 = puVar5 + 4;
    } while (puVar4 != (undefined8 *)&UNK_002a8938);
    asStack_c8[0] = (short)param_1 - ((short)puVar1 + -0x480);
    *puVar1 = &uStack_d0;
    sStack_90 = sVar3 + asStack_c8[0];
    asStack_c8[0] = sVar2 + asStack_c8[0];
  }
  if (puVar9[0xf8] != 0) {
    FUN_0011ec40(puVar9[0xf8],3);
  }
  FUN_00103778(puVar9[2]);
  FUN_00103778(puVar9[0xf9]);
  puVar9[0xfa] = 0;
  puVar9[0xfc] = 0xffffffff;
  puVar9[0xfb] = 0xffffffff;
  if ((param_2 & 2) != 0) {
    FUN_00104f20(*puVar9,0);
  }
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
  }
  return;
}

