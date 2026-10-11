/* Ghidra pseudocode. PS2 address: 0022f290. Not validated source. */

void FUN_0022f290(int param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  if (DAT_002a1b30._4_1_ != 0) {
    do {
      pcVar5 = (char *)(DAT_002a1c9c + iVar7 * 0x54);
      if (*pcVar5 == '\x02') {
        if (pcVar5[1] == '\0') {
          uVar2 = 0;
          iVar8 = param_1;
        }
        else {
          uVar2 = FUN_0022ed70(pcVar5,param_1);
          pcVar5[1] = '\0';
          iVar8 = param_1 - (int)uVar2;
        }
        if (iVar8 == 0) goto LAB_0022f414;
        lVar3 = (**(code **)(*(int *)(pcVar5 + 0x34) + 4))
                          (*(int *)(pcVar5 + 0x34),iVar8,DAT_002a1c14,DAT_002a1c18,0);
        if (-1 < lVar3) {
          if (lVar3 != 0) {
            iVar6 = 0;
            if (DAT_002a1b30._5_1_ != 0) {
              iVar4 = 0;
              do {
                if (*(float *)(pcVar5 + iVar4 + 0x14) != 0.0) {
                  (*DAT_002a1ca0)(iVar8,DAT_002a1c18,
                                  *(int *)((int)&DAT_002a1c2c + iVar4) + (int)uVar2 * 4);
                }
                iVar6 = iVar6 + 1;
                iVar4 = iVar6 * 4;
              } while (iVar6 < (int)(uint)DAT_002a1b30._5_1_);
            }
            if (DAT_002a1b44 != (code *)0x0) {
              (*DAT_002a1b44)(pcVar5,iVar8,DAT_002a1c18,uVar2);
              uVar1 = (uint)DAT_002a1b30._4_1_;
              goto LAB_0022f418;
            }
          }
          goto LAB_0022f414;
        }
        FUN_0022f828(iVar7);
        (*DAT_002a1b38)(iVar7);
        uVar1 = (uint)DAT_002a1b30._4_1_;
      }
      else {
LAB_0022f414:
        uVar1 = (uint)DAT_002a1b30._4_1_;
      }
LAB_0022f418:
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)uVar1);
  }
  if (DAT_002a1b48 != (code *)0x0) {
    (*DAT_002a1b48)(param_1);
  }
  if (DAT_002a1b30._5_1_ != 0) {
    iVar7 = 0;
    do {
      iVar8 = iVar7 + 1;
      FUN_00232b64(param_1,(&DAT_002a1c2c)[iVar7],*(undefined4 *)(iVar7 * 4 + param_2));
      FUN_0022d8c8((&DAT_002a1c2c)[iVar7],param_1 << 2);
      iVar7 = iVar8;
    } while (iVar8 < (int)(uint)DAT_002a1b30._5_1_);
  }
  return;
}

