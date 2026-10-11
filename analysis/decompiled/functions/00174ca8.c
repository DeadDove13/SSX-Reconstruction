/* Ghidra pseudocode. PS2 address: 00174ca8. Not validated source. */

undefined8 FUN_00174ca8(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1;
  puVar3[0x10] = &DAT_002b0e58;
  puVar3[2] = 1;
  puVar3[1] = 0;
  puVar3[0x1a] = &DAT_002b1028;
  puVar3[3] = 0;
  puVar3[0x13] = 1;
  *puVar3 = 0;
  puVar3[5] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xe] = 0;
  puVar3[0x12] = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = 1;
  puVar3[0x17] = 1;
  puVar3[0x18] = 1;
  puVar3[0x16] = 0;
  puVar3[0x19] = 0;
  puVar3[4] = param_2;
  puVar3[6] = param_3;
  puVar3[0xb] = 0xf;
  puVar3[0x11] = s_Speaker_002c4950;
  FUN_00177718(puVar3 + 0x11);
  iVar2 = DAT_002c56e8;
  uVar1 = DAT_0027acc4;
  puVar3[0x1c] = &DAT_0027acc4;
  puVar3[0x1e] = s_Stereo_002c4960;
  puVar3[0x1d] = &DAT_002c4958;
  puVar3[0x1b] = uVar1;
  puVar3[0x1a] = &DAT_002b0ff0;
  FUN_001738a0(puVar3 + 0x1f,0x2c4968,iVar2 + 0x8b6d8,0,0,0);
  FUN_001738a0(puVar3 + 0x42,0x2c4970,DAT_002c56e8 + 0x8b6e0,0,0,0);
  FUN_001738a0(puVar3 + 0x65,0x2b0af0,DAT_002c56e8 + 0x8b6e4,0,0,0);
  FUN_001738a0(puVar3 + 0x88,0x2c4978,DAT_002c56e8 + 0x8b6dc,0,0,0);
  iVar2 = DAT_002c56e8;
  puVar3[0xb2] = 1;
  puVar3[0xad] = 1;
  puVar3[0xaf] = 1;
  puVar3[0xb1] = 1;
  puVar3[0xb4] = &DAT_002b1028;
  puVar3[0xac] = 0;
  puVar3[0xae] = 0;
  puVar3[0xb0] = 0;
  puVar3[0xb3] = 0;
  puVar3[0xab] = s_Preset_002c4980;
  FUN_00177718(puVar3 + 0xab);
  puVar3[0xb2] = 0;
  puVar3[0x26] = 0;
  puVar3[0x49] = 0;
  uVar1 = *(undefined4 *)(iVar2 + 0x8b6d4);
  puVar3[0xb6] = (undefined4 *)(iVar2 + 0x8b6d4);
  puVar3[0xb8] = &PTR_s_Tasty_Mix_002813d8;
  puVar3[0xb7] = 6;
  puVar3[0x6c] = 0;
  puVar3[0xb4] = &DAT_002b0f48;
  puVar3[0x8f] = 0;
  puVar3[0xb5] = uVar1;
  FUN_00174c68(param_1,puVar3 + 0xab);
  FUN_00174c68(param_1,puVar3 + 0x1f);
  FUN_00174c68(param_1,puVar3 + 0x42);
  FUN_00174c68(param_1,puVar3 + 0x65);
  FUN_00174c68(param_1,puVar3 + 0x88);
  return param_1;
}

