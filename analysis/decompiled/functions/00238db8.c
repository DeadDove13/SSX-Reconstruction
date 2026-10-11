/* Ghidra pseudocode. PS2 address: 00238db8. Not validated source. */

int FUN_00238db8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1000;
  if (param_2 != 0) {
    iVar3 = param_2;
  }
  iVar2 = 8;
  if (param_1 != 0) {
    iVar2 = param_1;
  }
  iVar1 = 0x20;
  if (param_3 != 0) {
    iVar1 = param_3;
  }
  return iVar1 * 0x30 + 0x40 + (iVar2 + iVar3) * 0x4c;
}

