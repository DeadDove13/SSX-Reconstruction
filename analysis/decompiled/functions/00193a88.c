/* Ghidra pseudocode. PS2 address: 00193a88. Not validated source. */

void FUN_00193a88(undefined8 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_1;
  *(undefined4 *)(iVar3 + 0x40) = 0;
  if (*(int *)(iVar3 + 0x3928) == 0) {
    iVar4 = FUN_00195330(param_1,100000000);
    uVar1 = *(undefined4 *)(iVar4 + 0x38);
    *(int *)(iVar3 + 0xc) = iVar4;
    *(undefined4 *)(iVar3 + 0x2c) = uVar1;
  }
  else {
    uVar1 = FUN_0019a3e0();
    *(undefined4 *)(iVar3 + 0x2c) = uVar1;
    uVar1 = FUN_0019a540(*(undefined4 *)(iVar3 + 0x3928));
    *(undefined4 *)(iVar3 + 0xc) = uVar1;
  }
  piVar2 = (int *)(iVar3 + 0x393c);
  iVar4 = 3;
  do {
    if (*piVar2 != 0) {
      FUN_00196ad0(*piVar2,*(undefined4 *)(iVar3 + 0x2c));
    }
    iVar4 = iVar4 + -1;
    piVar2 = piVar2 + 1;
  } while (-1 < iVar4);
  return;
}

