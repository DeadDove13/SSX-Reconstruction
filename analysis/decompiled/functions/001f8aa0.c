/* Ghidra pseudocode. PS2 address: 001f8aa0. Not validated source. */

undefined4 FUN_001f8aa0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x34c) == 3) {
    uVar1 = *(undefined4 *)(param_1 + 0xa4218);
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x210);
  }
  switch(uVar1) {
  case 0:
  case 3:
    return 1;
  case 2:
    return 2;
  default:
    return 0;
  case 5:
  case 6:
    return 3;
  case 9:
  case 10:
  case 0xb:
    return 7;
  case 0xc:
    return 5;
  case 0xd:
    return 4;
  case 0xe:
    return 8;
  case 0xffffffff:
  case 1:
  case 7:
  case 8:
  case 0x12:
    return 0;
  }
}

