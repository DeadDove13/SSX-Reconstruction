/* Ghidra pseudocode. PS2 address: 00117058. Not validated source. */

undefined8 FUN_00117058(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x1c;
  do {
    iVar2 = 1;
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
    bVar1 = iVar3 != -1;
    iVar3 = iVar3 + -1;
  } while (bVar1);
  FUN_00115440((int)param_1 + 0x970);
  FUN_001170d0(param_1);
  return param_1;
}

