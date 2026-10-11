/* Ghidra pseudocode. PS2 address: 00165150. Not validated source. */

undefined8 FUN_00165150(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 1) {
    uVar2 = FUN_001652f0();
  }
  else if (iVar1 < 2) {
    uVar2 = 0;
    if (iVar1 == 0) {
      uVar2 = FUN_001651c8();
    }
  }
  else {
    uVar2 = 0;
    if (iVar1 == 2) {
      uVar2 = FUN_00165260();
    }
  }
  return uVar2;
}

