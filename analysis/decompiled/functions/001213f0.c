/* Ghidra pseudocode. PS2 address: 001213f0. Not validated source. */

undefined4 FUN_001213f0(int *param_1,int param_2)

{
  int *piVar1;
  
  if (DAT_0027ba88 == 0) {
    return 1;
  }
  piVar1 = (int *)(*param_1 + 0x38 + param_2 * 0x10);
  if ((float)*piVar1 <= (float)*(byte *)(*(int *)(*param_1 + 0x394) + 0x1c) * 0.0) {
    return 0;
  }
  *piVar1 = 0;
  return 1;
}

