/* Ghidra pseudocode. PS2 address: 001938b8. Not validated source. */

void FUN_001938b8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) == param_2) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x2c);
  }
  FUN_00197fb0(param_2);
  FUN_00197f88(param_2);
  if (*(int *)(param_2 + 0x2c) == 0) {
    iVar2 = *(int *)(param_2 + 0x28);
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0x2c) + 0x28) = *(undefined4 *)(param_2 + 0x28);
    iVar2 = *(int *)(param_2 + 0x28);
  }
  if (iVar2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  else {
    *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x28) = uVar1;
  *(int *)(param_1 + 4) = param_2;
  return;
}

