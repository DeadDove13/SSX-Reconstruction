/* Ghidra pseudocode. PS2 address: 0019c230. Not validated source. */

void FUN_0019c230(int *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  piVar1 = (int *)FUN_00237128(param_2,0);
  param_1[0xd] = (int)piVar1;
  *param_1 = *piVar1;
  iVar7 = piVar1[1];
  param_1[2] = iVar7;
  iVar2 = FUN_0023a448(0x2c5038,iVar7 * 0x3c,0);
  if (iVar2 != 0) {
    FUN_0023bbd0(iVar2,0xffffffffdeadc0ed,iVar7 * 0x3c);
  }
  iVar4 = iVar7 + -1;
  piVar6 = param_1 + 5;
  iVar3 = iVar2;
  if (iVar7 != 0) {
    do {
      *(undefined **)(iVar3 + 0x34) = &DAT_002b5218;
      iVar4 = iVar4 + -1;
      iVar3 = iVar3 + 0x3c;
    } while (iVar4 != -1);
  }
  iVar7 = *param_1;
  param_1[3] = iVar2;
  iVar2 = FUN_0023a448(0x2b5230,iVar7 * 0x3c,0);
  if (iVar2 != 0) {
    FUN_0023bbd0(iVar2,0xffffffffdeadc0ed,iVar7 * 0x3c);
  }
  iVar5 = iVar7 + -1;
  iVar3 = *param_1;
  iVar4 = iVar2;
  if (iVar7 != 0) {
    do {
      *(undefined **)(iVar4 + 0x34) = &DAT_002b5200;
      iVar5 = iVar5 + -1;
      iVar4 = iVar4 + 0x3c;
    } while (iVar5 != -1);
  }
  iVar7 = piVar1[2];
  param_1[1] = iVar2;
  piVar1 = piVar1 + 3;
  iVar2 = 7;
  param_1[4] = param_1[1] + iVar7 * 0x3c;
  do {
    iVar7 = *piVar1;
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
    *piVar6 = param_1[3] + iVar7 * 0x3c;
    piVar6 = piVar6 + 1;
  } while (-1 < iVar2);
  iVar7 = 0;
  if (0 < iVar3) {
    iVar2 = 0;
    do {
      iVar7 = iVar7 + 1;
      iVar3 = FUN_0019bfe8(param_1[1] + iVar2,piVar1);
      iVar2 = iVar2 + 0x3c;
      piVar1 = (int *)((int)piVar1 + iVar3);
    } while (iVar7 < *param_1);
  }
  iVar7 = 0;
  if (0 < param_1[2]) {
    iVar2 = 0;
    do {
      iVar7 = iVar7 + 1;
      iVar3 = FUN_0019c048(param_1[3] + iVar2,piVar1);
      iVar2 = iVar2 + 0x3c;
      piVar1 = (int *)((int)piVar1 + iVar3);
    } while (iVar7 < param_1[2]);
  }
  return;
}

