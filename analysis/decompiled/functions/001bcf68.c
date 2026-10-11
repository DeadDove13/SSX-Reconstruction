/* Ghidra pseudocode. PS2 address: 001bcf68. Not validated source. */

void FUN_001bcf68(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (*(int *)(DAT_002859e4 + 0x298) == 1) {
    DAT_002c512c = 0;
  }
  else if ((*(int *)(DAT_002859e4 + 0x298) == 2) && (lVar1 = FUN_00188090(), lVar1 == 0)) {
    if (param_2 == 0) {
      DAT_002c512c = 1;
    }
    else if (param_2 == 1) {
      DAT_002c512c = 2;
    }
  }
  return;
}

