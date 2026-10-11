/* Ghidra pseudocode. PS2 address: 00246dc0. Not validated source. */

int FUN_00246dc0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_002d185c + param_2 * 0x60 + param_1 * 0x300);
  FUN_00264e78(iVar1,iVar1 + 0x100);
  return iVar1 + (uint)(*(int *)(iVar1 + 0x58) < *(int *)(iVar1 + 0xd8)) * 0x80;
}

