/* Ghidra pseudocode. PS2 address: 001f8c70. Not validated source. */

undefined4 FUN_001f8c70(float param_1,undefined8 param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(DAT_002859e4 + 0x298) <= iVar2) {
      return 0;
    }
    iVar1 = DAT_002859e4 + iVar2 * 0x80 + 0x90;
    fVar4 = *(float *)(iVar1 + 0x20) - *param_3;
    fVar3 = *(float *)(iVar1 + 0x24) - param_3[1];
    fVar5 = *(float *)(iVar1 + 0x28) - param_3[2];
    if ((fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5 < param_1 * 100.0 * param_1 * 100.0) &&
       (0.0 < fVar5)) break;
    iVar2 = iVar2 + 1;
  }
  return 1;
}

