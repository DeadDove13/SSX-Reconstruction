/* Ghidra pseudocode. PS2 address: 001090c8. Not validated source. */

void FUN_001090c8(int *param_1)

{
  switch(*(undefined4 *)(*param_1 + 0x34c)) {
  default:
    return;
  case 1:
    FUN_0013e898(param_1 + 0x120);
    return;
  case 2:
    FUN_0013fcb0(param_1 + 300);
    return;
  case 3:
    FUN_00140b10(param_1 + 0x130);
    return;
  case 4:
    return;
  case 5:
    FUN_00141898(param_1 + 0x13c);
    return;
  case 6:
    FUN_00145688(param_1 + 0x17c);
    return;
  }
}

