/* Ghidra pseudocode. PS2 address: 001fd470. Not validated source. */

undefined4 FUN_001fd470(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  iVar1 = *(int *)(iVar7 + 0x8bb5c);
  if (iVar1 == 0) {
    trap(7);
  }
  iVar1 = ((*(int *)(iVar7 + 0x8bb64) - *(int *)(iVar7 + 0x8bb68)) + iVar1) % iVar1;
  iVar6 = 0;
  if (iVar1 < 1) {
    return 0;
  }
  iVar5 = *(int *)(iVar7 + 0x8bb64);
  do {
    iVar2 = *(int *)(iVar7 + 0x8bb68);
    if (iVar5 == iVar2) {
LAB_001fd510:
      iVar5 = -1;
    }
    else {
      iVar3 = *(int *)(iVar7 + 0x8bb5c);
      if (iVar3 == 0) {
        trap(7);
      }
      if (((iVar5 - iVar2) + iVar3) % iVar3 <= iVar6) goto LAB_001fd510;
      if (iVar3 == 0) {
        trap(7);
      }
      iVar5 = *(int *)(((iVar2 + iVar6) % iVar3) * 4 + *(int *)(iVar7 + 0x8bb60));
    }
    if (param_2 == iVar5) {
      iVar5 = *(int *)(iVar7 + 0x8bb68);
      if (*(int *)(iVar7 + 0x8bb64) == iVar5) {
LAB_001fd57c:
        iVar5 = -1;
      }
      else {
        iVar2 = *(int *)(iVar7 + 0x8bb5c);
        if (iVar2 == 0) {
          trap(7);
        }
        if (((*(int *)(iVar7 + 0x8bb64) - iVar5) + iVar2) % iVar2 <= iVar6 + 1) goto LAB_001fd57c;
        if (iVar2 == 0) {
          trap(7);
        }
        iVar5 = *(int *)(((iVar5 + iVar6 + 1) % iVar2) * 4 + *(int *)(iVar7 + 0x8bb60));
      }
      if (iVar5 == 0) {
        return 1;
      }
      lVar4 = FUN_001f5e68(param_1);
      if (lVar4 != 0) {
        return 1;
      }
    }
    iVar6 = iVar6 + 4;
    if (iVar1 <= iVar6) {
      return 0;
    }
    iVar5 = *(int *)(iVar7 + 0x8bb64);
  } while( true );
}

