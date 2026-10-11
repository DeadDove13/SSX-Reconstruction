/* Ghidra pseudocode. PS2 address: 0010c658. Not validated source. */

void FUN_0010c658(undefined8 param_1,ulong param_2)

{
  undefined4 *puVar1;
  short sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_d0;
  short asStack_c8 [4];
  undefined8 auStack_c0 [18];
  
  puVar4 = &uStack_d0;
  puVar3 = &DAT_002a7630;
  puVar1 = (undefined4 *)*(undefined4 *)param_1;
  *puVar1 = &DAT_002a7630;
  sVar2 = DAT_002a7638;
  if (param_2 == 0) {
    do {
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      *puVar4 = *puVar3;
      puVar4[1] = uVar5;
      puVar4[2] = uVar6;
      puVar4[3] = uVar7;
      puVar3 = puVar3 + 4;
      puVar4 = puVar4 + 4;
    } while (puVar3 != &DAT_002a76d0);
    *puVar1 = &uStack_d0;
    asStack_c8[0] = sVar2 + ((short)param_1 - ((short)puVar1 + -0x10));
  }
  if ((param_2 & 2) != 0) {
    FUN_00104f20(*(undefined4 *)param_1,0);
  }
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
  }
  return;
}

