/* Ghidra pseudocode. PS2 address: 00227588. Not validated source. */

undefined4 FUN_00227588(undefined8 param_1,undefined2 param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = 0xfffffff8;
  if (DAT_0029a888 == '\0') {
    uVar2 = 0xfffffff6;
  }
  else {
    FUN_002250c0();
    lVar1 = FUN_0022e958(param_1);
    if (lVar1 != 0) {
      *(undefined2 *)((int)lVar1 + 0x28) = param_2;
      uVar2 = 0;
    }
    FUN_002250a0();
  }
  return uVar2;
}

