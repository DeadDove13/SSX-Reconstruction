/* Ghidra pseudocode. PS2 address: 0012ae78. Not validated source. */

void FUN_0012ae78(int param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  
  FUN_0023bbd0(param_1 + 0x250,0,0x100);
  iVar1 = *(int *)(param_1 + 0x48);
  fVar4 = *(float *)(iVar1 + 0xc) * DAT_002c1b7c;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar1 + 8);
  *(float *)(param_1 + 0x44) = fVar4;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar1 + 0x10);
  *(int *)(param_1 + 0x3c) = (int)(*(float *)(iVar1 + 0x14) * 60.0);
  *(undefined4 *)(param_1 + 0x38) = 0;
  iVar1 = DAT_002859e4;
  uVar2 = *(uint *)(*(int *)(param_1 + 0x28) + 0xe8);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(uint *)(*(int *)(param_1 + 0x28) + 0xe8) = uVar2 & 0xfffffffb | 2;
  lVar3 = FUN_001bfe80(*(undefined4 *)(iVar1 + 0x34));
  *(int *)(param_1 + 0x4c) = (int)lVar3;
  if (lVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    *(uint *)(iVar1 + 0xe8) = *(uint *)(iVar1 + 0xe8) & 0xfffffffd | 4;
    FUN_001bff98(lVar3,iVar1,param_1 + 0x50,param_1 + 0x150);
    return;
  }
  return;
}

