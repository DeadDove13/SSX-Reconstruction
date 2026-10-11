/* Ghidra pseudocode. PS2 address: 0011cec0. Not validated source. */

undefined8 FUN_0011cec0(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  short sVar2;
  short sVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined8 uStack_140;
  short asStack_138 [4];
  undefined8 auStack_130 [6];
  short sStack_100;
  
  puVar8 = &uStack_140;
  puVar12 = (undefined4 *)param_1;
  if (param_2 != 0) {
    *puVar12 = puVar12 + 0x120;
    FUN_00104c08(puVar12 + 0x120);
  }
  puVar1 = (undefined4 *)*puVar12;
  puVar4 = &DAT_002a8898;
  *puVar1 = &DAT_002a8898;
  sVar3 = DAT_002a88d8;
  sVar2 = (short)DAT_002a88a0;
  if (param_2 == 0) {
    do {
      uVar9 = puVar4[1];
      uVar10 = puVar4[2];
      uVar11 = puVar4[3];
      *puVar8 = *puVar4;
      puVar8[1] = uVar9;
      puVar8[2] = uVar10;
      puVar8[3] = uVar11;
      puVar4 = puVar4 + 4;
      puVar8 = puVar8 + 4;
    } while (puVar4 != (undefined8 *)&UNK_002a8938);
    asStack_138[0] = (short)param_1 - ((short)puVar1 + -0x480);
    *puVar1 = &uStack_140;
    sStack_100 = sVar3 + asStack_138[0];
    asStack_138[0] = sVar2 + asStack_138[0];
  }
  FUN_0010e148(0,puVar12 + 3);
  iVar5 = 6;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  puVar12[0x78] = 0;
  iVar5 = 6;
  puVar12[0x79] = 0;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  puVar12[0xf1] = 0;
  iVar5 = 2;
  puVar12[0xf0] = 0;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  iVar5 = 2;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  puVar12[0xf2] = 0;
  puVar12[0xf3] = DAT_002c60b0;
  puVar12[0xf4] = DAT_002c60b4;
  puVar12[0xf5] = DAT_002c60b8;
  lVar7 = FUN_0023a448(0x2a8838,0xc360,0);
  if (lVar7 != 0) {
    FUN_0023bbd0(lVar7,0xffffffffdeadc0de,0xc360);
  }
  FUN_00117ba0(lVar7);
  iVar5 = (int)lVar7;
  FUN_00118c58(iVar5 + 0x1c20);
  FUN_00119d98(iVar5 + 0x4b60);
  FUN_0011b000(iVar5 + 0x8020);
  FUN_00117058(iVar5 + 0x99b0);
  FUN_00118320(iVar5 + 0xb600);
  puVar12[0xf8] = iVar5;
  lVar7 = FUN_0023a448(0x2a8848,0x180,0);
  if (lVar7 != 0) {
    FUN_0023bbd0(lVar7,0xffffffffdeadc0de,0x180);
  }
  uVar6 = FUN_001c1a08(lVar7);
  puVar12[2] = uVar6;
  lVar7 = FUN_0023a448(0x2a8858,0x260,0);
  if (lVar7 != 0) {
    FUN_0023bbd0(lVar7,0xffffffffdeadc0de,0x260);
  }
  uVar6 = FUN_0011c2f0(lVar7);
  puVar12[5] = 0;
  puVar12[0xf9] = uVar6;
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[0xfa] = 0;
  return param_1;
}

