/* Ghidra pseudocode. PS2 address: 002694c0. Not validated source. */

long FUN_002694c0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00257aa8(param_1,0);
  if (lVar1 < 0) {
    uVar2 = FUN_00257518(0,param_1);
    lVar1 = FUN_00269520(uVar2);
    lVar1 = -lVar1;
  }
  else {
    lVar1 = FUN_00269520(param_1);
  }
  return lVar1;
}

