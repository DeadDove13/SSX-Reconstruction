/* Ghidra pseudocode. PS2 address: 00256268. Not validated source. */

void FUN_00256268(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_002561e0(param_1,param_2,0);
  uVar2 = FUN_002561e0(param_1,param_3,0);
  if (param_1 < 0x1f) {
    uVar3 = 0x10;
  }
  else {
    uVar3 = 8;
    if (param_1 < 0x40) {
      uVar3 = 4;
    }
  }
  FUN_0025a55c(uVar2,uVar1,uVar3);
  return;
}

