/* Ghidra pseudocode. PS2 address: 001fdc00. Not validated source. */

void FUN_001fdc00(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = (int)param_1;
  iVar7 = *(int *)(iVar6 + 0x8bb5c);
  if (iVar7 == 0) {
    trap(7);
  }
  iVar7 = ((*(int *)(iVar6 + 0x8bb64) - *(int *)(iVar6 + 0x8bb68)) + iVar7) % iVar7;
  if (0 < iVar7) {
    iVar2 = *(int *)(iVar6 + 0x8bb64);
    while( true ) {
      iVar3 = *(int *)(iVar6 + 0x8bb68);
      if (iVar2 == iVar3) {
        iVar2 = -1;
      }
      else {
        iVar2 = *(int *)(iVar3 * 4 + *(int *)(iVar6 + 0x8bb60));
        *(int *)(iVar6 + 0x8bb68) = iVar3 + 1;
        if (*(int *)(iVar6 + 0x8bb5c) <= iVar3 + 1) {
          *(undefined4 *)(iVar6 + 0x8bb68) = 0;
        }
      }
      iVar3 = *(int *)(iVar6 + 0x8bb68);
      iVar1 = *(int *)(iVar6 + 0x8bb64);
      if (iVar1 == iVar3) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = *(undefined4 *)(iVar3 * 4 + *(int *)(iVar6 + 0x8bb60));
        *(int *)(iVar6 + 0x8bb68) = iVar3 + 1;
        if (*(int *)(iVar6 + 0x8bb5c) <= iVar3 + 1) {
          *(undefined4 *)(iVar6 + 0x8bb68) = 0;
        }
        iVar3 = *(int *)(iVar6 + 0x8bb68);
        iVar1 = *(int *)(iVar6 + 0x8bb64);
      }
      if (iVar1 == iVar3) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = *(undefined4 *)(iVar3 * 4 + *(int *)(iVar6 + 0x8bb60));
        *(int *)(iVar6 + 0x8bb68) = iVar3 + 1;
        if (*(int *)(iVar6 + 0x8bb5c) <= iVar3 + 1) {
          *(undefined4 *)(iVar6 + 0x8bb68) = 0;
        }
      }
      iVar3 = *(int *)(iVar6 + 0x8bb68);
      if (*(int *)(iVar6 + 0x8bb64) == iVar3) {
        iVar1 = -1;
      }
      else {
        iVar1 = *(int *)(iVar3 * 4 + *(int *)(iVar6 + 0x8bb60));
        *(int *)(iVar6 + 0x8bb68) = iVar3 + 1;
        if (*(int *)(iVar6 + 0x8bb5c) <= iVar3 + 1) {
          *(undefined4 *)(iVar6 + 0x8bb68) = 0;
        }
      }
      if (param_2 == iVar2) {
        if (iVar1 != 0) {
          FUN_001f5ef8(param_1,uVar4);
        }
      }
      else {
        iVar3 = *(int *)(iVar6 + 0x8bb5c);
        if (iVar3 == 0) {
          trap(7);
        }
        if ((*(int *)(iVar6 + 0x8bb64) + 1) % iVar3 != *(int *)(iVar6 + 0x8bb68)) {
          *(int *)(*(int *)(iVar6 + 0x8bb64) * 4 + *(int *)(iVar6 + 0x8bb60)) = iVar2;
          iVar2 = *(int *)(iVar6 + 0x8bb64) + 1;
          *(int *)(iVar6 + 0x8bb64) = iVar2;
          if (*(int *)(iVar6 + 0x8bb5c) <= iVar2) {
            *(undefined4 *)(iVar6 + 0x8bb64) = 0;
          }
        }
        iVar2 = *(int *)(iVar6 + 0x8bb64);
        iVar3 = *(int *)(iVar6 + 0x8bb5c);
        if (iVar3 == 0) {
          trap(7);
        }
        if ((iVar2 + 1) % iVar3 != *(int *)(iVar6 + 0x8bb68)) {
          *(undefined4 *)(iVar2 * 4 + *(int *)(iVar6 + 0x8bb60)) = uVar4;
          iVar2 = *(int *)(iVar6 + 0x8bb64) + 1;
          *(int *)(iVar6 + 0x8bb64) = iVar2;
          if (*(int *)(iVar6 + 0x8bb5c) <= iVar2) {
            *(undefined4 *)(iVar6 + 0x8bb64) = 0;
          }
          iVar2 = *(int *)(iVar6 + 0x8bb64);
          iVar3 = *(int *)(iVar6 + 0x8bb5c);
        }
        if (iVar3 == 0) {
          trap(7);
        }
        if ((iVar2 + 1) % iVar3 != *(int *)(iVar6 + 0x8bb68)) {
          *(undefined4 *)(iVar2 * 4 + *(int *)(iVar6 + 0x8bb60)) = uVar5;
          iVar2 = *(int *)(iVar6 + 0x8bb64) + 1;
          *(int *)(iVar6 + 0x8bb64) = iVar2;
          if (*(int *)(iVar6 + 0x8bb5c) <= iVar2) {
            *(undefined4 *)(iVar6 + 0x8bb64) = 0;
          }
        }
        iVar2 = *(int *)(iVar6 + 0x8bb5c);
        if (iVar2 == 0) {
          trap(7);
        }
        if ((*(int *)(iVar6 + 0x8bb64) + 1) % iVar2 != *(int *)(iVar6 + 0x8bb68)) {
          *(int *)(*(int *)(iVar6 + 0x8bb64) * 4 + *(int *)(iVar6 + 0x8bb60)) = iVar1;
          iVar2 = *(int *)(iVar6 + 0x8bb64) + 1;
          *(int *)(iVar6 + 0x8bb64) = iVar2;
          if (*(int *)(iVar6 + 0x8bb5c) <= iVar2) {
            *(undefined4 *)(iVar6 + 0x8bb64) = 0;
          }
        }
      }
      iVar7 = iVar7 + -1;
      if (iVar7 == 0) break;
      iVar2 = *(int *)(iVar6 + 0x8bb64);
    }
  }
  return;
}

