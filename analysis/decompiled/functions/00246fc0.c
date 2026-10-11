/* Ghidra pseudocode. PS2 address: 00246fc0. Not validated source. */

undefined4 FUN_00246fc0(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_002d185c + param_2 * 0x60 + param_1 * 0x300);
  FUN_002669d0(iVar1,0x100);
  *(undefined1 *)(iVar1 + (uint)(*(int *)(iVar1 + 0x58) < *(int *)(iVar1 + 0xd8)) * 0x80 + 0x71) =
       param_3;
  return 1;
}

