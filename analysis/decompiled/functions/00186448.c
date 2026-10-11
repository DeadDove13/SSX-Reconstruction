/* Ghidra pseudocode. PS2 address: 00186448. Not validated source. */

void FUN_00186448(int param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_3 * 0x34 + *(int *)(param_1 + 4));
  if ((*puVar1 & 1) == 0) {
    *param_2 = puVar1[1];
    *(uint **)(puVar1[1] + 4) = param_2;
    param_2[1] = (uint)(puVar1 + 1);
    puVar1[1] = (uint)param_2;
    return;
  }
  *param_2 = puVar1[7];
  *(uint **)(puVar1[7] + 4) = param_2;
  param_2[1] = (uint)(puVar1 + 7);
  puVar1[7] = (uint)param_2;
  return;
}

