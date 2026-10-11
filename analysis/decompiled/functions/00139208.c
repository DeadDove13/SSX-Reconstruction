/* Ghidra pseudocode. PS2 address: 00139208. Not validated source. */

void FUN_00139208(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(iVar1 + 0x1ac) = 0;
  *(undefined4 *)(iVar1 + 0x1a4) = 0;
  *(undefined4 *)(iVar1 + 0x1a8) = 0;
  *(undefined4 *)(iVar1 + 0x1a0) = 0;
  *(undefined4 *)(iVar1 + 0x198) = 0;
  *(undefined4 *)(iVar1 + 0x19c) = 0;
  *(undefined4 *)(iVar1 + 0x194) = 0;
  *(undefined4 *)(iVar1 + 0x18c) = 0;
  *(undefined4 *)(iVar1 + 400) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

