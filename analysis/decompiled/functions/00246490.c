/* Ghidra pseudocode. PS2 address: 00246490. Not validated source. */

undefined4 FUN_00246490(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  DAT_002d054c = 0;
  DAT_002d0540 = param_1;
  DAT_002d0544 = param_2;
  DAT_002d0548 = param_3;
  lVar2 = sceSifSetDma(0x2d0540,1);
  if (param_4 == 1) {
    do {
      lVar3 = sceSifDmaStat(lVar2);
    } while (-1 < lVar3);
  }
  uVar1 = 0xffffffff;
  if (lVar2 != 0) {
    uVar1 = 0;
  }
  return uVar1;
}

