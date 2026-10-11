/* Ghidra pseudocode. PS2 address: 0018a308. Not validated source. */

void FUN_0018a308(void)

{
  int iVar1;
  int *piVar2;
  
  if (DAT_002c5bac == 0) {
    return;
  }
  piVar2 = (int *)(DAT_002c5bac + -4);
  if ((DAT_002c5bb0 <= piVar2) && (*(int *)(DAT_002c5bac + -4) == -0x21503f13)) {
    for (piVar2 = (int *)(DAT_002c5bac + -8); (DAT_002c5bb0 <= piVar2 && (*piVar2 == -0x21503f13));
        piVar2 = piVar2 + -1) {
    }
  }
  FUN_0018ac08(0x2b39a8,(int)piVar2 - (int)DAT_002c5bb0 >> 2);
  iVar1 = *DAT_002c5bb4;
  piVar2 = DAT_002c5bb4;
  while (iVar1 == -0x21503f13) {
    piVar2 = piVar2 + 1;
    iVar1 = *piVar2;
  }
  FUN_0018ac08(0x2b39c8,DAT_002c5bb8 - (int)piVar2 >> 2);
  return;
}

