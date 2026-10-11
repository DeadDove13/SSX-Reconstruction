/* Ghidra pseudocode. PS2 address: 00192200. Not validated source. */

void FUN_00192200(long param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  lVar2 = FUN_0018e708(*(undefined4 *)((int)param_1 + 4));
  lVar3 = FUN_0018dd28(param_1);
  if (lVar3 == 0) {
    uStack_a4 = param_2[3];
    uStack_b0 = *param_2;
    uStack_ac = param_2[1];
    uStack_a8 = param_2[2];
    if (param_1 != lVar2) {
      puVar1 = &DAT_002cc240;
    }
    else {
      puVar1 = &DAT_002cc230;
    }
    uStack_a0 = *puVar1;
    uStack_9c = puVar1[1];
    uStack_98 = puVar1[2];
    if (param_1 != lVar2) {
      puVar1 = &DAT_002cc210;
    }
    else {
      puVar1 = &DAT_002cc200;
    }
    uStack_90 = *puVar1;
    uStack_8c = puVar1[1];
    uStack_88 = puVar1[2];
    FUN_00192050(param_1,&uStack_b0,param_3,param_4,param_5,&uStack_a0,&uStack_90);
  }
  else {
    uStack_a4 = param_2[3];
    uStack_b0 = *param_2;
    uStack_ac = param_2[1];
    uStack_a8 = param_2[2];
    uStack_a0 = DAT_002cc220;
    uStack_9c = DAT_002cc224;
    uStack_98 = DAT_002cc228;
    uStack_90 = DAT_002cc1f0;
    uStack_8c = DAT_002cc1f4;
    uStack_88 = DAT_002cc1f8;
    uStack_80 = CONCAT44(DAT_002cc1f4,DAT_002cc1f0);
    uStack_78 = DAT_002cc1f8;
    FUN_00192050(param_1,&uStack_b0,param_3,param_4,param_5,&uStack_a0,&uStack_80);
  }
  return;
}

