/* Ghidra pseudocode. PS2 address: 0015a570. Not validated source. */

uint FUN_0015a570(undefined8 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2 - 0x18;
  uVar1 = uVar2;
  if (3 < uVar2) {
    uVar1 = param_2 - 0x1e;
    if (uVar2 < 6) {
      uVar1 = param_2 - 0x1c;
    }
  }
  return uVar1;
}

