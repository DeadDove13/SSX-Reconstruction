/* Ghidra pseudocode. PS2 address: 00128870. Not validated source. */

bool FUN_00128870(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  iVar2 = *(int *)(*(int *)(param_1 + 0x28) + 0xcc);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0xc);
  puVar3 = (undefined4 *)(iVar2 * 8 + DAT_00299ce0);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x10);
  iVar2 = *(int *)*puVar3;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x14);
  *(int *)(param_1 + 0x60) = iVar2;
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar1 + 0x18);
  return iVar2 < 0x80;
}

