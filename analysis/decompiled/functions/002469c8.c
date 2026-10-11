/* Ghidra pseudocode. PS2 address: 002469c8. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_002469c8(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  ram0x002a51e8 = 1;
  while (FUN_002670b8(0x2d1800,0xffffffff80000100,0), DAT_002d1824 == 0) {
    iVar2 = 0xffff;
    do {
      bVar1 = iVar2 != -1;
      iVar2 = iVar2 + -1;
    } while (bVar1);
  }
  while (FUN_002670b8(0x2d1828,0xffffffff80000101,0), DAT_002d184c == 0) {
    iVar2 = 0xffff;
    do {
      bVar1 = iVar2 != -1;
      iVar2 = iVar2 + -1;
    } while (bVar1);
  }
  lVar3 = FUN_00247968();
  if (lVar3 < 0x204) {
    FUN_0025a720(0x2becc0);
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00246ad8(param_1);
  }
  return uVar4;
}

