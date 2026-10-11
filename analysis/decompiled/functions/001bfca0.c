/* Ghidra pseudocode. PS2 address: 001bfca0. Not validated source. */

undefined8 FUN_001bfca0(undefined8 param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  piVar7 = (int *)param_1;
  *piVar7 = param_2;
  FUN_002368e8(0x2b6d28);
  uVar2 = FUN_00237128(0x2b6d28,0x10);
  uVar3 = FUN_0023b460(uVar2);
  iVar5 = param_2 * 0x60 + 0x10;
  lVar4 = FUN_0023a448(0x2b6d40,iVar5,0);
  if (lVar4 != 0) {
    FUN_0023bbd0(lVar4,0xffffffffdeadc0ed,iVar5);
  }
  piVar6 = (int *)lVar4 + 4;
  *(int *)lVar4 = param_2;
  iVar5 = param_2 + -1;
  piVar1 = piVar6;
  if (param_2 != 0) {
    do {
      iVar5 = iVar5 + -1;
      FUN_001bff18(piVar1);
      piVar1 = piVar1 + 0x18;
    } while (iVar5 != -1);
  }
  piVar7[1] = (int)piVar6;
  if (0 < param_2) {
    iVar5 = 0;
    do {
      param_2 = param_2 + -1;
      FUN_0021a560(piVar7[1] + iVar5,uVar2,uVar3);
      iVar5 = iVar5 + 0x60;
    } while (param_2 != 0);
  }
  FUN_0023a998(uVar2);
  return param_1;
}

