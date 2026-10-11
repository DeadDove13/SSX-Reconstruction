/* Ghidra pseudocode. PS2 address: 0023cab0. Not validated source. */

undefined4 * FUN_0023cab0(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  if (param_5 - (param_1 * 100 + param_2 * 0xc + 300 + param_3 * 0x10) < 0x18000) {
    return (undefined4 *)0x0;
  }
  if (param_1 < 2) {
    return (undefined4 *)0x0;
  }
  if (param_1 < 0x101) {
    if (0xf < param_2 - 1U) {
      return (undefined4 *)0x0;
    }
    if (0 < param_3) {
      if (param_2 < param_3) {
        return (undefined4 *)0x0;
      }
      *param_4 = 0x4d525453;
      uVar3 = FUN_0023ee10();
      puVar7 = param_4 + 0x2b;
      puVar4 = puVar7 + param_1 * 0x19;
      param_4[3] = param_1;
      iVar5 = ((uint)(puVar4 + param_2 * 3 + param_3 * 4) & 0xffffff80) + 0x80;
      param_4[5] = param_2;
      param_4[7] = param_3;
      param_4[10] = 0;
      param_4[0xd] = 0;
      param_4[0xe] = 0;
      param_4[0xf] = 0;
      param_4[0x13] = 0;
      param_4[0x14] = 0;
      param_4[0x15] = 0;
      param_4[1] = uVar3;
      param_4[9] = (int)param_4 + param_5;
      param_4[0xb] = 0x96;
      param_4[0xc] = 0x32;
      param_4[0x12] = iVar5;
      param_4[0x16] = puVar7;
      param_4[2] = puVar7;
      param_4[4] = puVar4;
      param_4[6] = puVar4 + param_2 * 3;
      param_4[8] = iVar5;
      param_4[0x10] = iVar5;
      param_4[0x11] = iVar5;
      FUN_0025a60c(param_4 + 0x17,0,0x40);
      param_4[0x27] = 0;
      iVar5 = 0;
      if (param_1 < 1) {
        puVar7 = (undefined4 *)param_4[6];
      }
      else {
        puVar7 = (undefined4 *)param_4[6];
        do {
          iVar1 = param_4[2];
          iVar2 = iVar5 * 100;
          piVar6 = (int *)(iVar1 + iVar2);
          *piVar6 = iVar5;
          iVar5 = iVar5 + 1;
          piVar6[3] = iVar1 + iVar2 + 100;
          piVar6[1] = 0;
        } while (iVar5 < param_1);
      }
      iVar5 = 0;
      *(undefined4 *)(param_1 * 100 + param_4[2] + -0x58) = 0;
      if (0 < param_2) {
        iVar1 = param_4[4];
        do {
          iVar2 = iVar5 * 0xc;
          iVar5 = iVar5 + 1;
          puVar4 = (undefined4 *)(iVar2 + iVar1);
          puVar4[2] = 1;
          *puVar4 = 0;
          puVar4[1] = 0;
        } while (iVar5 < param_2);
      }
      iVar5 = 0;
      puVar4 = puVar7;
      if (param_3 < 1) {
        return puVar7;
      }
      do {
        iVar5 = iVar5 + 1;
        *puVar4 = param_4;
        puVar4[1] = iVar5;
        puVar4[2] = 0;
        puVar4 = puVar4 + 4;
      } while (iVar5 < param_3);
      return puVar7;
    }
  }
  return (undefined4 *)0x0;
}

