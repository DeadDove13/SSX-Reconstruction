/* Ghidra pseudocode. PS2 address: 0020d9b8. Not validated source. */

void FUN_0020d9b8(void)

{
  int iVar1;
  
  if (DAT_002c57c8 != 0) {
    iVar1 = 0;
    if (0 < DAT_002c57d0) {
      do {
        if (*(int *)(iVar1 * 4 + DAT_002c57c8) != 0) {
          FUN_00103710();
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_002c57d0);
    }
    if (DAT_002c57c8 == 0) {
      DAT_002c57c8 = 0;
    }
    else {
      FUN_00103710();
      DAT_002c57c8 = 0;
    }
  }
  if (DAT_002c57cc != 0) {
    FUN_00103710();
    DAT_002c57cc = 0;
  }
  if (DAT_002c57d8 != 0) {
    iVar1 = 0;
    if (0 < DAT_002c57e0) {
      do {
        if (*(int *)(iVar1 * 4 + DAT_002c57d8) != 0) {
          FUN_00103710();
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_002c57e0);
    }
    if (DAT_002c57d8 == 0) {
      DAT_002c57d8 = 0;
    }
    else {
      FUN_00103710();
      DAT_002c57d8 = 0;
    }
  }
  if (DAT_002c57dc != 0) {
    FUN_00103710();
    DAT_002c57dc = 0;
  }
  return;
}

