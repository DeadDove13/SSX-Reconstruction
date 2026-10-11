/* Ghidra pseudocode. PS2 address: 00199560. Not validated source. */

void FUN_00199560(int param_1)

{
  int iVar1;
  
  FUN_0023bbd0(*(undefined4 *)(param_1 + 0x5d70),0,0x4000);
  *(undefined4 *)(param_1 + 0x5d94) = 0;
  if (0 < *(int *)(param_1 + 0x5d80)) {
    *(int *)(param_1 + 0x5d94) = 0x3ff8 - *(int *)(param_1 + 0x5d80);
  }
  iVar1 = 0x10fd70 - *(int *)(param_1 + 0x5d8c);
  *(int *)(param_1 + 0x5d90) = iVar1;
  if (*(int *)(param_1 + 0x5d94) < iVar1) {
    *(int *)(param_1 + 0x5d90) = iVar1 - *(int *)(param_1 + 0x5d94);
  }
  else {
    *(int *)(param_1 + 0x5d94) = iVar1;
    *(undefined4 *)(param_1 + 0x5d90) = 0;
  }
  *(int *)(param_1 + 0x5d7c) = *(int *)(param_1 + 0x5d7c) + 1;
  *(uint *)(param_1 + 0x5d90) =
       *(int *)(param_1 + 0x5d90) + (*(int *)(param_1 + 0x5d90) + 0x3fffU >> 0xe) * -8;
  return;
}

