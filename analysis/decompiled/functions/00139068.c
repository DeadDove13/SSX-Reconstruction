/* Ghidra pseudocode. PS2 address: 00139068. Not validated source. */

void FUN_00139068(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x1ac) = 0;
  *(undefined4 *)(iVar1 + 0x1a4) = 0;
  *(undefined4 *)(iVar1 + 0x1a8) = 0;
  *(undefined4 *)(iVar1 + 0x194) = 0;
  *(undefined4 *)(iVar1 + 0x18c) = 0;
  *(undefined4 *)(iVar1 + 400) = 0;
  return;
}

