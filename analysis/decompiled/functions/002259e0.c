/* Ghidra pseudocode. PS2 address: 002259e0. Not validated source. */

long FUN_002259e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  if (DAT_0029a888 == '\0') {
    lVar2 = -10;
  }
  else {
    lVar2 = FUN_002259a8(param_2);
    if (-1 < lVar2) {
      iVar1 = (int)param_2 * 0xc;
      FUN_0022d7d0(param_1,*(undefined4 *)(iVar1 + DAT_0029a8f4));
      lVar2 = 0;
      *(int *)(iVar1 + DAT_0029a8f4) = (int)param_1;
    }
  }
  return lVar2;
}

