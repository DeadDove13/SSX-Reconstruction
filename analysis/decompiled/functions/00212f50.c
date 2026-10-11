/* Ghidra pseudocode. PS2 address: 00212f50. Not validated source. */

void FUN_00212f50(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  iVar5 = (int)param_1;
  iVar1 = FUN_00211de8(param_1,*(undefined4 *)(iVar5 + 0xc));
  iVar2 = *(int *)(iVar5 + 0x24) + 0x3ff;
  iVar7 = *(int *)(iVar5 + 0x24) + 0x7fe;
  if (-1 < iVar2) {
    iVar7 = iVar2;
  }
  iVar7 = (iVar7 >> 10) + 0x8a;
  if (0 < *(int *)(iVar5 + 0x10)) {
    puVar4 = (undefined4 *)(iVar5 + 0x174);
    do {
      *puVar4 = 0;
      lVar3 = FUN_002122a8(param_1,iVar6);
      if (lVar3 == 0) {
        if (iVar1 < iVar7) {
          *puVar4 = 1;
        }
        else {
          iVar1 = iVar1 - iVar7;
        }
        iVar2 = *(int *)(iVar5 + 0x10);
      }
      else {
        iVar2 = *(int *)(iVar5 + 0x10);
      }
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 0x1b;
    } while (iVar6 < iVar2);
  }
  return;
}

