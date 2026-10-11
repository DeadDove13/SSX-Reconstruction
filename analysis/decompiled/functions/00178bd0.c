/* Ghidra pseudocode. PS2 address: 00178bd0. Not validated source. */

undefined4 FUN_00178bd0(undefined8 param_1,ulong param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0027ba9c;
  uVar3 = 0;
  if ((param_2 & 0x60003) != 0) {
    FUN_001fb018(DAT_002c56e8);
    if ((param_2 & 0x20001) == 0) {
      DAT_0027ba9c = iVar1 + 1;
      if (2 < DAT_0027ba9c) {
        DAT_0027ba9c = 0;
      }
    }
    else {
      DAT_0027ba9c = iVar1 + -1;
      if (DAT_0027ba9c < 0) {
        DAT_0027ba9c = 2;
      }
    }
    uVar3 = 1;
  }
  piVar2 = &DAT_002837b0;
  iVar1 = 8;
  do {
    if (*piVar2 != -1) {
      FUN_0016eb08(param_1);
    }
    iVar1 = iVar1 + -1;
    piVar2 = piVar2 + 1;
  } while (-1 < iVar1);
  if (DAT_002c4a00 != 2) {
    FUN_0016eb88(param_1,(&DAT_002837b0)[DAT_0027ba88]);
    FUN_0016eae0(param_1,(&DAT_002837b0)[DAT_0027ba88]);
  }
  return uVar3;
}

