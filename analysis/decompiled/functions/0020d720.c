/* Ghidra pseudocode. PS2 address: 0020d720. Not validated source. */

void FUN_0020d720(undefined8 param_1,int param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = 1;
  iVar7 = 0;
  iVar6 = 0;
  if (-1 < param_3) {
    iVar4 = (int)param_3 + 1;
    do {
      iVar6 = iVar6 + iVar2;
      iVar4 = iVar4 + -1;
      iVar2 = iVar2 << 3;
    } while (iVar4 != 0);
  }
  iVar2 = 1;
  if (-1 < param_5) {
    iVar4 = param_5 + 1;
    do {
      iVar7 = iVar7 + iVar2;
      iVar4 = iVar4 + -1;
      iVar2 = iVar2 << 3;
    } while (iVar4 != 0);
  }
  DAT_002c57c8 = 0;
  DAT_002c57cc = 0;
  DAT_002c57d8 = 0;
  DAT_002c57dc = 0;
  DAT_002c57e8 = param_5;
  if (param_2 != 0) {
    iVar2 = param_2 << 2;
    lVar3 = FUN_0023a448(0x2bd448,iVar2,0);
    if (lVar3 != 0) {
      FUN_0023bbd0(lVar3,0xffffffffdeadc0ed,iVar2);
    }
    DAT_002c57c8 = (int)lVar3;
    lVar3 = FUN_0023a448(0x2bd448,iVar2,0);
    if (lVar3 != 0) {
      FUN_0023bbd0(lVar3,0xffffffffdeadc0ed,iVar2);
    }
    DAT_002c57cc = (int)lVar3;
  }
  if (param_4 != 0) {
    iVar2 = param_4 << 2;
    lVar3 = FUN_0023a448(0x2bd448,iVar2,0);
    if (lVar3 != 0) {
      FUN_0023bbd0(lVar3,0xffffffffdeadc0ed,iVar2);
    }
    DAT_002c57d8 = (int)lVar3;
    lVar3 = FUN_0023a448(0x2bd448,iVar2,0);
    if (lVar3 != 0) {
      FUN_0023bbd0(lVar3,0xffffffffdeadc0ed,iVar2);
    }
    DAT_002c57dc = (int)lVar3;
  }
  iVar2 = 0;
  if (0 < param_2) {
    do {
      iVar4 = iVar2 * 4;
      puVar5 = (undefined4 *)(iVar4 + DAT_002c57c8);
      lVar3 = FUN_0023a448(0x2bd448,iVar6,0);
      if (lVar3 != 0) {
        FUN_0023bbd0(lVar3,0xffffffffdeadc0ed,iVar6);
      }
      iVar1 = DAT_002c57cc;
      iVar2 = iVar2 + 1;
      *puVar5 = (int)lVar3;
      *(undefined4 *)(iVar4 + iVar1) = 0xffffffff;
    } while (iVar2 < param_2);
  }
  iVar2 = 0;
  if (0 < param_4) {
    do {
      iVar6 = iVar2 * 4;
      puVar5 = (undefined4 *)(iVar6 + DAT_002c57d8);
      lVar3 = FUN_0023a448(0x2bd448,iVar7,0);
      if (lVar3 != 0) {
        FUN_0023bbd0(lVar3,0xffffffffdeadc0ed,iVar7);
      }
      iVar4 = DAT_002c57dc;
      iVar2 = iVar2 + 1;
      *puVar5 = (int)lVar3;
      *(undefined4 *)(iVar6 + iVar4) = 0xffffffff;
    } while (iVar2 < param_4);
  }
  DAT_002c57d0 = param_2;
  DAT_002c57e0 = param_4;
  DAT_002c57d4 = 0;
  DAT_002c57e4 = 0;
  return;
}

