/* Ghidra pseudocode. PS2 address: 0015f278. Not validated source. */

void FUN_0015f278(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  *(undefined **)(iVar3 + 0xf9c) = &DAT_002afab8;
  if ((iVar3 != -0x210) && ((int *)(iVar3 + 0x210) != (int *)(iVar3 + 0x410))) {
    piVar2 = (int *)(iVar3 + 0x3d0);
    do {
      (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8),0);
      bVar1 = (int *)(iVar3 + 0x210) != piVar2;
      piVar2 = piVar2 + -0x10;
    } while (bVar1);
  }
  FUN_0015f338(iVar3 + 0x204,2);
  FUN_0015f340(iVar3 + 0x1d8,2);
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

