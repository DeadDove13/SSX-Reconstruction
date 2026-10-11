/* Ghidra pseudocode. PS2 address: 0018c100. Not validated source. */

void FUN_0018c100(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  FUN_0018e738();
  iVar1 = DAT_002915c4;
  iVar6 = (int)param_1;
  if (0 < *(int *)(iVar6 + 4)) {
    piVar4 = (int *)(iVar6 + 0x10);
    do {
      iVar2 = *(int *)(*piVar4 + 0xc);
      lVar3 = (**(code **)(iVar2 + 0x1c))(*piVar4 + (int)*(short *)(iVar2 + 0x18));
      if (lVar3 == 0) {
        iVar2 = *(int *)(iVar6 + 4);
      }
      else if (*(int *)*piVar4 == iVar1) {
        FUN_0018e620(param_1,iVar5);
        iVar2 = *(int *)(iVar6 + 4);
      }
      else {
        iVar2 = *(int *)(iVar6 + 4);
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < iVar2);
  }
  return;
}

