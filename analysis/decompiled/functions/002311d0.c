/* Ghidra pseudocode. PS2 address: 002311d0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00231308) */
/* WARNING: Removing unreachable block (ram,0x00231270) */
/* WARNING: Removing unreachable block (ram,0x0023128c) */
/* WARNING: Removing unreachable block (ram,0x002312ac) */

undefined4 FUN_002311d0(int param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  short *psVar5;
  int iVar6;
  
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_0022e880(*(undefined4 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x39));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (0 < param_2) {
    cVar1 = *(char *)(param_1 + 0x38);
    while( true ) {
      if (cVar1 == '\0') {
        iVar3 = *(int *)(param_1 + 0x28);
        iVar6 = *(int *)(param_1 + 0x24);
        if (iVar3 + 0x1b < iVar6) {
          iVar6 = ((iVar6 - iVar3) / 0x1c) * 0x1c;
          if (param_2 < iVar6) {
            iVar6 = ((param_2 + 0x1b) / 0x1c) * 0x1c;
          }
          *(int *)(param_1 + 0x10) = iVar6;
          param_2 = param_2 - iVar6;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x20) + (iVar3 * 0xf) / 0x1c;
          (**(code **)(param_1 + 0x34))(param_1 + 0x10);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar6;
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar6;
        }
        else {
          if (iVar3 < iVar6) {
            *(undefined4 *)(param_1 + 0x10) = 0x1c;
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x20) + (iVar3 * 0xf) / 0x1c;
            (**(code **)(param_1 + 0x34))(param_1 + 0x10,*(code **)(param_1 + 0x34),param_2);
            iVar6 = *(int *)(param_1 + 0x28) + 0x1c;
            iVar3 = iVar6 - *(int *)(param_1 + 0x24);
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar3 * -2;
            param_2 = param_2 + -0x1c + iVar3;
            *(int *)(param_1 + 0x30) = (*(int *)(param_1 + 0x30) + 0x1c) - iVar3;
            *(int *)(param_1 + 0x28) = iVar6;
          }
          lVar4 = FUN_0022e2f8(*(undefined4 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x39),
                               param_1 + 0x24);
          psVar5 = (short *)lVar4;
          *(short **)(param_1 + 0x20) = psVar5;
          if (lVar4 == 0) {
            if (param_2 < 1) {
              iVar3 = *(int *)(param_1 + 0x1c);
              goto LAB_00231414;
            }
            if (*(int *)(param_1 + 0x30) != 0) {
              FUN_0025a60c(*(undefined4 *)(param_1 + 0x1c),0,param_2 << 2);
            }
            iVar3 = param_2 * 2;
            param_2 = 0;
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar3;
          }
          else {
            *(short *)(param_1 + 0x14) = (short)(int)(float)(int)*psVar5;
            sVar2 = psVar5[1];
            *(short **)(param_1 + 0x20) = psVar5 + 2;
            *(undefined4 *)(param_1 + 0x28) = 0;
            *(short *)(param_1 + 0x16) = (short)(int)(float)(int)sVar2;
          }
        }
      }
      else {
        iVar3 = FUN_00231500(cVar1,param_1 + 0x3c,param_2,param_1 + 0x1c);
        param_2 = param_2 - iVar3;
        *(char *)(param_1 + 0x38) = *(char *)(param_1 + 0x38) - (char)iVar3;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar3;
      }
      if (param_2 < 1) break;
      cVar1 = *(char *)(param_1 + 0x38);
    }
  }
  iVar3 = *(int *)(param_1 + 0x1c);
LAB_00231414:
  iVar3 = iVar3 + param_2 * 2;
  *(int *)(param_1 + 0x1c) = iVar3;
  if (param_2 < 0) {
    FUN_0022d7d0(param_1 + *(char *)(param_1 + 0x38) * 2 + 0x3c,iVar3,param_2 * -2);
    *(char *)(param_1 + 0x38) = *(char *)(param_1 + 0x38) - (char)param_2;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_2;
  }
  return *(undefined4 *)(param_1 + 0x30);
}

