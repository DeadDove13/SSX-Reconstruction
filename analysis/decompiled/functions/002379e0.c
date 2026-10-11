/* Ghidra pseudocode. PS2 address: 002379e0. Not validated source. */

undefined8 FUN_002379e0(uint param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((int)param_1 >> 0x18 == 1) {
    uVar1 = FUN_0018bf30(param_1 & 0xffffff,0,0);
  }
  else if ((int)param_1 >> 0x18 == 2) {
    uVar1 = FUN_00267c80(param_1 & 0xffffff,0,2);
  }
  return uVar1;
}

