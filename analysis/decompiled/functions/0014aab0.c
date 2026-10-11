/* Ghidra pseudocode. PS2 address: 0014aab0. Not validated source. */

void FUN_0014aab0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_00148120(0x3f800000,param_2);
  iVar1 = (int)param_2;
  if ((float)*(byte *)(*(int *)(*(int *)(iVar1 + 0x224) + 8) + 0x11) < *(float *)(iVar1 + 0x1e8)) {
    *(undefined4 *)(iVar1 + 0x10) = 0x3f800000;
  }
  return;
}

