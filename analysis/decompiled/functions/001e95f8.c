/* Ghidra pseudocode. PS2 address: 001e95f8. Not validated source. */

undefined4 FUN_001e95f8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = (int *)(param_1 + param_2 * 0x60 + 0x10);
  uVar2 = 1;
  if (*piVar6 == 1) {
    lVar3 = 1;
    iVar5 = 0;
    piVar4 = piVar6 + 4;
    while ((iVar5 < 3 &&
           ((*piVar4 < 0 ||
            (iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x10),
            lVar3 = (**(code **)(iVar1 + 0x3c))
                              (*(int *)(param_1 + 8) + (int)*(short *)(iVar1 + 0x38)), lVar3 != 0)))
           )) {
      piVar4 = piVar4 + 1;
      iVar5 = iVar5 + 1;
    }
    iVar5 = 0;
    if (lVar3 != 0) {
      piVar4 = piVar6 + 10;
      while ((iVar5 < 7 &&
             ((*piVar4 < 0 ||
              (iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x10),
              lVar3 = (**(code **)(iVar1 + 0x3c))
                                (*(int *)(param_1 + 0xc) + (int)*(short *)(iVar1 + 0x38)),
              lVar3 != 0))))) {
        piVar4 = piVar4 + 1;
        iVar5 = iVar5 + 1;
      }
      if (lVar3 != 0) {
        *piVar6 = 2;
        return 1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

