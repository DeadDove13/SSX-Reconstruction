/* Ghidra pseudocode. PS2 address: 00227820. Not validated source. */

undefined4 FUN_00227820(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if (DAT_0029a888 == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    lVar2 = FUN_00226df0();
    if (lVar2 == 0) {
      uVar1 = 0xfffffff8;
    }
    else {
      FUN_0023d868(*(undefined4 *)((int)lVar2 + 4),param_2);
      uVar1 = 0;
    }
  }
  return uVar1;
}

