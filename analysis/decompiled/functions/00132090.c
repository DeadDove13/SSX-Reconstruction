/* Ghidra pseudocode. PS2 address: 00132090. Not validated source. */

undefined8 FUN_00132090(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_2;
  iVar2 = iVar4 + 0x44;
  do {
    iVar2 = iVar2 + 0x14;
  } while (iVar2 < iVar4 + 0x80);
  iVar3 = iVar4 + 8;
  uVar1 = FUN_00131f20((int)param_1 + 4);
  iVar2 = (int)param_1 + 0x2c;
  *(int *)(iVar4 + 0x80) = (int)uVar1;
  iVar4 = 2;
  do {
    FUN_00131d88(iVar2,iVar3);
    iVar4 = iVar4 + -1;
    FUN_00131d88(iVar2,iVar3 + 0x3c);
    iVar3 = iVar3 + 0x14;
    iVar2 = iVar2 + 8;
  } while (-1 < iVar4);
  FUN_001324e0(param_1,param_2);
  return uVar1;
}

