/* Ghidra pseudocode. PS2 address: 001f4b60. Not validated source. */

void FUN_001f4b60(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = (int)param_1;
  iVar6 = 0;
  if (0 < *(int *)(iVar8 + 0x351c0)) {
    iVar7 = 0;
    do {
      bVar1 = false;
      if (*(int *)(iVar7 + *(int *)(iVar8 + 0x351c4)) == 1) {
        uVar3 = FUN_001f4c90(param_1,iVar6);
        lVar4 = FUN_00225a70(uVar3);
        bVar1 = true;
        if (lVar4 != 1) {
          bVar1 = false;
        }
      }
      if (bVar1) {
        iVar5 = iVar7 + *(int *)(iVar8 + 0x351c4);
        iVar2 = FUN_001f44f8(iVar5);
        if (*(int *)(iVar5 + 0x14) == iVar2) {
          iVar2 = *(int *)(iVar8 + 0x351c0);
        }
        else {
          (**(code **)(*(int *)(DAT_002c5778 + 0x32000) + 0x14))
                    (DAT_002c5778 + *(short *)(*(int *)(DAT_002c5778 + 0x32000) + 0x10),0,0x2bc808,
                     0x2bc7b8,0xaf);
          iVar2 = *(int *)(iVar8 + 0x351c0);
        }
      }
      else {
        iVar2 = *(int *)(iVar8 + 0x351c0);
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x1c;
    } while (iVar6 < iVar2);
  }
  return;
}

