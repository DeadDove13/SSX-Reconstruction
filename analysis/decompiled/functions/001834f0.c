/* Ghidra pseudocode. PS2 address: 001834f0. Not validated source. */

undefined8 FUN_001834f0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_0018ac50(iVar1 + 0x14);
  FUN_002191a8(iVar1 + 0x64c);
  *(undefined4 *)(iVar1 + 0x780) = 1;
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0x77c) = 1;
  *(undefined4 *)(iVar1 + 0x784) = 0;
  return param_1;
}

