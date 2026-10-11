/* Ghidra pseudocode. PS2 address: 0018e878. Not validated source. */

void FUN_0018e878(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  
  lVar2 = FUN_00182690(0x285290,0);
  piVar4 = (int *)param_1;
  piVar4[0xc] = (int)lVar2;
  if (DAT_00285308 == 1) {
    if ((lVar2 == 0xd) || (lVar2 == 100)) {
      piVar4[0xc] = 8;
      iVar3 = piVar4[0xc];
    }
    else {
      iVar3 = piVar4[0xc];
    }
    if (iVar3 != 99) {
      iVar3 = *piVar4;
      goto LAB_0018e914;
    }
    iVar3 = 0xd;
  }
  else {
    if (lVar2 == 100) {
      piVar4[0xc] = 0xd;
      iVar3 = piVar4[0xc];
    }
    else {
      iVar3 = piVar4[0xc];
    }
    if (iVar3 != 0x62) {
      iVar3 = *piVar4;
      goto LAB_0018e914;
    }
    iVar3 = 8;
  }
  piVar4[0xc] = iVar3;
  iVar3 = *piVar4;
LAB_0018e914:
  if (iVar3 != 0) {
    iVar1 = *(int *)(piVar4[iVar3] + 0x114);
    lVar2 = (**(code **)(iVar1 + 0x14))(piVar4[iVar3] + (int)*(short *)(iVar1 + 0x10));
    if (lVar2 == 1) {
      FUN_0018eb00(param_1);
      return;
    }
    if (lVar2 == 2) {
      while (*piVar4 != 0) {
        FUN_0018eb00(param_1);
      }
    }
  }
  return;
}

