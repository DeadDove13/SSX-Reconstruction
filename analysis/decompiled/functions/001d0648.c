/* Ghidra pseudocode. PS2 address: 001d0648. Not validated source. */

int FUN_001d0648(int param_1,int param_2,int param_3,long param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_4 == 1) {
    FUN_0025c0c8(*(int *)(param_1 + 0x34) * 0x58 + *(int *)(param_1 + 0x3c) + 4,0x2c5330,5);
    iVar2 = 0;
    iVar3 = 1;
    *(int *)(*(int *)(param_1 + 0x34) * 0x58 + *(int *)(param_1 + 0x3c) + 0x10) = param_2;
    do {
      if (param_2 == iVar3) goto LAB_001d06ec;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 << 1;
    } while (iVar2 < 10);
    iVar2 = -1;
LAB_001d06ec:
    iVar3 = *(int *)(param_1 + 0x3c);
    iVar4 = 0;
    iVar5 = 1;
    *(int *)(*(int *)(param_1 + 0x34) * 0x58 + iVar3 + 0x14) = iVar2;
    *(int *)(*(int *)(param_1 + 0x34) * 0x58 + iVar3 + 0x18) = param_3;
    do {
      if (param_3 == iVar5) goto LAB_001d073c;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 << 1;
    } while (iVar4 < 10);
    iVar4 = -1;
LAB_001d073c:
    iVar2 = param_2 * param_3 * 2;
    *(int *)(*(int *)(param_1 + 0x34) * 0x58 + iVar3 + 0x1c) = iVar4;
    iVar4 = iVar2 + 0xff;
    iVar2 = iVar2 + 0x1fe;
    if (-1 < iVar4) {
      iVar2 = iVar4;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x34) * 0x58 + iVar3 + 0x20) = 2;
    iVar4 = *(int *)(param_1 + 0x34) * 0x58 + iVar3;
    *(undefined4 *)(iVar4 + 0x48) = 1;
  }
  else {
    if (param_4 != 3) {
      iVar2 = *(int *)(param_1 + 0x34);
      goto LAB_001d092c;
    }
    FUN_0025c0c8(*(int *)(param_1 + 0x34) * 0x58 + *(int *)(param_1 + 0x3c) + 4,0x2c5330,5);
    iVar2 = 0;
    iVar3 = 1;
    *(int *)(*(int *)(param_1 + 0x34) * 0x58 + *(int *)(param_1 + 0x3c) + 0x10) = param_2;
    do {
      if (param_2 == iVar3) goto LAB_001d07fc;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 << 1;
    } while (iVar2 < 10);
    iVar2 = -1;
LAB_001d07fc:
    iVar3 = *(int *)(param_1 + 0x3c);
    iVar4 = 0;
    iVar5 = 1;
    *(int *)(*(int *)(param_1 + 0x34) * 0x58 + iVar3 + 0x14) = iVar2;
    *(int *)(*(int *)(param_1 + 0x34) * 0x58 + iVar3 + 0x18) = param_3;
    do {
      if (param_3 == iVar5) goto LAB_001d084c;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 << 1;
    } while (iVar4 < 10);
    iVar4 = -1;
LAB_001d084c:
    iVar2 = param_2 * param_3 * 4;
    *(int *)(*(int *)(param_1 + 0x34) * 0x58 + iVar3 + 0x1c) = iVar4;
    iVar4 = iVar2 + 0xff;
    iVar2 = iVar2 + 0x1fe;
    if (-1 < iVar4) {
      iVar2 = iVar4;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x34) * 0x58 + iVar3 + 0x20) = 0;
    iVar4 = *(int *)(param_1 + 0x34) * 0x58 + iVar3;
    *(undefined4 *)(iVar4 + 0x48) = 1;
  }
  *(undefined4 *)(iVar4 + 0x44) = 3;
  *(undefined4 *)(*(int *)(param_1 + 0x34) * 0x58 + iVar3 + 0x4c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x34) * 0x58 + iVar3 + 0x50) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x34) * 0x58 + iVar3 + 0xc) = 0;
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x34) * 0x58 + iVar3);
  puVar1[0xf] = 0;
  *puVar1 = 3;
  iVar4 = *(int *)(param_1 + 0x34) * 0x58 + iVar3;
  *(undefined4 *)(iVar4 + 0x40) = 3;
  *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + (iVar2 >> 8);
  iVar3 = *(int *)(param_1 + 0x34) * 0x58 + iVar3;
  *(undefined4 *)(iVar3 + 0x38) = 0;
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  *(undefined4 *)(iVar3 + 0x34) = 0;
  iVar2 = *(int *)(param_1 + 0x34);
LAB_001d092c:
  *(int *)(param_1 + 0x34) = iVar2 + 1;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return iVar2;
}

