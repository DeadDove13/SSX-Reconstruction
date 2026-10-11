/* Ghidra pseudocode. PS2 address: 001ac5d8. Not validated source. */

void FUN_001ac5d8(undefined8 param_1)

{
  short sVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = (int)param_1;
  FUN_001aae20(*(undefined4 *)(iVar5 + 0x174));
  if (*(int *)(iVar5 + 0x178) == 2) {
    FUN_001d98f0(param_1);
    if (*(int *)(iVar5 + 0x44) == 1) {
      if (*(int *)(iVar5 + 0x1c) == 0) {
        *(undefined4 *)(iVar5 + 0x178) = 0;
      }
      else {
        FUN_00152fc8(0x27a598);
        *(undefined4 *)(iVar5 + 0x178) = 0;
      }
      FUN_001d98b8(param_1);
      return;
    }
  }
  else if (*(int *)(*(int *)(iVar5 + 0x174) + 0xcc) == 0) {
    iVar2 = *(int *)(iVar5 + *(int *)(iVar5 + 0x3f8) * 4 + 0x3f0);
    sVar1 = *(short *)(iVar2 + 0x112);
    if (sVar1 != 0) {
      if (sVar1 < 1) {
        pcVar4 = *(code **)(iVar2 + 0x114);
        iVar2 = (int)*(short *)(iVar2 + 0x110);
      }
      else {
        uVar6 = *(undefined8 *)(sVar1 * 8 + *(int *)(iVar5 + *(short *)(iVar2 + 0x114)) + -8);
        pcVar4 = (code *)((ulong)uVar6 >> 0x20);
        iVar2 = (int)(short)uVar6 + (int)*(short *)(iVar2 + 0x110);
      }
      (*pcVar4)(iVar5 + iVar2);
    }
  }
  else {
    lVar3 = FUN_001aad78(*(int *)(iVar5 + 0x174),0xffffffffffffffff);
    if ((lVar3 != 0) && ((lVar3 != 3 || (*(int *)(iVar5 + 0x178) == 1)))) {
      if (lVar3 != 2) {
        if (lVar3 == 1) {
          if (*(int *)(iVar5 + 0x178) == 1) {
            *(undefined4 *)(iVar5 + 0x178) = 2;
            iVar2 = 0;
            do {
              FUN_001560d8(0x27a598,iVar2);
              iVar2 = iVar2 + 1;
            } while (iVar2 < 4);
            *(undefined4 *)(iVar5 + 0x17c) = 0xb1;
            FUN_001d9840(param_1);
            *(undefined4 *)(*(int *)(iVar5 + 0x16c) + 0x24) = 0x1274;
            *(undefined4 *)(iVar5 + 0x28) = 0x20dfc;
            FUN_001d87a8(param_1,1);
            FUN_001d98f0(param_1);
            FUN_001dc3c8(param_1);
            return;
          }
          iVar5 = *(int *)(iVar5 + 0x3fc);
        }
        else {
          iVar5 = *(int *)(iVar5 + 0x3fc);
        }
        if (iVar5 == 0) {
          iVar5 = 0;
          do {
            FUN_001560d8(0x27a598,iVar5);
            iVar5 = iVar5 + 1;
          } while (iVar5 < 4);
          FUN_00189640(DAT_002859e4);
        }
        else {
          FUN_00152fc8(0x27a598);
          FUN_00152df8(0x27a598);
          *(undefined4 *)(DAT_002859e4 + 0x44) = 1;
        }
        FUN_001acb18(param_1);
        return;
      }
      *(undefined4 *)(iVar5 + 0x178) = 0;
    }
  }
  return;
}

