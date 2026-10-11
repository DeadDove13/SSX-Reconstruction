/* Ghidra pseudocode. PS2 address: 0016dd88. Not validated source. */

undefined4 FUN_0016dd88(int param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if (param_2 == -1) {
    uVar1 = FUN_0016ddf0();
  }
  else {
    lVar2 = FUN_00169d28(*(int *)(param_1 + 0xb3c) + 0x4c8);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)lVar2;
    }
  }
  return uVar1;
}

