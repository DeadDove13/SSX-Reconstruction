/* Ghidra pseudocode. PS2 address: 00215e98. Not validated source. */

undefined4 FUN_00215e98(undefined8 param_1,int *param_2,undefined8 param_3,int param_4,long param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  *(undefined4 *)(iVar6 + 0x2da8) = 0;
  uVar4 = 1;
  *(undefined4 *)(iVar6 + 0x2dac) = 0;
  piVar3 = (int *)(iVar6 + 0x2d68);
  *(undefined4 *)(iVar6 + 0x2d64) = 0;
  do {
    uVar4 = uVar4 + 1;
    *piVar3 = piVar3[-1] * 2 + 1;
    piVar3 = piVar3 + 1;
  } while (uVar4 < 0x11);
  FUN_00214be0(param_1);
  iVar1 = param_2[1];
  iVar2 = *param_2;
  *(int *)(iVar6 + 0x2db8) = iVar1;
  *(int *)(iVar6 + 0x2de8) = iVar1;
  *(undefined4 *)((int)param_3 + 4) = 0;
  *(undefined4 *)(iVar6 + 0x2da8) = 0;
  *(undefined4 *)(iVar6 + 0x2dac) = 0;
  *(undefined4 *)(iVar6 + 0x2de4) = 0;
  *(int *)(iVar6 + 0x2db4) = iVar2 + iVar1;
  *(int *)(iVar6 + 0x2db0) = iVar2;
  FUN_00214d50(param_1,0x39,0xf);
  if (param_4 == param_2[1]) {
    if (param_5 == 0) {
      uVar5 = 0x30fb;
    }
    else if (param_5 == 1) {
      uVar5 = 0x32fb;
    }
    else {
      uVar5 = 0x34fb;
      if (param_5 != 2) {
        uVar5 = 0;
      }
    }
    FUN_00214530(param_1,param_3,uVar5,0x10);
    FUN_00214530(param_1,param_3,param_2[1],0x18);
  }
  else {
    if (param_5 == 0) {
      uVar5 = 0x31fb;
    }
    else if (param_5 == 1) {
      uVar5 = 0x33fb;
    }
    else {
      uVar5 = 0x35fb;
      if (param_5 != 2) {
        uVar5 = 0;
      }
    }
    FUN_00214530(param_1,param_3,uVar5,0x10);
    FUN_00214530(param_1,param_3,param_4,0x18);
    FUN_00214530(param_1,param_3,param_2[1],0x18);
  }
  FUN_00215970(param_1,param_3,0x39);
  return *(undefined4 *)((int)param_3 + 4);
}

