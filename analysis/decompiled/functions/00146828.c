/* Ghidra pseudocode. PS2 address: 00146828. Not validated source. */

undefined4 FUN_00146828(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)param_1;
  if (*piVar5 == 0) {
    iVar4 = (int)param_2;
    lVar2 = (**(code **)(*(int *)(iVar4 + 0x10) + 0x3c))
                      (iVar4 + *(short *)(*(int *)(iVar4 + 0x10) + 0x38),piVar5[3]);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar3 = FUN_00219ac0(param_2,piVar5[3],0,0x2ac1f8);
      FUN_001467b0(param_1,uVar3);
      (**(code **)(*(int *)(iVar4 + 0x10) + 0x34))
                (iVar4 + *(short *)(*(int *)(iVar4 + 0x10) + 0x30),piVar5[3]);
      uVar1 = 1;
      piVar5[3] = -1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

