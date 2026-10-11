/* Ghidra pseudocode. PS2 address: 00207728. Not validated source. */

undefined8 FUN_00207728(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffffffffffff;
  if (*(undefined4 **)(param_1 + 0x35f88) != (undefined4 *)0x0) {
    uVar1 = FUN_00228098(**(undefined4 **)(param_1 + 0x35f88));
  }
  return uVar1;
}

