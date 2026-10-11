/* Ghidra pseudocode. PS2 address: 00109068. Not validated source. */

void FUN_00109068(int *param_1)

{
  switch(*(undefined4 *)(*param_1 + 0x34c)) {
  default:
    return;
  case 1:
    FUN_0013e840(param_1 + 0x120);
    return;
  case 2:
    FUN_0013f660(param_1 + 300);
    return;
  case 3:
    FUN_00140ac8(param_1 + 0x130);
    return;
  case 5:
    FUN_00141778(param_1 + 0x13c);
    return;
  case 6:
    FUN_00145628(param_1 + 0x17c);
    return;
  }
}

