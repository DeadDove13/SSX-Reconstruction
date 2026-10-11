/* Ghidra pseudocode. PS2 address: 001880f0. Not validated source. */

bool FUN_001880f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(DAT_002859e4 + 0x38) == 0) {
    iVar6 = *(int *)(param_1 + 0x298);
  }
  else {
    iVar6 = *(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x18);
    if (iVar6 != 0 && iVar6 < 10) {
      iVar6 = 0;
      do {
        while( true ) {
          iVar2 = DAT_002859e4;
          if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c) <= iVar6) {
            return false;
          }
          uVar3 = FUN_00189b78(DAT_002859e4,iVar6);
          lVar4 = FUN_00198a28(*(undefined4 *)(iVar2 + 0x38),uVar3);
          if (lVar4 != 0) break;
          iVar6 = iVar6 + 1;
        }
        iVar2 = FUN_00189b78(DAT_002859e4,iVar6);
        iVar6 = iVar6 + 1;
      } while (*(int *)(iVar2 + 0x390) != param_2);
      return true;
    }
    iVar6 = *(int *)(param_1 + 0x298);
  }
  iVar7 = 30000;
  iVar2 = 0;
  if (0 < iVar6) {
    piVar5 = (int *)(param_1 + 0xa4);
    do {
      iVar1 = *(int *)(*piVar5 + 0x9c);
      iVar6 = iVar6 + -1;
      if (iVar1 < iVar7) {
        iVar2 = *(int *)(*piVar5 + 0x390);
        iVar7 = iVar1;
      }
      piVar5 = piVar5 + 0x20;
    } while (iVar6 != 0);
  }
  return param_2 == iVar2;
}

