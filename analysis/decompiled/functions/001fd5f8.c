/* Ghidra pseudocode. PS2 address: 001fd5f8. Not validated source. */

void FUN_001fd5f8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  iVar6 = (int)param_1;
  iVar8 = *(int *)(iVar6 + 0x8bb5c);
  if (iVar8 == 0) {
    trap(7);
  }
  iVar8 = ((*(int *)(iVar6 + 0x8bb64) - *(int *)(iVar6 + 0x8bb68)) + iVar8) % iVar8;
  if (0 < iVar8) {
    iVar3 = *(int *)(iVar6 + 0x8bb64);
    while( true ) {
      iVar1 = *(int *)(iVar6 + 0x8bb68);
      if (iVar3 == iVar1) {
        uVar9 = 0xffffffff;
      }
      else {
        uVar9 = *(undefined4 *)(iVar1 * 4 + *(int *)(iVar6 + 0x8bb60));
        *(int *)(iVar6 + 0x8bb68) = iVar1 + 1;
        if (*(int *)(iVar6 + 0x8bb5c) <= iVar1 + 1) {
          *(undefined4 *)(iVar6 + 0x8bb68) = 0;
        }
      }
      iVar3 = *(int *)(iVar6 + 0x8bb68);
      iVar1 = *(int *)(iVar6 + 0x8bb64);
      if (iVar1 == iVar3) {
        iVar5 = -1;
      }
      else {
        iVar5 = *(int *)(iVar3 * 4 + *(int *)(iVar6 + 0x8bb60));
        *(int *)(iVar6 + 0x8bb68) = iVar3 + 1;
        if (*(int *)(iVar6 + 0x8bb5c) <= iVar3 + 1) {
          *(undefined4 *)(iVar6 + 0x8bb68) = 0;
        }
        iVar3 = *(int *)(iVar6 + 0x8bb68);
        iVar1 = *(int *)(iVar6 + 0x8bb64);
      }
      if (iVar1 == iVar3) {
        iVar1 = -1;
      }
      else {
        iVar1 = *(int *)(iVar3 * 4 + *(int *)(iVar6 + 0x8bb60));
        *(int *)(iVar6 + 0x8bb68) = iVar3 + 1;
        if (*(int *)(iVar6 + 0x8bb5c) <= iVar3 + 1) {
          *(undefined4 *)(iVar6 + 0x8bb68) = 0;
        }
      }
      iVar3 = *(int *)(iVar6 + 0x8bb68);
      if (*(int *)(iVar6 + 0x8bb64) == iVar3) {
        iVar7 = -1;
      }
      else {
        iVar7 = *(int *)(iVar3 * 4 + *(int *)(iVar6 + 0x8bb60));
        *(int *)(iVar6 + 0x8bb68) = iVar3 + 1;
        if (*(int *)(iVar6 + 0x8bb5c) <= iVar3 + 1) {
          *(undefined4 *)(iVar6 + 0x8bb68) = 0;
        }
      }
      if ((iVar5 == 0) || (lVar2 = FUN_001f5e68(param_1,iVar5), lVar2 != 0)) {
        if (*(int *)(iVar6 + 0x32160) < iVar1) {
          iVar3 = *(int *)(iVar6 + 0x8bb64);
          iVar4 = *(int *)(iVar6 + 0x8bb5c);
          if (iVar4 == 0) {
            trap(7);
          }
          if ((iVar3 + 1) % iVar4 != *(int *)(iVar6 + 0x8bb68)) {
            *(undefined4 *)(iVar3 * 4 + *(int *)(iVar6 + 0x8bb60)) = uVar9;
            iVar3 = *(int *)(iVar6 + 0x8bb64) + 1;
            *(int *)(iVar6 + 0x8bb64) = iVar3;
            if (*(int *)(iVar6 + 0x8bb5c) <= iVar3) {
              *(undefined4 *)(iVar6 + 0x8bb64) = 0;
            }
            iVar3 = *(int *)(iVar6 + 0x8bb64);
            iVar4 = *(int *)(iVar6 + 0x8bb5c);
          }
          if (iVar4 == 0) {
            trap(7);
          }
          if ((iVar3 + 1) % iVar4 != *(int *)(iVar6 + 0x8bb68)) {
            *(int *)(iVar3 * 4 + *(int *)(iVar6 + 0x8bb60)) = iVar5;
            iVar3 = *(int *)(iVar6 + 0x8bb64) + 1;
            *(int *)(iVar6 + 0x8bb64) = iVar3;
            if (*(int *)(iVar6 + 0x8bb5c) <= iVar3) {
              *(undefined4 *)(iVar6 + 0x8bb64) = 0;
            }
          }
          iVar3 = *(int *)(iVar6 + 0x8bb64);
          iVar5 = *(int *)(iVar6 + 0x8bb5c);
          if (iVar5 == 0) {
            trap(7);
          }
          if ((iVar3 + 1) % iVar5 != *(int *)(iVar6 + 0x8bb68)) {
            *(int *)(iVar3 * 4 + *(int *)(iVar6 + 0x8bb60)) = iVar1;
            iVar3 = *(int *)(iVar6 + 0x8bb64) + 1;
            *(int *)(iVar6 + 0x8bb64) = iVar3;
            if (*(int *)(iVar6 + 0x8bb5c) <= iVar3) {
              *(undefined4 *)(iVar6 + 0x8bb64) = 0;
            }
            iVar3 = *(int *)(iVar6 + 0x8bb64);
            iVar5 = *(int *)(iVar6 + 0x8bb5c);
          }
          if (iVar5 == 0) {
            trap(7);
          }
          if ((iVar3 + 1) % iVar5 != *(int *)(iVar6 + 0x8bb68)) {
            *(int *)(iVar3 * 4 + *(int *)(iVar6 + 0x8bb60)) = iVar7;
            iVar3 = *(int *)(iVar6 + 0x8bb64) + 1;
            *(int *)(iVar6 + 0x8bb64) = iVar3;
            if (*(int *)(iVar6 + 0x8bb5c) <= iVar3) {
              *(undefined4 *)(iVar6 + 0x8bb64) = 0;
            }
          }
        }
        else if (iVar7 != 0) {
          FUN_001f5ef8(param_1,iVar5);
        }
      }
      iVar8 = iVar8 + -1;
      if (iVar8 == 0) break;
      iVar3 = *(int *)(iVar6 + 0x8bb64);
    }
  }
  return;
}

