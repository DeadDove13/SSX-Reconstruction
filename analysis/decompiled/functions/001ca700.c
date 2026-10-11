/* Ghidra pseudocode. PS2 address: 001ca700. Not validated source. */

void FUN_001ca700(undefined8 param_1,int param_2,int *param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  
  if (param_4 == 0) {
    FUN_001ca2f8();
  }
  else {
    uVar6 = 0xffffffff;
    uVar7 = 0;
    if (0 < param_2) {
      iVar4 = param_2;
      piVar5 = param_3;
      do {
        iVar1 = *piVar5;
        iVar4 = iVar4 + -1;
        piVar5 = piVar5 + 1;
        uVar2 = *(uint *)(iVar1 * 0x30 + *(int *)((int)param_1 + 0x1450) + 0x2c);
        uVar6 = uVar6 & uVar2;
        uVar7 = uVar7 | uVar2;
      } while (iVar4 != 0);
    }
    if (uVar6 == 0) {
      if (uVar7 == 0) {
        FUN_001ca2f8(param_1,param_2,param_3);
      }
      else {
        uVar7 = 0;
        piVar5 = param_3;
        if (0 < param_2 + -2) {
          do {
            iStack_80 = *piVar5;
            iStack_7c = param_3[uVar7 + (uVar7 & 1) + 1];
            iStack_78 = param_3[(uVar7 + 2) - (uVar7 & 1)];
            iVar4 = *(int *)((int)param_1 + 0x1450);
            uVar6 = *(uint *)(iStack_80 * 0x30 + iVar4 + 0x2c);
            uVar2 = *(uint *)(iStack_7c * 0x30 + iVar4 + 0x2c);
            uVar3 = *(uint *)(iStack_78 * 0x30 + iVar4 + 0x2c);
            if ((uVar6 & uVar2 & uVar3) == 0) {
              if ((uVar6 == 0 && uVar2 == 0) && uVar3 == 0) {
                FUN_001ca2f8(param_1,3,&iStack_80);
              }
              else {
                FUN_001c94b0(param_1,iStack_80);
              }
            }
            uVar7 = uVar7 + 1;
            piVar5 = piVar5 + 1;
          } while ((int)uVar7 < param_2 + -2);
        }
      }
    }
  }
  return;
}

