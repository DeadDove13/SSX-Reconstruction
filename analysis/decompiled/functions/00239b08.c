/* Ghidra pseudocode. PS2 address: 00239b08. Not validated source. */

undefined8 FUN_00239b08(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  
  lVar1 = FUN_0023b9ec(param_1,2);
  if (lVar1 == 0xc0fb) {
    iVar3 = 1;
  }
  else {
    lVar1 = FUN_0023b9ec(param_1,4);
    iVar3 = 2;
    if (lVar1 != 0x42494746) {
      iVar3 = 0;
    }
  }
  if (iVar3 == 1) {
    uVar2 = FUN_0023b9ec((int)param_1 + 4,2);
  }
  else {
    uVar2 = 0;
    if (iVar3 == 2) {
      uVar2 = FUN_0023b9ec((int)param_1 + 8,4);
    }
  }
  return uVar2;
}

