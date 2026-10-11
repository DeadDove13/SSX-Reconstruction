/* Ghidra pseudocode. PS2 address: 0019b5e0. Not validated source. */

int FUN_0019b5e0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  param_1[2] = *param_2;
  iVar1 = param_2[1];
  iVar3 = param_2[2];
  *param_1 = iVar1;
  param_1[3] = iVar3;
  param_1[4] = param_2[3];
  param_1[5] = param_2[4];
  param_1[7] = param_2[5];
  param_1[8] = param_2[6];
  param_1[9] = param_2[7];
  param_1[10] = param_2[8];
  param_1[0xb] = param_2[9];
  iVar3 = param_2[10];
  piVar2 = param_2 + 0xb;
  param_1[6] = (int)piVar2;
  param_1[0xc] = iVar3;
  param_1[1] = (int)(piVar2 + param_1[2] * 4);
  return (int)(piVar2 + param_1[2] * 4) + (iVar1 * 0x10 - (int)param_2);
}

