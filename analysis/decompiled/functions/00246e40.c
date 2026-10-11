/* Ghidra pseudocode. PS2 address: 00246e40. Not validated source. */

undefined4 FUN_00246e40(int param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(&DAT_002d185c + param_2 * 0x60 + param_1 * 0x300);
  FUN_002669d0(iVar1,0x100);
  iVar2 = (uint)(*(int *)(iVar1 + 0x58) < *(int *)(iVar1 + 0xd8)) * 0x80;
  puVar3 = (undefined4 *)(iVar1 + 0x60 + iVar2);
  FUN_0025a55c(param_3,iVar2 + iVar1,*puVar3);
  return *puVar3;
}

