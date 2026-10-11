/* Ghidra pseudocode. PS2 address: 00156358. Not validated source. */

void FUN_00156358(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  *param_3 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 7);
  param_3[4] = 0;
  *(undefined1 *)(param_3 + 1) = uVar1;
  param_3[5] = 0;
  uVar2 = param_2[9];
  param_3[3] = param_2[0xd];
  param_3[2] = uVar2;
  return;
}

