/* Ghidra pseudocode. PS2 address: 00175130. Not validated source. */

undefined8
FUN_00175130(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            long param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[1] = 0;
  puVar1[2] = 1;
  puVar1[0x10] = &DAT_002b0e90;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xe] = 0;
  puVar1[0x1c] = &DAT_002b1028;
  puVar1[0x14] = 0;
  puVar1[0x15] = 1;
  puVar1[0x16] = 0;
  puVar1[0x17] = 1;
  puVar1[0x18] = 0;
  puVar1[0x19] = 1;
  puVar1[0x1a] = 1;
  puVar1[0x1b] = 0;
  puVar1[4] = param_3;
  puVar1[6] = param_4;
  puVar1[0xb] = 0xf;
  puVar1[0x13] = "Save Game/Options";
  FUN_00177718(puVar1 + 0x13);
  puVar1[0x20] = 0;
  puVar1[0x1c] = &DAT_002b0fb8;
  puVar1[0x1f] = &DAT_002c4930;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x2a] = &DAT_002b1028;
  puVar1[0x22] = 0;
  puVar1[0x23] = 1;
  puVar1[0x24] = 0;
  puVar1[0x25] = 1;
  puVar1[0x26] = 0;
  puVar1[0x27] = 1;
  puVar1[0x28] = 1;
  puVar1[0x29] = 0;
  puVar1[0x21] = "Load Game/Options";
  FUN_00177718(puVar1 + 0x21);
  puVar1[0x2a] = &DAT_002b0fb8;
  puVar1[0x2e] = 0;
  puVar1[0x2d] = &DAT_002c4930;
  puVar1[0x38] = &DAT_002b1028;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 1;
  puVar1[0x32] = 0;
  puVar1[0x33] = 1;
  puVar1[0x34] = 0;
  puVar1[0x35] = 1;
  puVar1[0x36] = 1;
  puVar1[0x37] = 0;
  puVar1[0x2f] = "Load Replay";
  FUN_00177718(puVar1 + 0x2f);
  puVar1[0x17] = 1;
  puVar1[0x19] = 0;
  puVar1[0x25] = 1;
  puVar1[0x27] = 0;
  puVar1[0x38] = &DAT_002b0fb8;
  puVar1[0x3b] = &DAT_002c4930;
  puVar1[0x33] = 1;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  puVar1[0x35] = 0;
  FUN_00174c68(param_1,puVar1 + 0x13);
  FUN_00174c68(param_1,puVar1 + 0x21);
  FUN_00174c68(param_1,puVar1 + 0x2f);
  puVar1[0x12] = (undefined4 *)param_5;
  if (param_5 != 0) {
    *(undefined4 *)param_5 = 0;
  }
  puVar1[0x11] = param_2;
  return param_1;
}

