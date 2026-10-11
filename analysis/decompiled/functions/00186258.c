/* Ghidra pseudocode. PS2 address: 00186258. Not validated source. */

void FUN_00186258(int *param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  iVar8 = (int)param_2;
  iVar6 = iVar8 * 0x34 + 0x10;
  lVar1 = FUN_0023a448(0x2c4de0,iVar6,0);
  if (lVar1 != 0) {
    FUN_0023bbd0(lVar1,0xffffffffdeadc0ed,iVar6);
  }
  piVar7 = (int *)lVar1;
  piVar2 = piVar7 + 4;
  *piVar7 = iVar8;
  iVar6 = iVar8 + -1;
  if (param_2 != 0) {
    piVar3 = piVar7 + 0xe;
    do {
      piVar3[-7] = (int)&DAT_002b3760;
      iVar6 = iVar6 + -1;
      piVar3[-9] = 0;
      piVar3[-8] = 0;
      piVar3[-4] = (int)&DAT_002b3760;
      piVar3[-6] = 0;
      piVar3[-5] = 0;
      piVar3[-1] = (int)&DAT_002b3760;
      piVar3[-3] = 0;
      piVar3[-2] = 0;
      piVar3[2] = (int)&DAT_002b3760;
      *piVar3 = 0;
      piVar3[1] = 0;
      piVar3 = piVar3 + 0xd;
    } while (iVar6 != -1);
  }
  param_1[1] = (int)piVar2;
  iVar6 = 0;
  *param_1 = iVar8;
  if (0 < param_2) {
    piVar5 = piVar7 + 0xb;
    piVar4 = piVar7 + 0xe;
    piVar3 = piVar7 + 5;
    piVar7 = piVar7 + 8;
    do {
      *piVar2 = 0;
      iVar6 = iVar6 + 1;
      piVar2[1] = (int)piVar7;
      iVar8 = *param_1;
      piVar7 = piVar7 + 0xd;
      piVar2[5] = (int)piVar3;
      piVar2[7] = (int)piVar4;
      piVar2[0xb] = (int)piVar5;
      piVar4 = piVar4 + 0xd;
      piVar2[2] = 0;
      piVar5 = piVar5 + 0xd;
      piVar2[4] = 0;
      piVar3 = piVar3 + 0xd;
      piVar2[8] = 0;
      piVar2[10] = 0;
      piVar2 = piVar2 + 0xd;
    } while (iVar6 < iVar8);
  }
  return;
}

