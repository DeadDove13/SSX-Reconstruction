/* Ghidra pseudocode. PS2 address: 001730e0. Not validated source. */

void FUN_001730e0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  while( true ) {
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0xc) = (uint)(param_2 == 0);
      param_2 = param_2 + -1;
    }
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) break;
    iVar1 = *(int *)(param_1 + 8);
  }
  return;
}

