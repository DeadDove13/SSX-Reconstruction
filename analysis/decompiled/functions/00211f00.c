/* Ghidra pseudocode. PS2 address: 00211f00. Not validated source. */

void FUN_00211f00(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  int *piVar6;
  
  piVar6 = (int *)param_1;
  if (piVar6[param_2 * 5 + 0x56] == 0) {
    lVar2 = FUN_00211e08(param_1);
    if ((lVar2 != 0) && (*piVar6 != 3)) {
      uVar3 = FUN_00234e80(DAT_002852fc,0x8c);
      FUN_0019a7f8(param_3,uVar3);
      return;
    }
    FUN_0019a830(param_3,0x2c5868);
    return;
  }
  iVar1 = piVar6[param_2 * 5 + 0x55];
  if (iVar1 < -2) {
    if (((iVar1 < -5) && (iVar1 != -0x2711)) && (iVar1 != -7)) {
LAB_00212060:
      FUN_0019a830(param_3,0x2c5870);
      return;
    }
  }
  else if (iVar1 != -1) {
    if (-2 < iVar1) {
      if (iVar1 == 0) {
        lVar4 = FUN_00211de8(param_1);
        lVar2 = 0;
        if (-1 < lVar4) {
          lVar2 = lVar4;
        }
        FUN_0019a8f0(param_3,0x2bd610,lVar2);
        return;
      }
      goto LAB_00212060;
    }
    uVar5 = 0x8c;
    goto LAB_00212018;
  }
  uVar5 = 0x8e;
LAB_00212018:
  uVar3 = FUN_00234e80(DAT_002852fc,uVar5);
  FUN_0019a7f8(param_3,uVar3);
  return;
}

