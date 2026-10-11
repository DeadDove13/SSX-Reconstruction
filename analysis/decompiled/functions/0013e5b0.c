/* Ghidra pseudocode. PS2 address: 0013e5b0. Not validated source. */

void FUN_0013e5b0(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = *param_2;
  iVar2 = *param_1;
  iVar3 = *(int *)(iVar2 + 0x8584);
  *(float *)(iVar3 + 0x504) = (float)((int)(uVar1 << 0x13) >> 0x1a) / 31.0;
  *(float *)(iVar3 + 0x508) = (float)((int)(uVar1 << 0x19) >> 0x1a) / 31.0;
  uVar4 = DAT_002c201c;
  if (((*param_2 & 1) == 0) && (*(int *)(iVar2 + 0x210) != 0)) {
    return;
  }
  *(uint *)(iVar2 + 0x284) = (*param_2 ^ 1) & 1;
  FUN_00107070(uVar4,iVar2);
  return;
}

