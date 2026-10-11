/* Ghidra pseudocode. PS2 address: 001d3138. Not validated source. */

void FUN_001d3138(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_1[0x341b];
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  iVar2 = iVar6 + 0x7f;
  if (-1 < iVar6) {
    iVar2 = iVar6;
  }
  iVar6 = iVar6 + (iVar2 >> 7) * -0x80;
  iVar2 = param_1[iVar6 + 0x389];
  if (iVar2 == 0) {
LAB_001d3234:
    iVar1 = *param_1;
    *param_1 = iVar1 + 1;
    piVar3 = (int *)(param_1[1] + iVar1 * 0x10);
    *piVar3 = param_1[0x341b];
    piVar3[3] = iVar2;
    iVar2 = param_1[0x341c];
    param_1[iVar6 + 0x389] = (int)piVar3;
    piVar3[1] = iVar2;
    param_1[0x341e] = (int)piVar3;
    param_1[0x341d] = 1;
    param_1[0x341f] = 0;
    piVar3[2] = 0;
  }
  else {
    iVar1 = param_1[0x341b];
    iVar5 = iVar2;
    while (lVar4 = FUN_001d5bc8(iVar5,iVar1,param_1[0x341c]), lVar4 == 0) {
      iVar5 = *(int *)(iVar5 + 0xc);
      if (iVar5 == 0) goto LAB_001d3234;
      iVar1 = param_1[0x341b];
    }
    param_1[0x341e] = iVar5;
    param_1[0x341d] = 1;
    param_1[0x341f] = 0;
  }
  return;
}

