/* Ghidra pseudocode. PS2 address: 0023ba9c. Not validated source. */

/* WARNING: Instruction at (ram,0x0023baa4) overlaps instruction at (ram,0x0023baa0)
    */

void FUN_0023ba9c(undefined1 *param_1,uint param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 + -2;
  if (-1 < param_3 + -1) {
    while( true ) {
      *param_1 = (char)param_2;
      param_2 = param_2 >> 8;
      param_1 = param_1 + 1;
      if (iVar1 < 0) break;
      iVar1 = iVar1 + -1;
    }
  }
  return;
}

