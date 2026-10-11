/* Ghidra pseudocode. PS2 address: 0023e860. Not validated source. */

void FUN_0023e860(void)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  iVar1 = 0;
  bVar3 = false;
  piVar2 = &DAT_002a36c0;
  do {
    if (0xff < iVar1) {
LAB_0023e8c4:
      if (!bVar3) {
        FUN_0023ef70(0x23e860);
        return;
      }
      return;
    }
    if (*piVar2 <= DAT_002c5aa0) {
      FUN_00265378(piVar2[1]);
      *piVar2 = 0;
      piVar2[1] = 0;
      goto LAB_0023e8c4;
    }
    iVar1 = iVar1 + 1;
    if (0 < *piVar2) {
      bVar3 = true;
    }
    piVar2 = piVar2 + 2;
  } while( true );
}

