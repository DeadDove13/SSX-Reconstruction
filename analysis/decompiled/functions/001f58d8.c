/* Ghidra pseudocode. PS2 address: 001f58d8. Not validated source. */

void FUN_001f58d8(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  *(undefined **)(iVar3 + 0x32000) = &DAT_002bc8c0;
  if ((iVar3 != -0x329c0) && (iVar3 + 0x329c0 != iVar3 + 0x351c0)) {
    iVar2 = iVar3 + 0x35120;
    do {
      FUN_001f4e50(iVar2,0);
      bVar1 = iVar3 + 0x329c0 != iVar2;
      iVar2 = iVar2 + -0xa0;
    } while (bVar1);
  }
  FUN_002055e0(param_1,param_2);
  return;
}

