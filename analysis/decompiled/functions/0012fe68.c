/* Ghidra pseudocode. PS2 address: 0012fe68. Not validated source. */

void FUN_0012fe68(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar2 = FUN_001a3760(*(undefined4 *)(DAT_002859e4 + 0x30));
  if ((**(int **)(iVar2 + 0x174) == 0) && (lVar3 = FUN_0018e858(0x28abe0), lVar3 == 0)) {
    iVar2 = (int)param_1;
    if (*(int *)(iVar2 + 0x10) == 0) {
      iVar4 = *(int *)(iVar2 + 0x14);
    }
    else {
      FUN_0012ff98(param_1);
      *(undefined4 *)(iVar2 + 0x10) = 0;
      iVar4 = *(int *)(iVar2 + 0x14);
    }
    if (iVar4 == *(int *)(iVar2 + 0xc)) {
      piVar1 = *(int **)(iVar2 + 0x44);
    }
    else {
      piVar1 = *(int **)(iVar2 + 0x48);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x14))((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),param_1);
      }
      iVar4 = **(int **)(iVar2 + 0x44);
      (**(code **)(iVar4 + 0xc))((int)*(int **)(iVar2 + 0x44) + (int)*(short *)(iVar4 + 8),param_1);
      *(undefined4 *)(iVar2 + 0x48) = 0;
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar2 + 0xc);
      piVar1 = *(int **)(iVar2 + 0x44);
    }
    (**(code **)(*piVar1 + 0x1c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x18),param_1);
  }
  return;
}

