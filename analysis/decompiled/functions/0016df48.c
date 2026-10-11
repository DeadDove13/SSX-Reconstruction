/* Ghidra pseudocode. PS2 address: 0016df48. Not validated source. */

void FUN_0016df48(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = FUN_0016dd88();
  fVar2 = *(float *)(iVar1 + 0x84);
  fVar3 = *(float *)(iVar1 + 0x80);
  *param_3 = (int)*(float *)(iVar1 + 0x88);
  *param_4 = (int)fVar2;
  *param_5 = (int)fVar3;
  return;
}

