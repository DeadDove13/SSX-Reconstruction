/* Ghidra pseudocode. PS2 address: 00139098. Not validated source. */

void FUN_00139098(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  
  FUN_001110f0((float)((int)(*param_2 << 0x12) >> 0x1a) / 31.0,*(undefined4 *)(param_1 + 0x10));
  FUN_00111248(0,(float)((int)(*param_2 << 6) >> 0x1a) / 31.0,*(undefined4 *)(param_1 + 0x10));
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(&DAT_002ac2c4 + *(int *)(*(int *)(iVar1 + 0x6cf4) + 8) * 0xc) == 1) {
    fVar4 = (float)FUN_00150e78(*(int *)(iVar1 + 0x6cf4));
    fVar4 = *(float *)(param_1 + 8) * fVar4;
    FUN_001129e8(*(float *)(param_1 + 0xc) - fVar4,*(int *)(param_1 + 0x10),
                 *(int *)(param_1 + 0x10) + 0x130);
    *(float *)(param_1 + 0xc) = fVar4;
  }
  else {
    if ((*param_2 & 0xc) != 0) {
      *(uint *)(*(int *)(iVar1 + 0x8584) + 0x718) = (int)*param_2 >> 3 & 1;
      FUN_0010b330(iVar1,0xe);
      uVar2 = *param_2;
      goto LAB_001391a8;
    }
    FUN_0010b330(iVar1,3);
  }
  uVar2 = *param_2;
LAB_001391a8:
  uVar3 = DAT_002c1d24;
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(int *)(param_1 + 0x10) + 0x210) != 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x10);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(uint *)(iVar1 + 0x284) = (uVar2 ^ 1) & 1;
  FUN_00107070(uVar3);
  return;
}

