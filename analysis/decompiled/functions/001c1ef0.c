/* Ghidra pseudocode. PS2 address: 001c1ef0. Not validated source. */

void FUN_001c1ef0(float param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  
  fVar1 = DAT_002c35a0;
  fVar4 = *(float *)(param_2 + 0x4b8);
  iVar2 = 7;
  *(float *)(param_2 + 0x4b4) = param_1;
  piVar3 = (int *)(param_2 + 0x10);
  do {
    *piVar3 = (int)(param_1 * ((fVar4 * fVar4 * fVar4) / fVar1));
    iVar2 = iVar2 + -1;
    piVar3 = piVar3 + 0x24;
  } while (-1 < iVar2);
  return;
}

