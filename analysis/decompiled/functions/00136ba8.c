/* Ghidra pseudocode. PS2 address: 00136ba8. Not validated source. */

void FUN_00136ba8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_0023bbd0(param_1 + 0x60,0,0x74);
  puVar2 = (undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
  iVar1 = 9;
  do {
    *puVar2 = 0;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + 4;
  } while (-1 < iVar1);
  FUN_0023bbd0(param_1 + 0xd4,0,0x28);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  return;
}

