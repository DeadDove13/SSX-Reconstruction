/* Ghidra pseudocode. PS2 address: 00204b08. Not validated source. */

undefined1 FUN_00204b08(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = **(undefined1 **)(param_1 + 8);
  *(undefined1 **)(param_1 + 8) = *(undefined1 **)(param_1 + 8) + 1;
  return uVar1;
}

