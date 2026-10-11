/* Ghidra pseudocode. PS2 address: 00186c10. Not validated source. */

bool FUN_00186c10(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_2 + 8) + 0x34))
                    (param_2 + *(short *)(*(int *)(param_2 + 8) + 0x30));
  return *(int *)(param_1 + 0x20) == iVar1;
}

