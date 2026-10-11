/* Ghidra pseudocode. PS2 address: 00230278. Not validated source. */

void FUN_00230278(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  FUN_00231ce0(*param_2,param_1 + 0x10);
  uVar1 = param_2[2];
  *(undefined4 *)(param_1 + 0xd64) = 0;
  *(undefined4 *)(param_1 + 0xd68) = 0;
  *(undefined4 *)(param_1 + 0xd50) = 0;
  param_2[8] = &LAB_00230460;
  *(code **)(param_1 + 4) = FUN_002302e0;
  *(undefined4 *)(param_1 + 0xd60) = uVar1;
  FUN_00232a10(param_1 + 0xd50);
  return;
}

