/* Ghidra pseudocode. PS2 address: 00168a98. Not validated source. */

undefined8 FUN_00168a98(undefined8 param_1)

{
  undefined4 *puVar1;
  float fVar2;
  
  puVar1 = (undefined4 *)param_1;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0x28] = 0x3f800000;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[0xa1] = &DAT_002b02f0;
  puVar1[0x2b] = 0x3f800000;
  puVar1[0x29] = 0x3f800000;
  puVar1[0x2a] = 0x3f800000;
  FUN_001697d0(puVar1 + 0x46);
  puVar1[0x36] = 0;
  puVar1[0x35] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x39] = 0;
  puVar1[0x38] = 0;
  puVar1[0x37] = 0;
  puVar1[0x34] = 0;
  puVar1[0x33] = 0;
  puVar1[0x32] = 0;
  puVar1[0x31] = 0;
  puVar1[0x4f] = 0;
  puVar1[0x26] = 1;
  puVar1[0x2c] = 0;
  puVar1[0x55] = 0;
  fVar2 = (float)DAT_002859d4;
  puVar1[0x51] = 0x3f800000;
  puVar1[0x27] = 0x3f800000;
  puVar1[0x2e] = 0x3f800000;
  puVar1[0x3e] = 0x3f800000;
  puVar1[0x3d] = 0x3f800000;
  puVar1[0x3c] = 0x3f800000;
  puVar1[0x50] = 0;
  puVar1[0xa0] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x42] = 0;
  puVar1[0x93] = 0;
  puVar1[0x9e] = 0;
  puVar1[0x2d] = fVar2;
  puVar1[0x9f] = 1;
  puVar1[0x44] = 0;
  puVar1[0x92] = 10;
  puVar1[0x25] = 0;
  puVar1[0x24] = 0;
  FUN_00168e78(param_1);
  return param_1;
}

