/* Ghidra pseudocode. PS2 address: 002055e0. Not validated source. */

void FUN_002055e0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  *(undefined **)(iVar3 + 0x32000) = &DAT_002bcf68;
  FUN_002250f0(0x205508);
  if ((iVar3 != -0x32170) && (iVar3 + 0x32170 != iVar3 + 0x329b0)) {
    iVar2 = iVar3 + 0x32984;
    do {
      FUN_002053d8(iVar2,0);
      bVar1 = iVar3 + 0x32170 != iVar2;
      iVar2 = iVar2 + -0x2c;
    } while (bVar1);
  }
  FUN_00207a48(param_1,param_2);
  return;
}

