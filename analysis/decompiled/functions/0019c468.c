/* Ghidra pseudocode. PS2 address: 0019c468. Not validated source. */

void FUN_0019c468(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  else {
    FUN_00103710();
    iVar1 = *(int *)(param_1 + 0xc);
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x34);
  }
  else {
    FUN_00103710();
    iVar1 = *(int *)(param_1 + 0x34);
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    FUN_00103710();
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

