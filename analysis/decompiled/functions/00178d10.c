/* Ghidra pseudocode. PS2 address: 00178d10. Not validated source. */

undefined4 FUN_00178d10(undefined8 param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if ((param_2 & 0x60003) != 0) {
    FUN_001fb018(DAT_002c56e8);
    iVar2 = (int)param_1;
    if ((param_2 & 0x20001) == 0) {
      iVar1 = *(int *)(iVar2 + 0xb68) + 1;
      *(int *)(iVar2 + 0xb68) = iVar1;
      if (*(int *)(iVar2 + 0xb6c) <= iVar1) {
        *(undefined4 *)(iVar2 + 0xb68) = 0;
      }
    }
    else {
      iVar1 = *(int *)(iVar2 + 0xb68) + -1;
      *(int *)(iVar2 + 0xb68) = iVar1;
      if (iVar1 < 0) {
        *(int *)(iVar2 + 0xb68) = *(int *)(iVar2 + 0xb6c) + -1;
      }
    }
    DAT_0027ba88 = *(int *)(*(int *)(iVar2 + 0xb68) * 4 + *(int *)(iVar2 + 0xb70));
    uVar4 = 1;
    FUN_00178190(param_1);
  }
  piVar3 = &DAT_002837b0;
  iVar2 = 8;
  do {
    if (*piVar3 != -1) {
      FUN_0016eb08(param_1);
    }
    iVar2 = iVar2 + -1;
    piVar3 = piVar3 + 1;
  } while (-1 < iVar2);
  if (DAT_002c4a00 != 2) {
    FUN_0016eb88(param_1,(&DAT_002837b0)[DAT_0027ba88]);
    FUN_0016eae0(param_1,(&DAT_002837b0)[DAT_0027ba88]);
  }
  return uVar4;
}

