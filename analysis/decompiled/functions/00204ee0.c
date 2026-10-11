/* Ghidra pseudocode. PS2 address: 00204ee0. Not validated source. */

void FUN_00204ee0(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  FUN_00204b20();
  FUN_00205108(param_1,0x2c56f8);
  iVar3 = (int)param_1;
  cVar1 = **(char **)(iVar3 + 8);
  while (cVar1 != '\"') {
    uVar2 = FUN_00204b08(param_1);
    *(undefined1 *)(iVar3 + 0xc + iVar4) = uVar2;
    iVar4 = iVar4 + 1;
    cVar1 = **(char **)(iVar3 + 8);
  }
  FUN_00205108(param_1,0x2c56f8);
  *(undefined1 *)(iVar3 + 0xc + iVar4) = 0;
  return;
}

