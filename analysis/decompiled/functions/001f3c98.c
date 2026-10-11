/* Ghidra pseudocode. PS2 address: 001f3c98. Not validated source. */

void FUN_001f3c98(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 0x351f4) != 0) {
    if (*(int *)(iVar5 + 0x35304) == *(int *)(iVar5 + 0x35308)) {
      iVar4 = -1;
    }
    else {
      iVar4 = *(int *)(*(int *)(iVar5 + 0x35308) * 4 + *(int *)(iVar5 + 0x35300));
    }
    if (iVar4 == param_2) {
      FUN_00235ff0(*(undefined4 *)(iVar5 + 0x351f0));
      FUN_001f4ae8(param_1,param_2);
      *(undefined4 *)(iVar5 + 0x351f4) = 0;
    }
  }
  iVar4 = *(int *)(iVar5 + 0x352fc);
  if (iVar4 == 0) {
    trap(7);
  }
  iVar4 = ((*(int *)(iVar5 + 0x35304) - *(int *)(iVar5 + 0x35308)) + iVar4) % iVar4;
  if (0 < iVar4) {
    iVar2 = *(int *)(iVar5 + 0x35304);
    while( true ) {
      iVar1 = *(int *)(iVar5 + 0x35308);
      if (iVar2 == iVar1) {
        iVar2 = -1;
      }
      else {
        iVar2 = *(int *)(iVar1 * 4 + *(int *)(iVar5 + 0x35300));
        *(int *)(iVar5 + 0x35308) = iVar1 + 1;
        if (*(int *)(iVar5 + 0x352fc) <= iVar1 + 1) {
          *(undefined4 *)(iVar5 + 0x35308) = 0;
        }
      }
      if (iVar2 == param_2) {
        iVar2 = *(int *)(iVar5 + 0x35318) + 1;
        if ((*(int *)(iVar5 + 0x35314) != *(int *)(iVar5 + 0x35318)) &&
           (*(int *)(iVar5 + 0x35318) = iVar2, *(int *)(iVar5 + 0x3530c) <= iVar2)) {
          *(undefined4 *)(iVar5 + 0x35318) = 0;
        }
        iVar2 = *(int *)(iVar5 + 0x35328) + 1;
        if ((*(int *)(iVar5 + 0x35324) != *(int *)(iVar5 + 0x35328)) &&
           (*(int *)(iVar5 + 0x35328) = iVar2, *(int *)(iVar5 + 0x3531c) <= iVar2)) {
          *(undefined4 *)(iVar5 + 0x35328) = 0;
        }
        iVar2 = *(int *)(iVar5 + 0x35338) + 1;
        if ((*(int *)(iVar5 + 0x35334) != *(int *)(iVar5 + 0x35338)) &&
           (*(int *)(iVar5 + 0x35338) = iVar2, *(int *)(iVar5 + 0x3532c) <= iVar2)) {
          *(undefined4 *)(iVar5 + 0x35338) = 0;
        }
      }
      else {
        iVar1 = *(int *)(iVar5 + 0x352fc);
        if (iVar1 == 0) {
          trap(7);
        }
        if ((*(int *)(iVar5 + 0x35304) + 1) % iVar1 != *(int *)(iVar5 + 0x35308)) {
          *(int *)(*(int *)(iVar5 + 0x35304) * 4 + *(int *)(iVar5 + 0x35300)) = iVar2;
          iVar2 = *(int *)(iVar5 + 0x35304) + 1;
          *(int *)(iVar5 + 0x35304) = iVar2;
          if (*(int *)(iVar5 + 0x352fc) <= iVar2) {
            *(undefined4 *)(iVar5 + 0x35304) = 0;
          }
        }
        iVar2 = *(int *)(iVar5 + 0x35318);
        if (*(int *)(iVar5 + 0x35314) == iVar2) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = *(undefined4 *)(iVar2 * 4 + *(int *)(iVar5 + 0x35310));
          *(int *)(iVar5 + 0x35318) = iVar2 + 1;
          if (*(int *)(iVar5 + 0x3530c) <= iVar2 + 1) {
            *(undefined4 *)(iVar5 + 0x35318) = 0;
          }
        }
        iVar2 = *(int *)(iVar5 + 0x3530c);
        if (iVar2 == 0) {
          trap(7);
        }
        if ((*(int *)(iVar5 + 0x35314) + 1) % iVar2 != *(int *)(iVar5 + 0x35318)) {
          *(undefined4 *)(*(int *)(iVar5 + 0x35314) * 4 + *(int *)(iVar5 + 0x35310)) = uVar3;
          iVar2 = *(int *)(iVar5 + 0x35314) + 1;
          *(int *)(iVar5 + 0x35314) = iVar2;
          if (*(int *)(iVar5 + 0x3530c) <= iVar2) {
            *(undefined4 *)(iVar5 + 0x35314) = 0;
          }
        }
        iVar2 = *(int *)(iVar5 + 0x35328);
        if (*(int *)(iVar5 + 0x35324) == iVar2) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = *(undefined4 *)(iVar2 * 4 + *(int *)(iVar5 + 0x35320));
          *(int *)(iVar5 + 0x35328) = iVar2 + 1;
          if (*(int *)(iVar5 + 0x3531c) <= iVar2 + 1) {
            *(undefined4 *)(iVar5 + 0x35328) = 0;
          }
        }
        iVar2 = *(int *)(iVar5 + 0x3531c);
        if (iVar2 == 0) {
          trap(7);
        }
        if ((*(int *)(iVar5 + 0x35324) + 1) % iVar2 != *(int *)(iVar5 + 0x35328)) {
          *(undefined4 *)(*(int *)(iVar5 + 0x35324) * 4 + *(int *)(iVar5 + 0x35320)) = uVar3;
          iVar2 = *(int *)(iVar5 + 0x35324) + 1;
          *(int *)(iVar5 + 0x35324) = iVar2;
          if (*(int *)(iVar5 + 0x3531c) <= iVar2) {
            *(undefined4 *)(iVar5 + 0x35324) = 0;
          }
        }
        iVar2 = *(int *)(iVar5 + 0x35338);
        if (*(int *)(iVar5 + 0x35334) == iVar2) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = *(undefined4 *)(iVar2 * 4 + *(int *)(iVar5 + 0x35330));
          *(int *)(iVar5 + 0x35338) = iVar2 + 1;
          if (*(int *)(iVar5 + 0x3532c) <= iVar2 + 1) {
            *(undefined4 *)(iVar5 + 0x35338) = 0;
          }
        }
        iVar2 = *(int *)(iVar5 + 0x3532c);
        if (iVar2 == 0) {
          trap(7);
        }
        if ((*(int *)(iVar5 + 0x35334) + 1) % iVar2 != *(int *)(iVar5 + 0x35338)) {
          *(undefined4 *)(*(int *)(iVar5 + 0x35334) * 4 + *(int *)(iVar5 + 0x35330)) = uVar3;
          iVar2 = *(int *)(iVar5 + 0x35334) + 1;
          *(int *)(iVar5 + 0x35334) = iVar2;
          if (*(int *)(iVar5 + 0x3532c) <= iVar2) {
            *(undefined4 *)(iVar5 + 0x35334) = 0;
          }
        }
      }
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) break;
      iVar2 = *(int *)(iVar5 + 0x35304);
    }
  }
  if (*(int *)(iVar5 + 0x351f4) != 0) {
    return;
  }
  FUN_001f3508(param_1);
  return;
}

