/* Ghidra pseudocode. PS2 address: 0018de10. Not validated source. */

void FUN_0018de10(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 8);
  if (((0 < *(int *)(iVar3 + 4)) && (-1 < iVar1)) && (*(int *)(iVar3 + 4) <= iVar1)) {
    iVar1 = *(int *)(iVar3 + 8);
  }
  iVar1 = *(int *)(iVar3 + iVar1 * 4 + 0x10);
  iVar3 = *(int *)(iVar1 + 0xc);
  lVar2 = (**(code **)(iVar3 + 0x1c))(iVar1 + *(short *)(iVar3 + 0x18));
  if (lVar2 != 0) {
    return;
  }
  FUN_0018de88(param_1);
  return;
}

