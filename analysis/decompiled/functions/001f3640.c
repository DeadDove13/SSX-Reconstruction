/* Ghidra pseudocode. PS2 address: 001f3640. Not validated source. */

void FUN_001f3640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  if (*(int *)((int)param_3 * 0x1c + *(int *)(iVar7 + 0x351c4)) == 2) {
    return;
  }
  iVar4 = *(int *)(iVar7 + 0x352fc);
  bVar5 = false;
  if (iVar4 == 0) {
    trap(7);
  }
  iVar1 = ((*(int *)(iVar7 + 0x35304) - *(int *)(iVar7 + 0x35308)) + iVar4) % iVar4;
  iVar2 = *(int *)(DAT_002c5778 + 0x32000);
  if (iVar1 == ((*(int *)(iVar7 + 0x35314) - *(int *)(iVar7 + 0x35318)) + *(int *)(iVar7 + 0x3530c))
               % *(int *)(iVar7 + 0x3530c)) {
    if (iVar4 == 0) {
      trap(7);
    }
    if (iVar1 != ((*(int *)(iVar7 + 0x35324) - *(int *)(iVar7 + 0x35328)) +
                 *(int *)(iVar7 + 0x3531c)) % *(int *)(iVar7 + 0x3531c)) {
      pcVar3 = *(code **)(iVar2 + 0x14);
      goto LAB_001f378c;
    }
    if (iVar4 == 0) {
      trap(7);
    }
    bVar5 = iVar1 == ((*(int *)(iVar7 + 0x35334) - *(int *)(iVar7 + 0x35338)) +
                     *(int *)(iVar7 + 0x3532c)) % *(int *)(iVar7 + 0x3532c);
  }
  pcVar3 = *(code **)(iVar2 + 0x14);
LAB_001f378c:
  (*pcVar3)(DAT_002c5778 + *(short *)(iVar2 + 0x10),bVar5,0x2bc630,0x2bc6a8,0x3c);
  piVar6 = (int *)(iVar7 + 0x352fc);
  if (*piVar6 == 0) {
    trap(7);
  }
  (**(code **)(*(int *)(DAT_002c5778 + 0x32000) + 0x14))
            (DAT_002c5778 + *(short *)(*(int *)(DAT_002c5778 + 0x32000) + 0x10),
             (*(int *)(iVar7 + 0x35304) + 1) % *piVar6 != *(int *)(iVar7 + 0x35308),0x2bc6d0,
             0x2bc6a8,0x3d);
  if (*(int *)(iVar7 + 0x3530c) == 0) {
    trap(7);
  }
  (**(code **)(*(int *)(DAT_002c5778 + 0x32000) + 0x14))
            (DAT_002c5778 + *(short *)(*(int *)(DAT_002c5778 + 0x32000) + 0x10),
             (*(int *)(iVar7 + 0x35314) + 1) % *(int *)(iVar7 + 0x3530c) !=
             *(int *)(iVar7 + 0x35318),0x2bc6e0,0x2bc6a8,0x3e);
  if (*(int *)(iVar7 + 0x3531c) == 0) {
    trap(7);
  }
  (**(code **)(*(int *)(DAT_002c5778 + 0x32000) + 0x14))
            (DAT_002c5778 + *(short *)(*(int *)(DAT_002c5778 + 0x32000) + 0x10),
             (*(int *)(iVar7 + 0x35324) + 1) % *(int *)(iVar7 + 0x3531c) !=
             *(int *)(iVar7 + 0x35328),0x2bc6f8,0x2bc6a8,0x3f);
  if (*(int *)(iVar7 + 0x3532c) == 0) {
    trap(7);
  }
  (**(code **)(*(int *)(DAT_002c5778 + 0x32000) + 0x14))
            (DAT_002c5778 + *(short *)(*(int *)(DAT_002c5778 + 0x32000) + 0x10),
             (*(int *)(iVar7 + 0x35334) + 1) % *(int *)(iVar7 + 0x3532c) !=
             *(int *)(iVar7 + 0x35338),0x2bc710,0x2bc6a8,0x40);
  FUN_001f4ae8(param_1,param_3);
  FUN_001f4898(param_1,param_3);
  if (*piVar6 == 0) {
    trap(7);
  }
  if ((*(int *)(iVar7 + 0x35304) + 1) % *piVar6 != *(int *)(iVar7 + 0x35308)) {
    *(int *)(*(int *)(iVar7 + 0x35304) * 4 + *(int *)(iVar7 + 0x35300)) = (int)param_3;
    iVar4 = *(int *)(iVar7 + 0x35304) + 1;
    *(int *)(iVar7 + 0x35304) = iVar4;
    if (*piVar6 <= iVar4) {
      *(undefined4 *)(iVar7 + 0x35304) = 0;
    }
  }
  FUN_0025bbe4(iVar7 + *(int *)(iVar7 + 0x351f8) * 0x40 + 0x351fc,param_2);
  iVar4 = *(int *)(iVar7 + 0x351f8);
  *(int *)(iVar7 + 0x351f8) = iVar4 + 1;
  iVar1 = *(int *)(iVar7 + 0x3530c);
  if (iVar1 == 0) {
    trap(7);
  }
  if ((*(int *)(iVar7 + 0x35314) + 1) % iVar1 != *(int *)(iVar7 + 0x35318)) {
    *(int *)(*(int *)(iVar7 + 0x35314) * 4 + *(int *)(iVar7 + 0x35310)) = iVar4;
    iVar4 = *(int *)(iVar7 + 0x35314) + 1;
    *(int *)(iVar7 + 0x35314) = iVar4;
    if (*(int *)(iVar7 + 0x3530c) <= iVar4) {
      *(undefined4 *)(iVar7 + 0x35314) = 0;
    }
  }
  iVar4 = *(int *)(iVar7 + 0x3531c);
  if (iVar4 == 0) {
    trap(7);
  }
  if ((*(int *)(iVar7 + 0x35324) + 1) % iVar4 != *(int *)(iVar7 + 0x35328)) {
    *(undefined4 *)(*(int *)(iVar7 + 0x35324) * 4 + *(int *)(iVar7 + 0x35320)) = param_4;
    iVar4 = *(int *)(iVar7 + 0x35324) + 1;
    *(int *)(iVar7 + 0x35324) = iVar4;
    if (*(int *)(iVar7 + 0x3531c) <= iVar4) {
      *(undefined4 *)(iVar7 + 0x35324) = 0;
    }
  }
  iVar4 = *(int *)(iVar7 + 0x3532c);
  if (iVar4 == 0) {
    trap(7);
  }
  if ((*(int *)(iVar7 + 0x35334) + 1) % iVar4 != *(int *)(iVar7 + 0x35338)) {
    *(undefined4 *)(*(int *)(iVar7 + 0x35334) * 4 + *(int *)(iVar7 + 0x35330)) = param_5;
    iVar4 = *(int *)(iVar7 + 0x35334) + 1;
    *(int *)(iVar7 + 0x35334) = iVar4;
    if (*(int *)(iVar7 + 0x3532c) <= iVar4) {
      *(undefined4 *)(iVar7 + 0x35334) = 0;
    }
  }
  if (3 < *(int *)(iVar7 + 0x351f8)) {
    *(undefined4 *)(iVar7 + 0x351f8) = 0;
  }
  FUN_001f3508(param_1);
  return;
}

