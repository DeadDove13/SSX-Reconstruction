/* Ghidra pseudocode. PS2 address: 0023c228. Not validated source. */

void FUN_0023c228(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_2 + 0xc) = 0;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 4) = 1;
  FUN_0023ee58(uVar1);
  if (*(int *)(param_1 + 0x54) == 0) {
    *(undefined4 *)(param_2 + 8) = 0;
    *(int *)(param_1 + 0x54) = param_2;
    *(int *)(param_1 + 0x4c) = param_2;
    *(int *)(param_1 + 0x50) = param_2;
  }
  else {
    *(int *)(param_2 + 8) = *(int *)(param_1 + 0x54);
    *(int *)(*(int *)(param_1 + 0x54) + 0xc) = param_2;
    *(int *)(param_1 + 0x54) = param_2;
  }
  FUN_0023ea60(*(undefined4 *)(param_1 + 4));
  return;
}

