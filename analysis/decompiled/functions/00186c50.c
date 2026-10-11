/* Ghidra pseudocode. PS2 address: 00186c50. Not validated source. */

bool FUN_00186c50(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*(int *)(param_2 + 8) + 0x34))
                    (param_2 + *(short *)(*(int *)(param_2 + 8) + 0x30));
  return *(uint *)(param_1 + 0x20) <= uVar1;
}

