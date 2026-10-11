/* Ghidra pseudocode. PS2 address: 00191148. Not validated source. */

void FUN_00191148(int param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_0018dce0();
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (param_2 != 1) {
      iVar1 = *(int *)(param_1 + 4);
      goto LAB_001911a8;
    }
    uVar2 = 0xffffffffffffffff;
  }
  FUN_0018e620(param_1 + 0x14,uVar2);
  iVar1 = *(int *)(param_1 + 4);
LAB_001911a8:
  FUN_0018e738(param_1 + 0x14,*(undefined4 *)(iVar1 + 0x110));
  return;
}

