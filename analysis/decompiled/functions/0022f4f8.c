/* Ghidra pseudocode. PS2 address: 0022f4f8. Not validated source. */

void FUN_0022f4f8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int aiStack_50 [4];
  
  piVar4 = aiStack_50;
  for (uVar2 = (uint)DAT_002a1b30._5_1_; uVar2 != 0; uVar2 = uVar2 - 1) {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    *piVar4 = uVar1;
    piVar4 = piVar4 + 1;
  }
  if (0 < param_2) {
    do {
      iVar3 = 0x100;
      if (param_2 < 0x101) {
        iVar3 = param_2;
      }
      FUN_0022f290(iVar3,aiStack_50);
      iVar3 = 0;
      if (DAT_002a1b30._5_1_ != 0) {
        do {
          piVar4 = aiStack_50 + iVar3;
          iVar3 = iVar3 + 1;
          *piVar4 = *piVar4 + (uint)DAT_002a1b3c;
        } while (iVar3 < (int)(uint)DAT_002a1b30._5_1_);
      }
      param_2 = param_2 + -0x100;
    } while (0 < param_2);
  }
  return;
}

