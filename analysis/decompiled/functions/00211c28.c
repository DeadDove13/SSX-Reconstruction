/* Ghidra pseudocode. PS2 address: 00211c28. Not validated source. */

bool FUN_00211c28(int param_1,undefined8 param_2)

{
  long lVar1;
  
  DAT_002c5820 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(int *)(param_1 + 0x5c) = (int)param_2;
  DAT_002c582c = 0;
  DAT_002c5824 = 0;
  lVar1 = FUN_00251780(param_2,0,0x2c5820,0x2c5824,0x2c582c);
  *(uint *)(param_1 + 0x4c) = (uint)(lVar1 == 0);
  *(undefined4 *)(param_1 + 0x60) = 5;
  return *(int *)(param_1 + 0x4c) != 0;
}

