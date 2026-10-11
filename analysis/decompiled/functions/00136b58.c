/* Ghidra pseudocode. PS2 address: 00136b58. Not validated source. */

int FUN_00136b58(int param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  *param_2 = 0;
  piVar2 = (int *)(param_1 + 0x100);
  iVar3 = 0;
  while( true ) {
    iVar1 = *piVar2;
    *param_2 = (uint)(iVar1 == 8);
    if ((iVar1 == 8) || (iVar3 = iVar3 + 1, iVar1 == 7)) break;
    piVar2 = piVar2 + 4;
    if (9 < iVar3) {
      return 0;
    }
  }
  return param_1 + 0x1a4;
}

