/* Ghidra pseudocode. PS2 address: 002414d8. Not validated source. */

uint FUN_002414d8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + 7;
  if (-1 < param_2) {
    iVar1 = param_2;
  }
  return (uint)*(byte *)(param_1 + (iVar1 >> 3)) &
         1 << (param_2 + (iVar1 >> 3) * -8 & 0x1fU) & 0xffU;
}

