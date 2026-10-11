/* Ghidra pseudocode. PS2 address: 00269520. Not validated source. */

long FUN_00269520(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  lVar1 = FUN_00257aa8(param_1,0);
  lVar2 = 0;
  if (-1 < lVar1) {
    uVar3 = FUN_00257580(param_1,0x3df0000000000000);
    uVar4 = FUN_00257c48(uVar3);
    lVar2 = uVar4 << 0x20;
    if (lVar2 < 0) {
      uVar3 = FUN_00269610((uVar4 & 0xffffffff) << 0x1f);
      uVar3 = FUN_002574c0(uVar3,uVar3);
    }
    else {
      uVar3 = FUN_00269610(lVar2);
    }
    uVar3 = FUN_00257518(param_1,uVar3);
    lVar1 = FUN_00257aa8(uVar3,0);
    if (lVar1 < 0) {
      uVar3 = FUN_00257518(0,uVar3);
      uVar4 = FUN_00257c48(uVar3);
      uVar4 = -(uVar4 & 0xffffffff);
    }
    else {
      uVar4 = FUN_00257c48(uVar3);
      uVar4 = uVar4 & 0xffffffff;
    }
    lVar2 = lVar2 + uVar4;
  }
  return lVar2;
}

