/* Ghidra pseudocode. PS2 address: 00115440. Not validated source. */

undefined8 FUN_00115440(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 3;
  do {
    iVar2 = 0x18;
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
    iVar2 = 0x18;
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
    bVar1 = iVar3 != -1;
    iVar3 = iVar3 + -1;
  } while (bVar1);
  FUN_001154d8(param_1);
  return param_1;
}

