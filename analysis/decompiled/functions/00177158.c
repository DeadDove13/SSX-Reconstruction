/* Ghidra pseudocode. PS2 address: 00177158. Not validated source. */

undefined8
FUN_00177158(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  float fVar2;
  
  puVar1 = (undefined4 *)param_3;
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[9] = &DAT_002b1028;
  *puVar1 = param_4;
  puVar1[7] = 1;
  puVar1[2] = 1;
  puVar1[4] = 1;
  puVar1[6] = 1;
  FUN_00177718();
  fVar2 = (float)DAT_002859d4;
  puVar1[0xe] = param_5;
  puVar1[0xf] = param_1;
  puVar1[0x10] = param_2;
  puVar1[0xc] = 0;
  puVar1[0xb] = &DAT_002b0f00;
  puVar1[9] = &DAT_002b0f10;
  puVar1[10] = fVar2 / 60.0;
  FUN_001743e0(param_3);
  return param_3;
}

