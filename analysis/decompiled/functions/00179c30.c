/* Ghidra pseudocode. PS2 address: 00179c30. Not validated source. */

void FUN_00179c30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x46c);
  iVar2 = FUN_00154c60(0x27a598,uVar1);
  *(undefined **)(param_1 + 0x78) = (&PTR_DAT_00283c60)[iVar2];
  uVar3 = FUN_00155178(0x27a598,uVar1);
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  iVar2 = FUN_00155bb0(0x27a598,uVar1);
  *(undefined **)(param_1 + 0xe8) = (&PTR_DAT_00283c40)[iVar2];
  iVar2 = FUN_00154c60(0x27a598,uVar1);
  iVar4 = FUN_00155b30(0x27a598,uVar1);
  *(undefined **)(param_1 + 0x120) =
       (&PTR_DAT_00283c30)[*(int *)(iVar2 * 0xdc + iVar4 * 0x14 + 0x27c928)];
  return;
}

