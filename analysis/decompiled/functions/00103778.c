/* Ghidra pseudocode. PS2 address: 00103778. Not validated source. */

void FUN_00103778(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 - DAT_00298590;
  if (0 < iVar1 && iVar1 < DAT_00298594) {
    FUN_002108c0();
    return;
  }
  iVar1 = (int)param_1 - DAT_0028ac20;
  if (0 < iVar1 && iVar1 < DAT_0028ac24) {
    FUN_002108c0();
    return;
  }
  FUN_0023a998(param_1);
  return;
}

