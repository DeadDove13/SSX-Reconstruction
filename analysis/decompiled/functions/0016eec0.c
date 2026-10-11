/* Ghidra pseudocode. PS2 address: 0016eec0. Not validated source. */

void FUN_0016eec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)((int)param_1 + (int)param_3 * 4 + 0xb14) != 0) {
    iVar2 = FUN_0016dd88();
    uVar1 = *(uint *)(iVar2 + 0x98);
    piVar3 = (int *)FUN_0016f230(param_1,param_2,param_3);
    if (*piVar3 != -1) {
      iVar2 = *piVar3;
      while( true ) {
        FUN_0016eae0(param_1,iVar2);
        if ((uVar1 & 8) == 0) {
          FUN_0016eb88(param_1,*piVar3);
        }
        else {
          FUN_0016ebb8(param_1);
        }
        piVar3 = piVar3 + 1;
        if (*piVar3 == -1) break;
        iVar2 = *piVar3;
      }
    }
  }
  return;
}

