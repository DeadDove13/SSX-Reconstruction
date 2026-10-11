/* Ghidra pseudocode. PS2 address: 00195628. Not validated source. */

void FUN_00195628(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x3928) == 0) {
    uVar1 = FUN_00195330(param_1,*(undefined4 *)(iVar2 + 0x2c));
    *(undefined4 *)(iVar2 + 0xc) = uVar1;
  }
  else {
    uVar1 = FUN_0019a540();
    *(undefined4 *)(iVar2 + 0xc) = uVar1;
  }
  piVar3 = (int *)(iVar2 + 0x393c);
  iVar4 = 3;
  *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x38);
  do {
    if (*piVar3 != 0) {
      FUN_00196ad0(*piVar3,*(undefined4 *)(iVar2 + 0x2c));
    }
    iVar4 = iVar4 + -1;
    piVar3 = piVar3 + 1;
  } while (-1 < iVar4);
  return;
}

