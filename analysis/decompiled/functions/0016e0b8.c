/* Ghidra pseudocode. PS2 address: 0016e0b8. Not validated source. */

void FUN_0016e0b8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0016dd88();
  *(undefined4 *)(iVar1 + 0x80) = *param_3;
  *(undefined4 *)(iVar1 + 0x84) = param_3[1];
  *(undefined4 *)(iVar1 + 0x88) = param_3[2];
  *(undefined4 *)(iVar1 + 0x8c) = param_3[3];
  return;
}

