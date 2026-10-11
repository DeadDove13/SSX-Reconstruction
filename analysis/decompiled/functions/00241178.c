/* Ghidra pseudocode. PS2 address: 00241178. Not validated source. */

long FUN_00241178(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = 0;
  bVar1 = false;
  if ((&DAT_002a4b60)[(int)param_1] != 0) {
    do {
      lVar2 = FUN_00240ca8(param_1);
      if (lVar2 < 0) {
        return 0;
      }
      lVar4 = FUN_002410e0(*(undefined4 *)(&DAT_002a4ba4 + (int)lVar2 * 0x40));
      if (lVar4 == 1) {
        bVar1 = true;
      }
      else {
        FUN_00240e60(lVar2);
      }
    } while (!bVar1);
    FUN_00240f70(lVar2);
    FUN_002421e0();
    lVar3 = lVar2;
    do {
      lVar4 = FUN_002427c8(lVar3);
      lVar3 = (long)*(short *)(&DAT_002a4b9e + (int)lVar3 * 0x40);
      if (lVar3 == -1) break;
    } while (lVar4 != 0);
    FUN_00240e60(lVar2);
  }
  return lVar4;
}

