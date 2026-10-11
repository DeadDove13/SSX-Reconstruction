/* Ghidra pseudocode. PS2 address: 001337b0. Not validated source. */

void FUN_001337b0(undefined8 param_1,ulong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 uStack_d0;
  short asStack_c8 [4];
  undefined8 auStack_c0 [6];
  short sStack_90;
  short sStack_80;
  short sStack_70;
  short sStack_68;
  short sStack_58;
  short sStack_50;
  short sStack_48;
  short sStack_40;
  
  puVar2 = &uStack_d0;
  puVar7 = (undefined4 *)param_1;
  puVar7[0x21c] = &DAT_002aacd0;
  puVar1 = (undefined4 *)*puVar7;
  puVar3 = &DAT_002aac30;
  *puVar1 = &DAT_002aac30;
  if (param_2 == 0) {
    do {
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      *puVar2 = *puVar3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar3 = puVar3 + 4;
      puVar2 = puVar2 + 4;
    } while (puVar3 != (undefined8 *)&DAT_002aacd0);
    sStack_48 = (short)param_1 - ((short)puVar1 + -0x8b0);
    sStack_40 = DAT_002aacc0 + sStack_48;
    asStack_c8[0] = DAT_002aac38 + sStack_48;
    sStack_90 = DAT_002aac70 + sStack_48;
    sStack_80 = DAT_002aac80 + sStack_48;
    sStack_70 = DAT_002aac90 + sStack_48;
    sStack_68 = DAT_002aac98 + sStack_48;
    sStack_58 = DAT_002aaca8 + sStack_48;
    sStack_50 = DAT_002aacb0 + sStack_48;
    sStack_48 = DAT_002aacb8 + sStack_48;
    *puVar1 = &uStack_d0;
  }
  if (puVar7[0x22a] != 0) {
    FUN_00196140(*(undefined4 *)(DAT_002859e4 + 0x38));
  }
  if (puVar7[0x22b] != 0) {
    FUN_00195ec8(*(undefined4 *)(DAT_002859e4 + 0x38));
  }
  FUN_00103778(puVar7[0x229]);
  FUN_0010b360(param_1,0);
  if ((param_2 & 2) != 0) {
    FUN_00104f20(*puVar7,0);
  }
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
  }
  return;
}

