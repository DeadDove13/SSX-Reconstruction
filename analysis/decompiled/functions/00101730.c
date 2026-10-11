/* Ghidra pseudocode. PS2 address: 00101730. Not validated source. */

void FUN_00101730(int param_1,int param_2)

{
  long lVar1;
  
  if (DAT_0027ba88 == 3) {
    if (*(int *)(param_2 + 0x80) == 1) {
      *(undefined4 *)(param_1 + 8) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 8) = 2;
    }
  }
  else if (DAT_0027ba88 < 4) {
    if (DAT_0027ba88 == 2) {
      if (*(int *)(param_2 + 0x80) == 1) {
        *(undefined4 *)(param_1 + 8) = 4;
      }
      else {
        *(undefined4 *)(param_1 + 8) = 5;
      }
    }
    else {
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  else if (DAT_0027ba88 == 4) {
    lVar1 = FUN_00154078();
    if (lVar1 == 1) {
      *(undefined4 *)(param_1 + 8) = 6;
    }
    else if (lVar1 == 2) {
      *(undefined4 *)(param_1 + 8) = 7;
    }
    else {
      *(undefined4 *)(param_1 + 8) = 8;
    }
  }
  else if (DAT_0027ba88 == 5) {
    *(undefined4 *)(param_1 + 8) = 3;
  }
  else {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

