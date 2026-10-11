/* Ghidra pseudocode. PS2 address: 0018e098. Not validated source. */

long FUN_0018e098(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  FUN_0018de10(param_1);
  iVar1 = *(int *)((int)param_1 + *(int *)((int)param_1 + 8) * 4 + 0x10);
  iVar2 = *(int *)(iVar1 + 0xc);
  lVar3 = (**(code **)(iVar2 + 0x14))(iVar1 + *(short *)(iVar2 + 0x10));
  if (lVar3 == 3) {
    FUN_0018de88(param_1);
  }
  else {
    if (lVar3 != 4) {
      return lVar3;
    }
    FUN_0018df90(param_1);
  }
  return 0;
}

