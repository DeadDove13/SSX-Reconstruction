/* Ghidra pseudocode. PS2 address: 0023c190. Not validated source. */

void FUN_0023c190(int param_1,int param_2)

{
  int iVar1;
  
  FUN_0023ee58(*(undefined4 *)(param_1 + 4));
  iVar1 = *(int *)(param_1 + 0x3c);
  param_2 = iVar1 - param_2;
  *(int *)(param_1 + 0x3c) = param_2;
  FUN_0023ea60(*(undefined4 *)(param_1 + 4));
  if (((*(int *)(param_1 + 0x34) <= iVar1) && (param_2 < *(int *)(param_1 + 0x34))) &&
     (*(undefined4 *)(param_1 + 0x38) = 1, *(int *)(param_1 + 0x28) == 1)) {
    FUN_00237ae8(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0x30));
    return;
  }
  return;
}

