/* Ghidra pseudocode. PS2 address: 001d5bc8. Not validated source. */

bool FUN_001d5bc8(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_1 == param_2) {
    bVar1 = param_1[1] == param_3;
  }
  return bVar1;
}

