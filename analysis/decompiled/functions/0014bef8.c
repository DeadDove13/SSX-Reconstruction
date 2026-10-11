/* Ghidra pseudocode. PS2 address: 0014bef8. Not validated source. */

int FUN_0014bef8(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0x1a6;
  if (param_4 != *(int *)(param_2 + 0x1dc)) {
    iVar1 = param_4;
  }
  FUN_001eacb0(param_3);
  return iVar1;
}

