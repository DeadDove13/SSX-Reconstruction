/* Ghidra pseudocode. PS2 address: 00198af0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00198c24) */

int FUN_00198af0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = 0x58;
  for (iVar4 = 0; iVar4 < *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x80); iVar4 = iVar4 + 1) {
    iVar6 = iVar6 + 0xe24;
  }
  iVar4 = *param_1;
  if (iVar4 != 0) {
    iVar1 = param_1[5];
    while( true ) {
      if (iVar4 == iVar1) {
        iVar4 = *(int *)(iVar4 + 0x28);
      }
      else {
        iVar1 = FUN_00198008(iVar4);
        iVar6 = iVar6 + iVar1;
        iVar4 = *(int *)(iVar4 + 0x28);
      }
      if (iVar4 == 0) break;
      iVar1 = param_1[5];
    }
  }
  piVar3 = param_1 + 0xe4f;
  iVar4 = 3;
  do {
    iVar4 = iVar4 + -1;
    if (*piVar3 != 0) {
      iVar1 = FUN_00197008();
      iVar6 = iVar6 + iVar1;
    }
    piVar3 = piVar3 + 1;
  } while (-1 < iVar4);
  iVar1 = 0;
  iVar4 = 0;
  do {
    if (*(int *)((int)param_1 + iVar4 + 0x392c) != 0) {
      iVar2 = FUN_001985c0();
      iVar6 = iVar6 + iVar2;
    }
    piVar3 = (int *)((int)param_1 + iVar4 + 0x394c);
    iVar1 = iVar1 + 1;
    iVar4 = 0;
    if (0 < *piVar3) {
      piVar5 = param_1 + 0xe5a;
      do {
        iVar4 = iVar4 + 1;
        iVar2 = FUN_00198840(piVar5);
        piVar5 = piVar5 + 5;
        iVar6 = iVar6 + iVar2;
      } while (iVar4 < *piVar3);
    }
    iVar4 = iVar1 * 4;
  } while (iVar1 < 4);
  return iVar6 + ((iVar6 + 0x3ff7) / 0x3ff8) * 8;
}

