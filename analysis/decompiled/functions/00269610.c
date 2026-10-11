/* Ghidra pseudocode. PS2 address: 00269610. Not validated source. */

void FUN_00269610(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00257af8(param_1 >> 0x20);
  uVar1 = FUN_00257580(uVar1,0x40f0000000000000);
  uVar1 = FUN_00257580(uVar1,0x40f0000000000000);
  uVar2 = FUN_00257af8((int)param_1);
  if ((int)param_1 < 0) {
    uVar2 = FUN_002574c0(uVar2,0x41f0000000000000);
  }
  FUN_002574c0(uVar1,uVar2);
  return;
}

