/* Ghidra pseudocode. PS2 address: 00223530. Not validated source. */

undefined8 FUN_00223530(int *param_1,float *param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = *param_1;
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(short *)(iVar1 + 0x42) == 0) {
      trap(7);
    }
    fVar3 = param_2[1];
    fVar4 = *(float *)(iVar1 + 0x10);
    fVar5 = (float)(*(int *)(iVar1 + 0x24) / (int)*(short *)(iVar1 + 0x42));
    *param_3 = (int)((*param_2 - *(float *)(iVar1 + 0xc)) / fVar5);
    *param_4 = (int)((fVar3 - fVar4) / fVar5);
    uVar2 = FUN_002235b8(param_1,*param_3);
  }
  return uVar2;
}

