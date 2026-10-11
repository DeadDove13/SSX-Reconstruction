/* Ghidra pseudocode. PS2 address: 00109010. Not validated source. */

void FUN_00109010(int *param_1)

{
  switch(*(undefined4 *)(*param_1 + 0x34c)) {
  default:
    return;
  case 1:
    FUN_0013e888(param_1 + 0x120);
    return;
  case 2:
    FUN_001409a0(param_1 + 300);
    return;
  case 5:
    return;
  case 6:
    FUN_00145658(param_1 + 0x17c);
    return;
  }
}

