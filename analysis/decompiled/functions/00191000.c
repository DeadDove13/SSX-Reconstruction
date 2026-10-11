/* Ghidra pseudocode. PS2 address: 00191000. Not validated source. */

void FUN_00191000(long param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  iVar10 = 0;
  iVar7 = (int)param_1;
  if (0 < *(int *)(iVar7 + 0x18)) {
    puVar8 = (undefined4 *)(iVar7 + 0x130);
    piVar9 = (int *)(iVar7 + 0x24);
    do {
      lVar4 = FUN_0018dcf0(*piVar9);
      if (lVar4 == 0) {
        iVar3 = *(int *)(iVar7 + 0x18);
      }
      else {
        lVar4 = FUN_0018e708(*(undefined4 *)(iVar7 + 4));
        if (param_1 == lVar4) {
          iVar3 = *piVar9;
        }
        else {
          if (*piVar9 != *(int *)(iVar7 + 0x10)) {
            iVar3 = *(int *)(iVar7 + 0x18);
            goto LAB_0019110c;
          }
          iVar3 = *piVar9;
        }
        iVar5 = 0x14;
        iVar6 = iVar7 + iVar10 * 0x10;
        if (iVar3 == *(int *)(iVar7 + 0x10)) {
          iVar5 = 0;
        }
        iVar1 = *(int *)(iVar3 + 0xc);
        *(int *)(iVar6 + 0x130) = *param_2 + iVar5;
        pcVar2 = *(code **)(iVar1 + 0x2c);
        *(int *)(iVar6 + 0x134) = param_2[1];
        *(int *)(iVar6 + 0x138) = param_2[2] - iVar5;
        uStack_88 = puVar8[2];
        uStack_90 = *puVar8;
        uStack_8c = puVar8[1];
        uStack_84 = puVar8[3];
        (*pcVar2)(iVar3 + *(short *)(iVar1 + 0x28),&uStack_90);
        param_2[1] = param_2[1] + *(int *)(iVar7 + iVar10 * 0x10 + 0x13c);
        iVar3 = *(int *)(iVar7 + 0x18);
      }
LAB_0019110c:
      iVar10 = iVar10 + 1;
      puVar8 = puVar8 + 4;
      piVar9 = piVar9 + 1;
    } while (iVar10 < iVar3);
  }
  return;
}

