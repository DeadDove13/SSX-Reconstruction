/* Ghidra pseudocode. PS2 address: 0017a0a0. Not validated source. */

void FUN_0017a0a0(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x46c);
  iVar3 = FUN_00154c60(0x27a598,uVar1);
  *(undefined **)(param_1 + 0x78) = (&PTR_DAT_00283c60)[iVar3];
  uVar4 = FUN_00155178(0x27a598,uVar1);
  *(undefined4 *)(param_1 + 0xb4) = uVar4;
  iVar3 = FUN_00155bb0(0x27a598,uVar1);
  *(undefined **)(param_1 + 0xe8) = (&PTR_DAT_00283c40)[iVar3];
  iVar3 = FUN_00154c60(0x27a598,uVar1);
  iVar5 = FUN_00155b30(0x27a598,uVar1);
  puVar2 = (&PTR_DAT_00283c30)[*(int *)(iVar3 * 0xdc + iVar5 * 0x14 + 0x27c928)];
  *(int *)(param_1 + 0x158) = param_1 + 0x160;
  *(undefined **)(param_1 + 0x120) = puVar2;
  return;
}

