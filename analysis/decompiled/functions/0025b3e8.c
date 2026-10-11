/* Ghidra pseudocode. PS2 address: 0025b3e8. Not validated source. */

undefined4 FUN_0025b3e8(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 0x20) {
    iVar5 = *(int *)((int)param_1 + 0x1d4);
    if (iVar5 == 0) {
      lVar3 = FUN_0025b1f8(param_1);
      if (lVar3 != 0) goto LAB_0025b424;
      iVar5 = *(int *)((int)param_1 + 0x1d4);
    }
    iVar6 = (int)param_2 * 4;
    iVar1 = *(int *)(iVar6 + iVar5);
    uVar2 = 1;
    if (iVar1 != 0) {
      if (iVar1 < 1) {
        if (iVar1 == -1) {
          return 2;
        }
        pcVar4 = *(code **)(iVar6 + iVar5);
      }
      else {
        if (iVar1 == 1) {
          return 3;
        }
        pcVar4 = *(code **)(iVar6 + iVar5);
      }
      *(undefined4 *)(iVar6 + iVar5) = 0;
      (*pcVar4)(param_2);
      uVar2 = 0;
    }
  }
  else {
LAB_0025b424:
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

