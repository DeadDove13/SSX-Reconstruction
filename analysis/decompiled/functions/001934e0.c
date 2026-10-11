/* Ghidra pseudocode. PS2 address: 001934e0. Not validated source. */

void FUN_001934e0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  param_1[6] = 10;
  param_1[0xe58] = -1;
  param_1[8] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[5] = 0;
  param_1[0xe4a] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0xe57] = 0;
  param_1[0x12] = 0;
  param_1[0x175a] = 0;
  param_1[0x175b] = 0;
  param_1[0x175c] = 0;
  param_1[0x175d] = 0;
  param_1[0x175e] = 0;
  param_1[0x175f] = 0;
  param_1[0x1760] = 0;
  param_1[0x1761] = 0;
  param_1[0x1762] = 0;
  param_1[0x1766] = 0;
  param_1[0x1767] = 0;
  param_1[0x1768] = 0;
  param_1[0x1769] = 0;
  param_1[0x1763] = 0;
  param_1[0x1764] = 0;
  param_1[0x1765] = 0;
  iVar5 = 0;
  do {
    if (param_1[iVar5 + 0xe4f] != 0) {
      FUN_00196a58();
    }
    if (param_1[iVar5 + 0xe4b] != 0) {
      FUN_001981f8();
    }
    piVar3 = param_1 + 0xfda;
    iVar6 = 0;
    iVar7 = iVar5 + 1;
    if (0 < param_1[iVar5 + 0xe53]) {
      piVar4 = param_1 + iVar5 * 0x10 + 0xf9a;
      do {
        puVar1 = (undefined4 *)*piVar4;
        iVar6 = iVar6 + 1;
        FUN_001987d0(puVar1);
        puVar1[4] = 0xffffffff;
        puVar1[1] = 0;
        puVar1[3] = 0;
        iVar2 = param_1[iVar5 + 0xe53];
        *piVar4 = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        piVar4 = piVar4 + 1;
      } while (iVar6 < iVar2);
    }
    param_1[iVar5 + 0xe53] = 0;
    iVar5 = iVar7;
  } while (iVar7 < 4);
  iVar5 = *param_1;
  if (iVar5 == 0) {
    *param_1 = 0;
  }
  else {
    do {
      FUN_00197fb0(iVar5);
      FUN_00197f88(iVar5);
      iVar5 = *(int *)(iVar5 + 0x28);
    } while (iVar5 != 0);
    *param_1 = 0;
  }
  iVar5 = 0x7f;
  param_1[1] = 0;
  do {
    piVar3[0xb] = 0;
    iVar5 = iVar5 + -1;
    piVar3[10] = param_1[1];
    param_1[1] = (int)piVar3;
    piVar3 = piVar3 + 0xf;
  } while (-1 < iVar5);
  piVar3 = param_1 + 0x14;
  iVar5 = 3;
  do {
    iVar5 = iVar5 + -1;
    thunk_FUN_00199c48(piVar3);
    FUN_0019a240(piVar3,0);
    piVar3 = piVar3 + 0x389;
  } while (-1 < iVar5);
  param_1[0xe59] = (int)(param_1 + 0xe5a);
  param_1[0xe5d] = 0;
  piVar4 = param_1 + 0xe5f;
  piVar3 = param_1 + 0xe62;
  do {
    *piVar3 = param_1[0xe59];
    param_1[0xe59] = (int)piVar4;
    piVar3 = piVar3 + 5;
    piVar4 = piVar4 + 5;
  } while ((int)piVar3 < (int)(param_1 + 0xead));
  return;
}

