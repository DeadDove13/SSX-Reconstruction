/* Ghidra pseudocode. PS2 address: 00243508. Not validated source. */

int FUN_00243508(short param_1,int param_2,short param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0x20;
  if (param_2 < 0x21) {
    iVar7 = param_2;
  }
  iVar8 = -1;
  iVar5 = 0;
  iVar6 = 0;
  bVar1 = false;
  iVar3 = DAT_002c5b54;
  do {
    iVar2 = iVar5;
    if (iVar5 < iVar7) {
      if ((&DAT_002a4fd2)[iVar3 * 2] == param_3) {
        iVar2 = iVar5 + 1;
        if ((&DAT_002a4fd0)[iVar3 * 2] == param_1) {
          bVar1 = true;
          iVar8 = iVar5;
        }
      }
    }
    else {
      bVar1 = true;
    }
    iVar5 = iVar2;
    iVar4 = iVar3 + -1;
    iVar6 = iVar6 + 1;
    iVar2 = iVar3 + 0x1f;
    if (0x20 < iVar6) {
      bVar1 = true;
    }
    iVar3 = iVar4;
    if (iVar4 < 0) {
      iVar3 = iVar2;
    }
  } while (!bVar1);
  return iVar8;
}

