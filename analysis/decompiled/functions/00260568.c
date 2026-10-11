/* Ghidra pseudocode. PS2 address: 00260568. Not validated source. */

undefined4 FUN_00260568(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  FUN_0025a6d0();
  uVar1 = *(uint *)(PTR_DAT_002a6620 + 4);
  uVar5 = (long)(int)uVar1 & 0xfffffffc;
  lVar4 = FUN_00256ae0((uVar5 - (param_2 & 0xffffffff)) + 0xfef,0x1000);
  lVar4 = FUN_00256a78(lVar4 + -1,0x1000);
  if ((0xfff < lVar4) &&
     (puVar2 = (undefined *)FUN_0025b198(param_1,0),
     puVar2 == PTR_DAT_002a6620 + (uVar1 & 0xfffffffc))) {
    iVar3 = (int)lVar4;
    lVar4 = FUN_0025b198(param_1,-iVar3);
    if (lVar4 != -1) {
      *(uint *)(PTR_DAT_002a6620 + 4) = (int)uVar5 - iVar3 | 1;
      DAT_002a6a48 = DAT_002a6a48 - iVar3;
      FUN_0025a6d8(param_1);
      return 1;
    }
    iVar3 = FUN_0025b198(param_1,0);
    if (0xf < iVar3 - (int)PTR_DAT_002a6620) {
      DAT_002a6a48 = iVar3 - DAT_002a6a30;
      *(uint *)(PTR_DAT_002a6620 + 4) = iVar3 - (int)PTR_DAT_002a6620 | 1;
    }
  }
  FUN_0025a6d8(param_1);
  return 0;
}

