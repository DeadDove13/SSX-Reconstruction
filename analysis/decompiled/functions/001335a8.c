/* Ghidra pseudocode. PS2 address: 001335a8. Not validated source. */

undefined8 FUN_001335a8(undefined8 param_1,long param_2,undefined2 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 uStack_e0;
  short asStack_d8 [4];
  undefined8 auStack_d0 [6];
  short sStack_a0;
  short sStack_90;
  short sStack_80;
  short sStack_78;
  short sStack_68;
  short sStack_60;
  short sStack_58;
  short sStack_50;
  
  puVar2 = &uStack_e0;
  piVar9 = (int *)param_1;
  if (param_2 != 0) {
    piVar1 = piVar9 + 0x22c;
    piVar9[0x219] = (int)piVar1;
    piVar9[0x213] = (int)piVar1;
    piVar9[0x20c] = (int)piVar1;
    piVar9[0x208] = (int)piVar1;
    piVar9[0x204] = (int)piVar1;
    piVar9[500] = (int)piVar1;
    piVar9[0x1f0] = (int)piVar1;
    piVar9[0x1ec] = (int)piVar1;
    piVar9[0x1d1] = (int)piVar1;
    piVar9[0x1c8] = (int)piVar1;
    piVar9[0x1c3] = (int)piVar1;
    piVar9[0x1bf] = (int)piVar1;
    piVar9[0x1b8] = (int)piVar1;
    piVar9[0x1b4] = (int)piVar1;
    piVar9[0x1b0] = (int)piVar1;
    piVar9[0x1ad] = (int)piVar1;
    piVar9[0x1a4] = (int)piVar1;
    piVar9[0x1a0] = (int)piVar1;
    piVar9[0x198] = (int)piVar1;
    piVar9[0x194] = (int)piVar1;
    piVar9[400] = (int)piVar1;
    piVar9[0x188] = (int)piVar1;
    piVar9[0x180] = (int)piVar1;
    piVar9[0x17f] = (int)piVar1;
    piVar9[0x154] = (int)piVar1;
    piVar9[0x138] = (int)piVar1;
    piVar9[0x134] = (int)piVar1;
    piVar9[0x12f] = (int)piVar1;
    piVar9[0x128] = (int)piVar1;
    *piVar9 = (int)piVar1;
    FUN_00104c08(piVar1);
  }
  FUN_00107e38(param_1,0,param_3);
  puVar5 = &DAT_002aac30;
  *(undefined8 **)*piVar9 = &DAT_002aac30;
  if (param_2 == 0) {
    do {
      uVar6 = puVar5[1];
      uVar7 = puVar5[2];
      uVar8 = puVar5[3];
      *puVar2 = *puVar5;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      puVar5 = puVar5 + 4;
      puVar2 = puVar2 + 4;
    } while (puVar5 != (undefined8 *)&DAT_002aacd0);
    sStack_58 = (short)param_1 - ((short)*piVar9 + -0x8b0);
    sStack_50 = DAT_002aacc0 + sStack_58;
    asStack_d8[0] = DAT_002aac38 + sStack_58;
    sStack_a0 = DAT_002aac70 + sStack_58;
    sStack_90 = DAT_002aac80 + sStack_58;
    sStack_80 = DAT_002aac90 + sStack_58;
    sStack_78 = DAT_002aac98 + sStack_58;
    sStack_68 = DAT_002aaca8 + sStack_58;
    sStack_60 = DAT_002aacb0 + sStack_58;
    sStack_58 = DAT_002aacb8 + sStack_58;
    *(undefined8 **)*piVar9 = &uStack_e0;
  }
  iVar4 = DAT_002859e4;
  piVar9[0x21c] = (int)&DAT_002aacd0;
  if (*(int *)(iVar4 + 0x38) == 0) {
    piVar9[0x22a] = 0;
    piVar9[0x22b] = 0;
  }
  else {
    iVar3 = FUN_001960a8();
    iVar4 = DAT_002859e4;
    piVar9[0x22a] = iVar3;
    iVar4 = FUN_00195e20(*(undefined4 *)(iVar4 + 0x38),
                         *(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x80));
    piVar9[0x22b] = iVar4;
  }
  *(undefined4 *)(*piVar9 + 0x340) = 1;
  return param_1;
}

