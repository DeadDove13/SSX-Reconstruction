/* Ghidra pseudocode. PS2 address: 0019b000. Not validated source. */

undefined8 FUN_0019b000(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  
  lVar1 = FUN_0025bcf8(param_2);
  iVar3 = (int)lVar1 << 1;
  if (lVar1 < 1) {
    uVar2 = FUN_0019b0e0(param_1);
  }
  else {
    lVar1 = FUN_0023a448(0x2c5010,iVar3,0x10);
    if (lVar1 != 0) {
      FUN_0023bbd0(lVar1,0xffffffffdeadc0ed,iVar3);
    }
    FUN_0019a830(lVar1,param_2);
    uVar2 = FUN_0019af58(param_1,lVar1);
    if (lVar1 != 0) {
      FUN_00103710(lVar1);
    }
  }
  return uVar2;
}

