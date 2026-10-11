/* Ghidra pseudocode. PS2 address: 0025b2f8. Not validated source. */

undefined8 FUN_0025b2f8(undefined8 param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  
  uVar7 = 0;
  puVar6 = (undefined4 *)param_1;
  if (param_2 < 0x20) {
    iVar4 = puVar6[0x75];
    if (iVar4 == 0) {
      lVar2 = FUN_0025b1f8(param_1);
      if (lVar2 != 0) {
        return 0xffffffffffffffff;
      }
      iVar4 = puVar6[0x75];
    }
    iVar5 = (int)param_2 * 4;
    iVar1 = *(int *)(iVar5 + iVar4);
    if (iVar1 == 0) {
      uVar7 = FUN_0025b5a8(param_1);
      uVar7 = FUN_0025b548(param_1,uVar7,param_2);
    }
    else {
      if (iVar1 < 1) {
        if (iVar1 == -1) {
          *puVar6 = 0x16;
          return 1;
        }
        pcVar3 = *(code **)(iVar5 + iVar4);
      }
      else {
        if (iVar1 == 1) {
          return 0;
        }
        pcVar3 = *(code **)(iVar5 + iVar4);
      }
      *(undefined4 *)(iVar5 + iVar4) = 0;
      (*pcVar3)(param_2);
    }
  }
  else {
    uVar7 = 0xffffffffffffffff;
    *puVar6 = 0x16;
  }
  return uVar7;
}

