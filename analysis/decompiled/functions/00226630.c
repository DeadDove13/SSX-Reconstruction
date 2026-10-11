/* Ghidra pseudocode. PS2 address: 00226630. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00226798) */

int FUN_00226630(undefined8 *param_1,int param_2,undefined8 param_3,int *param_4,int param_5,
                int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 uVar6;
  int iVar7;
  
  if (DAT_0029a888 == '\0') {
    iVar7 = -10;
  }
  else {
    iVar7 = 0;
    piVar5 = &DAT_0029a7c0;
    do {
      if (*piVar5 == 0) {
        piVar5 = param_4 + 0x2f;
        *param_4 = (int)piVar5;
        iVar2 = FUN_0022e520(param_3);
        uVar4 = FUN_0022e520(param_3);
        iVar3 = FUN_0022e550(0x225c68,0x225c90,piVar5 + param_2 * 0xb,uVar4);
        param_4[3] = iVar3;
        if (param_4[3] < 0) {
          return param_4[3];
        }
        (&DAT_0029a7e0)[param_4[3]] = (char)iVar7;
        if (param_7 == 0) {
          uVar4 = FUN_0023cab0(param_2 + 2,1,1,(int)(piVar5 + param_2 * 0xb) + iVar2,
                               (param_5 + -0xbc + param_2 * -0x2c) - iVar2);
          *(undefined1 *)(param_4 + 6) = 0;
          param_4[1] = (int)uVar4;
          iVar2 = FUN_0023dc28(uVar4);
          FUN_00227820(param_4[1],iVar2 / 3);
        }
        else {
          *(undefined1 *)(param_4 + 6) = 1;
          param_4[1] = param_6;
        }
        param_4[4] = 0;
        param_4[2] = -1;
        *(char *)((int)param_4 + 0x15) = (char)param_2;
        piVar5 = &DAT_0029a7c0;
        uVar4 = param_1[1];
        uVar6 = param_1[2];
        *(undefined8 *)(param_4 + 0x29) = *param_1;
        *(undefined8 *)(param_4 + 0x2b) = uVar4;
        *(undefined8 *)(param_4 + 0x2d) = uVar6;
        iVar2 = 0;
        iVar3 = 7;
        do {
          iVar1 = *piVar5;
          piVar5 = piVar5 + 1;
          iVar3 = iVar3 + -1;
          if (iVar1 != 0) {
            iVar2 = iVar2 + 1;
          }
        } while (-1 < iVar3);
        if (iVar2 == 0) {
          FUN_0022da10(0x226370);
          DAT_0029a8ec = FUN_00226fc0;
          param_4[0x1d] = 0;
        }
        else {
          param_4[0x1d] = 0;
        }
        (&DAT_0029a7c0)[iVar7] = param_4;
        FUN_00226898(iVar7);
        return iVar7;
      }
      iVar7 = iVar7 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar7 < 8);
    iVar7 = -9;
  }
  return iVar7;
}

