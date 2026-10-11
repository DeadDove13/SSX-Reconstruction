/* Ghidra pseudocode. PS2 address: 00102f00. Not validated source. */

void FUN_00102f00(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar8 = (int)param_2;
  *(float *)(iVar8 + 0x14) = *(float *)(iVar8 + 0x14) + DAT_002c100c;
  if (iVar2 == 1) {
    FUN_001014f0(param_2,0);
    if (*(int *)(iVar8 + 0x438) == 0) {
      if (*(int *)(param_1 + 8) == 2) {
        FUN_0015da00(*(undefined4 *)(DAT_002859e4 + 0xa0),0x2a6da0);
      }
      else if (*(int *)(param_1 + 8) == 3) {
        FUN_0015da00(*(undefined4 *)(DAT_002859e4 + 0xa0),0x2a6db0);
      }
      else {
        FUN_0015da00(*(undefined4 *)(DAT_002859e4 + 0xa0),0x2a6dc0);
      }
      *(undefined4 *)(param_1 + 4) = 2;
      uVar4 = FUN_0023b170();
      uVar5 = FUN_0023b070();
      FUN_0018ac08(0x2a6d28,uVar4,uVar5);
      return;
    }
  }
  else if (iVar2 == 2) {
    lVar6 = FUN_0015da60(*(undefined4 *)(DAT_002859e4 + 0xa0));
    iVar2 = DAT_002859e4;
    if (lVar6 == 0) {
      *(undefined4 *)(param_1 + 4) = 3;
      FUN_0015da00(*(undefined4 *)(iVar2 + 0xa0),0x2a6dd0);
      return;
    }
  }
  else if (iVar2 == 4) {
    FUN_001014f0(param_2,0);
    if (*(int *)(iVar8 + 0x438) == 0) {
      uVar1 = *(undefined4 *)(DAT_002859e4 + 0x30);
      FUN_001a32c8(uVar1,1,0xffffffffffffffff);
      FUN_001a32b0(uVar1,9,0xffffffffffffffff);
      iVar2 = FUN_001a36e8(uVar1);
      *(undefined4 *)(iVar2 + 0x188) = 1;
      uVar4 = FUN_001a36e8(uVar1);
      FUN_001e5608(uVar4,1);
      FUN_0015dac8(*(undefined4 *)(DAT_002859e4 + 0xa0));
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  else if (iVar2 == 5) {
    FUN_001014f0(param_2,0);
    if (*(int *)(iVar8 + 0x438) == 0) {
      FUN_00189640(DAT_002859e4);
      return;
    }
  }
  else if (((iVar2 == 0) && (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x4c) == 0)) &&
          (iVar2 = 0, 0 < *(int *)(iVar8 + 0x8c))) {
    piVar7 = (int *)(iVar8 + 200);
    do {
      if (*(char *)(*(int *)(*piVar7 + 0x394) + 0x54) < '\0') {
        iVar3 = *(int *)(iVar8 + 0x8c);
      }
      else {
        lVar6 = FUN_0010a150();
        if (lVar6 != 0) {
          FUN_00103700(DAT_002859e4);
          FUN_00198990(*(undefined4 *)(DAT_002859e4 + 0x38));
          return;
        }
        iVar3 = *(int *)(iVar8 + 0x8c);
      }
      iVar2 = iVar2 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar2 < iVar3);
  }
  return;
}

