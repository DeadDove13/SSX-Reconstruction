/* Ghidra pseudocode. PS2 address: 00265ad8. Not validated source. */

undefined8 FUN_00265ad8(ulong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = 0;
  uVar5 = 0;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = param_1;
    if ((long)param_1 < 0) {
      uVar3 = -param_1;
      uVar5 = 0x8000000000000000;
    }
    if (uVar3 == 1) {
      bVar1 = true;
    }
    else {
      do {
        uVar3 = (long)uVar3 >> 1;
        lVar4 = lVar4 + 1;
      } while (uVar3 != 1);
      bVar1 = lVar4 < 0x35;
    }
    if (bVar1) {
      param_1 = (long)(param_1 << (long)(0x40 - (int)lVar4)) >> 0xc;
    }
    uVar5 = uVar5 | lVar4 + 0x3ff << 0x34 | param_1;
    if ((long)uVar5 < 0) {
      uVar2 = FUN_00269610(param_1 & 1 | uVar5 >> 1);
      uVar2 = FUN_002574c0(uVar2,uVar2);
    }
    else {
      uVar2 = FUN_00269610();
    }
  }
  return uVar2;
}

