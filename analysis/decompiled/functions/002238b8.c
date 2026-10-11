/* Ghidra pseudocode. PS2 address: 002238b8. Not validated source. */

int FUN_002238b8(int param_1,ushort *param_2)

{
  int iVar1;
  
  if (*param_2 == 0xffff) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((uint)*param_2 * 8 + *(int *)(param_1 + 0xc));
  }
  return *(int *)(iVar1 + 0x1c) + (uint)param_2[1] * 0x80;
}

