/* Ghidra pseudocode. PS2 address: 001f4718. Not validated source. */

undefined8 FUN_001f4718(undefined8 param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  FUN_001f5848();
  iVar3 = (int)param_2;
  iVar6 = (int)param_1;
  *(int *)(iVar6 + 0x351c0) = iVar3;
  *(undefined **)(iVar6 + 0x32000) = &DAT_002bc818;
  iVar4 = iVar3 * 0x1c + 0x10;
  lVar2 = FUN_0023a448(0x2bc7e0,iVar4,0);
  if (lVar2 != 0) {
    FUN_0023bbd0(lVar2,0xffffffffdeadc0ed,iVar4);
  }
  piVar5 = (int *)lVar2 + 4;
  *(int *)lVar2 = iVar3;
  iVar3 = iVar3 + -1;
  piVar1 = piVar5;
  if (param_2 != 0) {
    do {
      iVar3 = iVar3 + -1;
      FUN_001f4490(piVar1);
      piVar1 = piVar1 + 7;
    } while (iVar3 != -1);
  }
  *(int **)(iVar6 + 0x351c4) = piVar5;
  return param_1;
}

