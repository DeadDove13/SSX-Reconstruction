/* Ghidra pseudocode. PS2 address: 00223258. Not validated source. */

void FUN_00223258(int *param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  sVar1 = FUN_00223380();
  iVar5 = *(int *)(*param_1 + 0x34);
  iVar2 = param_1[8];
  if (0 < iVar5) {
    do {
      if (*(short *)(iVar2 + 4) != -1) {
        *(short *)(iVar2 + 4) = *(short *)(iVar2 + 4) + sVar1;
      }
      iVar5 = iVar5 + -1;
      iVar2 = iVar2 + 0xc;
    } while (iVar5 != 0);
  }
  iVar2 = 0;
  iVar5 = *(int *)(*param_1 + 0x38);
  piVar3 = (int *)param_1[7];
  if (0 < iVar5) {
    do {
      iVar6 = *piVar3;
      iVar2 = iVar2 + 1;
      if (0 < iVar6) {
        piVar4 = piVar3 + 1;
        do {
          if ((short)*piVar4 != -1) {
            *(short *)piVar4 = (short)*piVar4 + sVar1;
          }
          iVar6 = iVar6 + -1;
          piVar4 = (int *)((int)piVar4 + 2);
        } while (iVar6 != 0);
      }
      piVar3 = piVar3 + 5;
    } while (iVar2 < iVar5);
  }
  return;
}

