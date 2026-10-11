/* Ghidra pseudocode. PS2 address: 00227660. Not validated source. */

undefined4 FUN_00227660(undefined8 param_1,undefined8 param_2)

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
      *(char *)((int)lVar2 + 0xa4) = (char)param_2;
      FUN_00228610(*(undefined4 *)((int)lVar2 + 8),param_2);
      uVar1 = 0;
    }
  }
  return uVar1;
}

