/* Ghidra pseudocode. PS2 address: 0015b910. Not validated source. */

void FUN_0015b910(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0019c4d0(0x28acf8);
  uVar2 = *(undefined4 *)(iVar1 + 0x10);
  uVar3 = *(undefined4 *)(iVar1 + 0x14);
  *(undefined4 *)(param_1 + 0x41c) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(param_1 + 0x420) = uVar2;
  *(undefined4 *)(param_1 + 0x424) = uVar3;
  return;
}

