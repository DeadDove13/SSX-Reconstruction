/* Ghidra pseudocode. PS2 address: 001f40a8. Not validated source. */

void FUN_001f40a8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iStack_60;
  int iStack_5c;
  
  iVar5 = (int)param_1;
  if ((*(int *)(iVar5 + 0x351f4) != 0) &&
     (lVar2 = FUN_00235e28(*(undefined4 *)(iVar5 + 0x351f0)), lVar2 != 0)) {
    if ((lVar2 < 1) || (lVar2 != 1)) {
      FUN_001f3b60(param_1);
    }
    else {
      iStack_60 = 0;
      iStack_5c = 0;
      FUN_00235eb0(*(undefined4 *)(iVar5 + 0x351f0),&iStack_60,(uint)&iStack_60 | 4);
      uVar4 = 0;
      if ((iStack_60 != 0) && (uVar4 = 1, iStack_5c == 0)) {
        uVar4 = 0;
      }
      (**(code **)(*(int *)(DAT_002c5778 + 0x32000) + 0x14))
                (DAT_002c5778 + *(short *)(*(int *)(DAT_002c5778 + 0x32000) + 0x10),uVar4,0x2bc728,
                 0x2bc6a8,0x9e);
      if (*(int *)(iVar5 + 0x35334) == *(int *)(iVar5 + 0x35338)) {
        iVar1 = -1;
      }
      else {
        iVar1 = *(int *)(*(int *)(iVar5 + 0x35338) * 4 + *(int *)(iVar5 + 0x35330));
      }
      (**(code **)(*(int *)(DAT_002c5778 + 0x32000) + 0x14))
                (DAT_002c5778 + *(short *)(*(int *)(DAT_002c5778 + 0x32000) + 0x10),
                 iStack_5c <= iVar1,0x2bc738,0x2bc6a8,0x9f);
      if ((iStack_60 == 0) || (iStack_5c == 0)) {
        iVar1 = *(int *)(iVar5 + 0x35308);
        uVar3 = 0xffffffff;
        if (*(int *)(iVar5 + 0x35304) != iVar1) {
          uVar3 = *(undefined4 *)(iVar1 * 4 + *(int *)(iVar5 + 0x35300));
          *(int *)(iVar5 + 0x35308) = iVar1 + 1;
          if (*(int *)(iVar5 + 0x352fc) <= iVar1 + 1) {
            *(undefined4 *)(iVar5 + 0x35308) = 0;
          }
        }
        FUN_001f4ae8(param_1,uVar3);
      }
      else {
        iVar1 = *(int *)(iVar5 + 0x35308);
        uVar3 = 0xffffffff;
        if (*(int *)(iVar5 + 0x35304) != iVar1) {
          uVar3 = *(undefined4 *)(iVar1 * 4 + *(int *)(iVar5 + 0x35300));
          *(int *)(iVar5 + 0x35308) = iVar1 + 1;
          if (*(int *)(iVar5 + 0x352fc) <= iVar1 + 1) {
            *(undefined4 *)(iVar5 + 0x35308) = 0;
          }
        }
        FUN_001f49b8(param_1,uVar3,iStack_60,iStack_5c);
      }
      iVar1 = *(int *)(iVar5 + 0x35318) + 1;
      if ((*(int *)(iVar5 + 0x35314) != *(int *)(iVar5 + 0x35318)) &&
         (*(int *)(iVar5 + 0x35318) = iVar1, *(int *)(iVar5 + 0x3530c) <= iVar1)) {
        *(undefined4 *)(iVar5 + 0x35318) = 0;
      }
      iVar1 = *(int *)(iVar5 + 0x35328) + 1;
      if ((*(int *)(iVar5 + 0x35324) != *(int *)(iVar5 + 0x35328)) &&
         (*(int *)(iVar5 + 0x35328) = iVar1, *(int *)(iVar5 + 0x3531c) <= iVar1)) {
        *(undefined4 *)(iVar5 + 0x35328) = 0;
      }
      iVar1 = *(int *)(iVar5 + 0x35338) + 1;
      if ((*(int *)(iVar5 + 0x35334) != *(int *)(iVar5 + 0x35338)) &&
         (*(int *)(iVar5 + 0x35338) = iVar1, *(int *)(iVar5 + 0x3532c) <= iVar1)) {
        *(undefined4 *)(iVar5 + 0x35338) = 0;
      }
      *(undefined4 *)(iVar5 + 0x351f4) = 0;
      FUN_001f3508(param_1);
    }
  }
  return;
}

