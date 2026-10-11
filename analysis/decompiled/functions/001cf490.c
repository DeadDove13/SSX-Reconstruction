/* Ghidra pseudocode. PS2 address: 001cf490. Not validated source. */

void FUN_001cf490(undefined4 *param_1)

{
  undefined4 uVar1;
  
  FUN_00265040(5);
  uVar1 = AddIntcHandler(5,0x1cf850,0);
  *param_1 = uVar1;
  FUN_002650a8(5);
  return;
}

