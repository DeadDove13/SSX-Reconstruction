/* Ghidra pseudocode. PS2 address: 0018ea28. Not validated source. */

void FUN_0018ea28(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1[*param_1] + 0x114);
  (**(code **)(iVar1 + 0x2c))(param_1[*param_1] + (int)*(short *)(iVar1 + 0x28));
  return;
}

