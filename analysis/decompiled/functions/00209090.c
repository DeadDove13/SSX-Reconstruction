/* Ghidra pseudocode. PS2 address: 00209090. Not validated source. */

undefined8 FUN_00209090(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  float fVar9;
  undefined1 auStack_1a0 [256];
  
  iVar3 = 0;
  if (0 < (int)param_1[0x27]) {
    iVar6 = 0;
    do {
      piVar7 = (int *)((int)param_1 + iVar6 + 0xa0);
      lVar4 = FUN_00208af0(*piVar7,*param_2);
      if (lVar4 != 0) {
        FUN_0025b630(auStack_1a0,0x2c57a8,*piVar7 + 4);
        fVar9 = (float)FUN_0020a890(DAT_002c5bcc,param_1[1]);
        iVar8 = (int)fVar9;
        fVar9 = (float)FUN_0020a848(DAT_002c5bcc,param_1[1]);
        iVar6 = (int)fVar9;
        fVar9 = (float)FUN_0020a848(DAT_002c5bcc,*param_1);
        iVar3 = (int)fVar9 - iVar6;
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        lVar4 = FUN_0020a7d0(DAT_002c5bcc,*param_1);
        if (lVar4 == 0) {
LAB_0020920c:
          if ((param_1[100] == 0) || (iVar6 = iVar6 + -0x1e, param_1[1] == -1)) {
LAB_00209284:
            uVar5 = (**(code **)(*(int *)(DAT_002c5bcc + 0x32000) + 0x4c))
                              (DAT_002c5bcc + *(short *)(*(int *)(DAT_002c5bcc + 0x32000) + 0x48),
                               *param_1,auStack_1a0,param_2[1],param_1[0x65]);
            return uVar5;
          }
          uVar1 = *param_1;
          if (iVar6 < 300) {
            iVar6 = iVar6 + iVar8;
          }
          uVar2 = param_2[1];
        }
        else {
          if (param_1[100] == 0) goto LAB_00209284;
          if (param_1[1] == -1) goto LAB_0020920c;
          lVar4 = FUN_0020a8d8(DAT_002c5bcc,*param_1);
          if (lVar4 == 0) goto LAB_00209284;
          if (300 < iVar6) {
            if (iVar3 < 0x28) goto LAB_00209284;
            uVar5 = FUN_0020a730(DAT_002c5bcc,*param_1,0xffffffffffffffff,auStack_1a0,param_2[1]);
            iVar6 = (uint)(iVar6 + -0x1e < (int)fVar9) * iVar8 + iVar6 + -0x1e;
            goto LAB_00209260;
          }
          uVar1 = *param_1;
          uVar2 = param_2[1];
          iVar6 = iVar6 + -0x1e + iVar8;
        }
        uVar5 = FUN_0020a730(DAT_002c5bcc,uVar1,0xffffffffffffffff,auStack_1a0,uVar2);
LAB_00209260:
        FUN_00205720(DAT_002c5bcc,iVar6,DAT_002c57b0,0,uVar5,0,0,0);
        return uVar5;
      }
      iVar3 = iVar3 + 1;
      iVar6 = iVar3 * 4;
    } while (iVar3 < (int)param_1[0x27]);
  }
  return 0;
}

