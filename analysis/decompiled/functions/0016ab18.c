/* Ghidra pseudocode. PS2 address: 0016ab18. Not validated source. */

void FUN_0016ab18(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1;
  piVar2[6] = 1;
  if (*piVar2 != 0) {
    if ((code *)piVar2[1] == (code *)0x0) {
      iVar1 = piVar2[0xa1];
      goto LAB_0016ab58;
    }
    (*(code *)piVar2[1])(param_1,param_1);
  }
  iVar1 = piVar2[0xa1];
LAB_0016ab58:
  (**(code **)(iVar1 + 0x1c))((int)piVar2 + (int)*(short *)(iVar1 + 0x18));
  return;
}

