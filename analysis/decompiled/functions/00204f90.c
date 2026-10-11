/* Ghidra pseudocode. PS2 address: 00204f90. Not validated source. */

void FUN_00204f90(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  FUN_00204b20();
  iVar3 = (int)param_1;
  cVar1 = **(char **)(iVar3 + 8);
  if ((((cVar1 != '\0') && (cVar1 != ' ')) && (cVar1 != '\t')) && (cVar1 != '\n')) {
    while (cVar1 != '\r') {
      uVar2 = FUN_00204b08(param_1);
      *(undefined1 *)(iVar3 + 0xc + iVar4) = uVar2;
      cVar1 = **(char **)(iVar3 + 8);
      iVar4 = iVar4 + 1;
      if (((cVar1 == '\0') || (cVar1 == ' ')) || ((cVar1 == '\t' || (cVar1 == '\n')))) break;
    }
  }
  *(undefined1 *)(iVar3 + 0xc + iVar4) = 0;
  return;
}

