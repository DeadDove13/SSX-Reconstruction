/* Ghidra pseudocode. PS2 address: 00176858. Not validated source. */

undefined8
FUN_00176858(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  
  puVar1 = (undefined4 *)param_3;
  puVar2 = puVar1 + 0x11;
  puVar1[1] = 0;
  puVar1[2] = 1;
  puVar1[0x10] = &DAT_002b0db0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xe] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x16] = 0;
  puVar1[0x19] = 0;
  puVar1[4] = param_4;
  puVar1[6] = param_5;
  puVar1[0xb] = 0xf;
  puVar1[0x1a] = &DAT_002b1028;
  puVar1[0x11] = s_Credits_002c49e8;
  puVar1[0x18] = 1;
  puVar1[0x13] = 1;
  puVar1[0x15] = 1;
  puVar1[0x17] = 1;
  FUN_00177718(puVar2);
  fVar3 = (float)DAT_002859d4;
  puVar1[0x1c] = &DAT_002b05d0;
  puVar1[0x1f] = s__Lead_Programmer_Jon_Spencer__Le_00281410;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = &DAT_002b0f00;
  puVar1[0x1a] = &DAT_002b0f10;
  puVar1[0x1b] = fVar3 / 60.0;
  puVar1[0x20] = param_1;
  puVar1[0x21] = param_2;
  FUN_001743e0(puVar2);
  FUN_00174c68(param_3,puVar2);
  FUN_0016eb08(puVar1[4],0x170);
  FUN_0016eae0(puVar1[4],0x165);
  FUN_0016eb08(puVar1[4],0x319);
  FUN_0016eb08(puVar1[4],0x318);
  FUN_0016eb08(puVar1[4],0x362);
  FUN_0016eb08(puVar1[4],0x363);
  return param_3;
}

