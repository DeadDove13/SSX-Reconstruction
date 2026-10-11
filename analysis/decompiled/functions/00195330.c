/* Ghidra pseudocode. PS2 address: 00195330. Not validated source. */

int FUN_00195330(undefined8 param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1;
  iVar3 = *piVar4;
  while( true ) {
    while( true ) {
      while( true ) {
        if (*(int *)(iVar3 + 0x28) == 0) {
          return iVar3;
        }
        uVar1 = *(uint *)(iVar3 + 0x38);
        if (uVar1 == param_2) {
          if (*(int *)(iVar3 + 0x30) == 0) {
            return iVar3;
          }
          lVar2 = FUN_001954c8(param_1,piVar4[7],iVar3);
          if (lVar2 != 0) {
            return iVar3;
          }
          uVar1 = *(uint *)(iVar3 + 0x38);
        }
        if (uVar1 < param_2) break;
        iVar3 = *(int *)(iVar3 + 0x28);
      }
      if (param_2 < *(uint *)(*(int *)(iVar3 + 0x28) + 0x38)) break;
      iVar3 = *(int *)(iVar3 + 0x28);
    }
    if (*(int *)(iVar3 + 0x30) == 0) {
      return iVar3;
    }
    lVar2 = FUN_001954c8(param_1,piVar4[7],iVar3);
    if (lVar2 != 0) break;
    iVar3 = *(int *)(iVar3 + 0x28);
  }
  return iVar3;
}

