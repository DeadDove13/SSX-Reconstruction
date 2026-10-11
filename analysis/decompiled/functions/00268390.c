/* Ghidra pseudocode. PS2 address: 00268390. Not validated source. */

undefined4 FUN_00268390(void)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  
  if (DAT_002a6ab4 < 0) {
    while (lVar4 = FUN_002670b8(0x2d7e40,0xffffffff80000006,0), -1 < lVar4) {
      if (DAT_002d7e64 != 0) {
        DAT_002a6ab4 = 0;
        goto LAB_0026841c;
      }
      iVar3 = 0xfffff;
      do {
        bVar1 = iVar3 != -1;
        iVar3 = iVar3 + -1;
      } while (bVar1);
    }
    uVar2 = 0xffffffff;
  }
  else {
LAB_0026841c:
    uVar2 = 0;
  }
  return uVar2;
}

