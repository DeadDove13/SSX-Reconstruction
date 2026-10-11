/* Ghidra pseudocode. PS2 address: 001939f8. Not validated source. */

void FUN_001939f8(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  param_1[0x10] = 0;
  if (param_1[0xe4a] == 0) {
    param_1[0xb] = 0;
    param_1[3] = *param_1;
  }
  else {
    uVar1 = FUN_0019a3e0();
    param_1[0xb] = uVar1;
    uVar1 = FUN_0019a540(param_1[0xe4a]);
    param_1[3] = uVar1;
  }
  piVar2 = param_1 + 0xe4f;
  iVar3 = 3;
  do {
    if (*piVar2 != 0) {
      FUN_00196ad0(*piVar2,param_1[0xb]);
    }
    iVar3 = iVar3 + -1;
    piVar2 = piVar2 + 1;
  } while (-1 < iVar3);
  return;
}

