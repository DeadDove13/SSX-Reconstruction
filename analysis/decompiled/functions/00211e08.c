/* Ghidra pseudocode. PS2 address: 00211e08. Not validated source. */

undefined4 FUN_00211e08(int param_1,long param_2)

{
  int iVar1;
  
  if ((param_2 == 1) && (*(int *)(param_1 + 0x58) == 0)) {
    return 0;
  }
  iVar1 = *(int *)((int)param_2 * 0x14 + param_1 + 0x154);
  if (iVar1 != -7) {
    if (iVar1 < -6) {
      if (iVar1 != -0x2711) {
        return 0;
      }
    }
    else {
      if (0 < iVar1) {
        return 0;
      }
      if (iVar1 < -5) {
        return 0;
      }
    }
  }
  return 1;
}

