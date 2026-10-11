/* Ghidra pseudocode. PS2 address: 0012a310. Not validated source. */

void FUN_0012a310(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  
  FUN_0023bbd0(param_1 + 0x270,0,0x100);
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x50) + 0xc);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(*(int *)(param_1 + 0x50) + 8);
  *(undefined4 *)(param_1 + 0x260) = 0;
  uVar1 = *(uint *)(*(int *)(param_1 + 0x28) + 0xe8);
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  if ((uVar1 & 0x400) == 0) {
    uVar5 = FUN_002237f8(0x299cc8,*(undefined4 *)(*(int *)(param_1 + 0x28) + 200));
    *(undefined4 *)(param_1 + 0x260) = uVar5;
  }
  if ((*(uint *)(*(int *)(param_1 + 0x28) + 0xe8) & 0x200) == 0) {
    uVar5 = FUN_002237f8(0x299cc8,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0xc4));
    *(undefined4 *)(param_1 + 0x264) = uVar5;
    iVar2 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x28);
  }
  iVar3 = DAT_002859e4;
  *(uint *)(iVar2 + 0xe8) = *(uint *)(iVar2 + 0xe8) & 0xfffffffb | 2;
  lVar4 = FUN_001bfe80(*(undefined4 *)(iVar3 + 0x34));
  *(int *)(param_1 + 0x54) = (int)lVar4;
  if (lVar4 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    *(uint *)(iVar2 + 0xe8) = *(uint *)(iVar2 + 0xe8) & 0xfffffffd | 4;
    FUN_001bff98(lVar4,iVar2,param_1 + 0x60,param_1 + 0x160);
    *(float *)(param_1 + 0x4c) =
         *(float *)(param_1 + 0x4c) *
         (1.0 / *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x28) + 0xcc) * 8 + DAT_00299ce0) +
                          0x10)) * 32768.0;
  }
  return;
}

