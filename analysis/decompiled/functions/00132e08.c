/* Ghidra pseudocode. PS2 address: 00132e08. Not validated source. */

void FUN_00132e08(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(*(undefined4 **)(param_2 + 4) == param_1);
  if (*(int *)(param_2 + (uVar2 + 4) * 4) == 0) {
    *param_1 = *(undefined4 *)(param_2 + (uVar2 + 2) * 4);
  }
  else {
    iVar1 = *(int *)(param_2 + (uVar2 + 4) * 4);
    *(undefined4 *)(iVar1 + 8 + (uint)(*(undefined4 **)(iVar1 + 4) == param_1) * 4) =
         *(undefined4 *)(param_2 + (uVar2 + 2) * 4);
  }
  if (*(int *)(param_2 + (uVar2 + 2) * 4) != 0) {
    iVar1 = *(int *)(param_2 + (uVar2 + 2) * 4);
    *(undefined4 *)(iVar1 + 0x10 + (uint)(*(undefined4 **)(iVar1 + 4) == param_1) * 4) =
         *(undefined4 *)(param_2 + (uVar2 + 4) * 4);
    return;
  }
  param_1[1] = *(undefined4 *)(param_2 + (uVar2 + 4) * 4);
  return;
}

