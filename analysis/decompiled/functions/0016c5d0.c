/* Ghidra pseudocode. PS2 address: 0016c5d0. Not validated source. */

void FUN_0016c5d0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  *(undefined **)(iVar3 + 4) = &DAT_002b0528;
  FUN_0016dd50();
  if ((iVar3 != -0x550) && (iVar3 + 0x550 != iVar3 + 0xb10)) {
    iVar2 = iVar3 + 0x830;
    do {
      (**(code **)(*(int *)(iVar2 + 0x284) + 0xc))
                (iVar2 + *(short *)(*(int *)(iVar2 + 0x284) + 8),0);
      bVar1 = iVar3 + 0x550 != iVar2;
      iVar2 = iVar2 + -0x2e0;
    } while (bVar1);
  }
  FUN_00170ad8(param_1,param_2);
  return;
}

