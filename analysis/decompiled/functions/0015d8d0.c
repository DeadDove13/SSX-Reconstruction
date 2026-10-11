/* Ghidra pseudocode. PS2 address: 0015d8d0. Not validated source. */

void FUN_0015d8d0(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int aiStack_30 [4];
  
  puVar1 = (undefined4 *)param_1;
  if (puVar1[0x75] == 1) {
    *puVar1 = 1;
    aiStack_30[0] = 0;
    FUN_00162cd0(&uStack_90,puVar1 + 0x76,puVar1 + 0x293,aiStack_30);
    puVar1[0x11d] = uStack_90;
    puVar1[0x11e] = uStack_8c;
    puVar1[0x129] = uStack_60;
    puVar1[0x11f] = uStack_88;
    puVar1[0x12a] = uStack_5c;
    puVar1[0x120] = uStack_84;
    puVar1[299] = uStack_58;
    puVar1[0x121] = uStack_80;
    puVar1[0x122] = uStack_7c;
    puVar1[300] = uStack_54;
    puVar1[0x123] = uStack_78;
    puVar1[0x124] = uStack_74;
    puVar1[0x125] = uStack_70;
    puVar1[0x126] = uStack_6c;
    puVar1[0x127] = uStack_68;
    puVar1[0x128] = uStack_64;
    puVar1[0x12d] = uStack_50;
    puVar1[0x12e] = uStack_4c;
    puVar1[0x132] = uStack_3c;
    puVar1[0x12f] = uStack_48;
    puVar1[0x130] = uStack_44;
    puVar1[0x131] = uStack_40;
    FUN_0015bf40(param_1);
    FUN_0015c8c0(param_1);
    if (aiStack_30[0] != 0) {
      FUN_0015d890(param_1);
    }
  }
  return;
}

