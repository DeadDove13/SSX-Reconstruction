/* Ghidra pseudocode. PS2 address: 00209b28. Not validated source. */

void FUN_00209b28(undefined8 param_1,ulong param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  if (*piVar2 != 0) {
    FUN_00226a20(piVar2[1]);
    if (*piVar2 == 0) {
      iVar1 = piVar2[0x14];
      goto LAB_00209b68;
    }
    FUN_00103710();
  }
  iVar1 = piVar2[0x14];
LAB_00209b68:
  if (iVar1 != 0) {
    FUN_0023a998();
  }
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

