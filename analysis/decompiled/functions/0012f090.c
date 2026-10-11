/* Ghidra pseudocode. PS2 address: 0012f090. Not validated source. */

void FUN_0012f090(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)((int)param_1 + 8);
    (**(code **)(iVar1 + 0xc))((int)param_1 + (int)*(short *)(iVar1 + 8),3);
  }
  return;
}

