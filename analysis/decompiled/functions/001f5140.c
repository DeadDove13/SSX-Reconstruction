/* Ghidra pseudocode. PS2 address: 001f5140. Not validated source. */

void FUN_001f5140(int *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0x3fff;
  if (param_2 < 0x4000) {
    lVar1 = param_2;
  }
  if (lVar1 < 1) {
    lVar1 = 1;
  }
  if (*param_1 != 1) {
    if (*param_1 == 2) {
      FUN_00209cb0(param_1[3],lVar1);
      return;
    }
    return;
  }
  FUN_002287a0(param_1[1],lVar1);
  return;
}

