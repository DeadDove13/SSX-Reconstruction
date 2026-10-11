/* Ghidra pseudocode. PS2 address: 00139d58. Not validated source. */

void FUN_00139d58(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 0x1a8) = DAT_002c1d5c;
  *(undefined4 *)(iVar1 + 0x1ac) = 0;
  iVar2 = *(int *)(iVar1 + 0x6cf4);
  *(undefined4 *)(iVar1 + 0x194) = 0;
  *(undefined4 *)(iVar1 + 0x18c) = 0;
  *(undefined4 *)(iVar1 + 400) = 0;
  uVar3 = FUN_001486c8(iVar2 + 0x20);
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(iVar2 + 8) = uVar3;
  *(undefined4 *)(iVar1 + 0x170) = 0;
  FUN_0014cd18(*(undefined4 *)(iVar1 + 0x6cf4),0x46,0,5);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

