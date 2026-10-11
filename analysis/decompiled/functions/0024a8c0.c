/* Ghidra pseudocode. PS2 address: 0024a8c0. Not validated source. */

int FUN_0024a8c0(int *param_1,int param_2,long param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3;
  if (param_3 == 0) {
    trap(7);
  }
  iVar1 = ((param_1[2] + iVar1 + -1) / iVar1) * iVar1;
  if ((uint)(*param_1 + param_1[1]) < (uint)(iVar1 + param_2)) {
    FUN_0024af98(0x2bf158);
    iVar1 = 0;
  }
  else {
    param_1[2] = iVar1 + param_2;
  }
  return iVar1;
}

