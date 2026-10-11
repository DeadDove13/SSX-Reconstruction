/* Ghidra pseudocode. PS2 address: 00118320. Not validated source. */

undefined8 FUN_00118320(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x3e;
  do {
    iVar2 = 1;
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
    bVar1 = iVar3 != -1;
    iVar3 = iVar3 + -1;
  } while (bVar1);
  FUN_001183b0(param_1);
  return param_1;
}

