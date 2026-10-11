/* Ghidra pseudocode. PS2 address: 00213018. Not validated source. */

void FUN_00213018(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + param_2 * 0x6c;
  iVar2 = param_1 + param_2 * 0x6c + 0x170;
  *(undefined4 *)(iVar1 + 0x170) = 0;
  *(undefined4 *)(iVar1 + 0x174) = 0;
  FUN_0025bbe4(iVar2 + 8,param_1 + 0xf6);
  FUN_0019a7f8(iVar2 + 0x28,param_1 + 0x6c);
  return;
}

