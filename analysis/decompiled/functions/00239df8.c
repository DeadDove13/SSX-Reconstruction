/* Ghidra pseudocode. PS2 address: 00239df8. Not validated source. */

int FUN_00239df8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = FUN_0023b9ec(param_1,2);
  if (lVar2 == 0xc0fb) {
    iVar3 = 1;
  }
  else {
    lVar2 = FUN_0023b9ec(param_1,4);
    iVar3 = 2;
    if (lVar2 != 0x42494746) {
      iVar3 = 0;
    }
  }
  if (iVar3 == 1) {
    iVar1 = FUN_0023b9ec((int)param_1 + 2,2);
    iVar1 = iVar1 + 4;
  }
  else {
    iVar1 = 0;
    if (iVar3 == 2) {
      iVar1 = FUN_0023b9ec((int)param_1 + 0xc,4);
    }
  }
  return iVar1;
}

