/* Ghidra pseudocode. PS2 address: 001772e8. Not validated source. */

undefined8
FUN_001772e8(undefined8 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  puVar2[1] = 0;
  puVar2[3] = 0;
  puVar2[5] = 0;
  puVar2[8] = 0;
  puVar2[9] = &DAT_002b1028;
  *puVar2 = param_2;
  puVar2[7] = 1;
  puVar2[2] = 1;
  puVar2[4] = 1;
  puVar2[6] = 1;
  FUN_00177718();
  uVar1 = *param_3;
  puVar2[0xb] = param_3;
  puVar2[9] = &DAT_002b0f48;
  puVar2[0xc] = param_4;
  puVar2[0xd] = param_5;
  puVar2[10] = uVar1;
  return param_1;
}

