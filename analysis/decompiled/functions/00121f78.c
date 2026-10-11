/* Ghidra pseudocode. PS2 address: 00121f78. Not validated source. */

void FUN_00121f78(undefined8 param_1,ulong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 uStack_d0;
  short asStack_c8 [4];
  undefined8 auStack_c0 [6];
  short sStack_90;
  short sStack_88;
  short sStack_80;
  short sStack_60;
  
  puVar2 = &uStack_d0;
  puVar7 = (undefined4 *)param_1;
  puVar7[0x21c] = &DAT_002a89b8;
  puVar1 = (undefined4 *)*puVar7;
  pcVar3 = (char *)&DAT_002a8a18;
  *puVar1 = &DAT_002a8a18;
  if (param_2 == 0) {
    do {
      uVar4 = *(undefined8 *)(pcVar3 + 8);
      uVar5 = *(undefined8 *)(pcVar3 + 0x10);
      uVar6 = *(undefined8 *)(pcVar3 + 0x18);
      *puVar2 = *(undefined8 *)pcVar3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      pcVar3 = pcVar3 + 0x20;
      puVar2 = puVar2 + 4;
    } while (pcVar3 != "DeadNode");
    sStack_80 = (short)param_1 - ((short)puVar1 + -0x8e0);
    sStack_60 = DAT_002a8a88 + sStack_80;
    asStack_c8[0] = DAT_002a8a20 + sStack_80;
    sStack_90 = DAT_002a8a58 + sStack_80;
    sStack_88 = DAT_002a8a60 + sStack_80;
    sStack_80 = DAT_002a8a68 + sStack_80;
    *puVar1 = &uStack_d0;
  }
  FUN_0010b360(param_1,0);
  if ((param_2 & 2) != 0) {
    FUN_00104f20(*puVar7,0);
  }
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
  }
  return;
}

