/* Ghidra pseudocode. PS2 address: 002654c0. Not validated source. */

void FUN_002654c0(int param_1,ulong param_2,undefined4 *param_3)

{
  ushort *puVar1;
  long lVar2;
  int iVar3;
  
  if (param_1 == 3) {
    lVar2 = FUN_00268cf0(*param_3,param_3[4],param_3[1] & 0xffff);
    if (-1 < lVar2) {
      param_3[4] = param_3[4] + (int)lVar2;
      param_3[1] = param_3[1] - (int)lVar2;
      return;
    }
    FUN_00266298(0x2c0b10);
  }
  else {
    if (param_1 < 4) {
      if (param_1 < 1) {
        return;
      }
      if (param_2 == 0) {
        puVar1 = (ushort *)param_3[5];
        for (iVar3 = 0xc; iVar3 < (int)(uint)*puVar1; iVar3 = iVar3 + 1) {
          **(undefined1 **)(param_3[6] + 0xc) = *(undefined1 *)(param_3[5] + iVar3);
          FUN_00265440(param_3[6]);
        }
        param_3[2] = 0;
        return;
      }
      if (0x140 < (uint)(param_3[2] + (int)param_2)) {
        FUN_00266298(0x2c0ad0);
      }
      lVar2 = FUN_00268cb8(*param_3,param_3[5] + param_3[2],param_2 & 0xffff);
      if (lVar2 < 0) {
        FUN_00266298(0x2c0af8);
      }
      param_3[2] = param_3[2] + (int)lVar2;
      return;
    }
    if (param_1 != 4) {
      return;
    }
    if (param_3[1] != 0) {
      FUN_00266298(0x2c0b28,param_3[1]);
    }
  }
  param_3[3] = 0;
  return;
}

