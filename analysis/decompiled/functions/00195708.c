/* Ghidra pseudocode. PS2 address: 00195708. Not validated source. */

void FUN_00195708(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x3928) == 0) {
    iVar2 = FUN_00195458(param_1,*(undefined4 *)(iVar3 + 0x2c));
    uVar1 = *(undefined4 *)(iVar2 + 0x38);
    *(int *)(iVar3 + 0xc) = iVar2;
    *(undefined4 *)(iVar3 + 0x2c) = uVar1;
    FUN_00195628(param_1);
    return;
  }
  return;
}

