/* Ghidra pseudocode. PS2 address: 0011fcb8. Not validated source. */

undefined8 FUN_0011fcb8(undefined8 param_1,long param_2,undefined2 param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 uStack_e0;
  short asStack_d8 [4];
  undefined8 auStack_d0 [6];
  short sStack_a0;
  short sStack_98;
  short sStack_90;
  short sStack_70;
  
  puVar3 = &uStack_e0;
  puVar7 = (undefined4 *)param_1;
  if (param_2 != 0) {
    puVar1 = puVar7 + 0x238;
    puVar7[0x219] = puVar1;
    puVar7[0x213] = puVar1;
    puVar7[0x20c] = puVar1;
    puVar7[0x208] = puVar1;
    puVar7[0x204] = puVar1;
    puVar7[500] = puVar1;
    puVar7[0x1f0] = puVar1;
    puVar7[0x1ec] = puVar1;
    puVar7[0x1d1] = puVar1;
    puVar7[0x1c8] = puVar1;
    puVar7[0x1c3] = puVar1;
    puVar7[0x1bf] = puVar1;
    puVar7[0x1b8] = puVar1;
    puVar7[0x1b4] = puVar1;
    puVar7[0x1b0] = puVar1;
    puVar7[0x1ad] = puVar1;
    puVar7[0x1a4] = puVar1;
    puVar7[0x1a0] = puVar1;
    puVar7[0x198] = puVar1;
    puVar7[0x194] = puVar1;
    puVar7[400] = puVar1;
    puVar7[0x188] = puVar1;
    puVar7[0x180] = puVar1;
    puVar7[0x17f] = puVar1;
    puVar7[0x154] = puVar1;
    puVar7[0x138] = puVar1;
    puVar7[0x134] = puVar1;
    puVar7[0x12f] = puVar1;
    puVar7[0x128] = puVar1;
    *puVar7 = puVar1;
    FUN_00104c08(puVar1);
  }
  FUN_00107e38(param_1,0,param_3);
  puVar1 = (undefined4 *)*puVar7;
  pcVar2 = (char *)&DAT_002a8a18;
  *puVar1 = &DAT_002a8a18;
  if (param_2 == 0) {
    do {
      uVar4 = *(undefined8 *)(pcVar2 + 8);
      uVar5 = *(undefined8 *)(pcVar2 + 0x10);
      uVar6 = *(undefined8 *)(pcVar2 + 0x18);
      *puVar3 = *(undefined8 *)pcVar2;
      puVar3[1] = uVar4;
      puVar3[2] = uVar5;
      puVar3[3] = uVar6;
      pcVar2 = pcVar2 + 0x20;
      puVar3 = puVar3 + 4;
    } while (pcVar2 != "DeadNode");
    sStack_90 = (short)param_1 - ((short)puVar1 + -0x8e0);
    sStack_70 = DAT_002a8a88 + sStack_90;
    asStack_d8[0] = DAT_002a8a20 + sStack_90;
    sStack_a0 = DAT_002a8a58 + sStack_90;
    sStack_98 = DAT_002a8a60 + sStack_90;
    sStack_90 = DAT_002a8a68 + sStack_90;
    *puVar1 = &uStack_e0;
  }
  puVar7[0x21c] = &DAT_002a89b8;
  FUN_0011fe48(param_1);
  return param_1;
}

