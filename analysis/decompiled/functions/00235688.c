/* Ghidra pseudocode. PS2 address: 00235688. Not validated source. */

void FUN_00235688(undefined8 param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)param_1;
  if (puVar2[4] == 0) {
    uVar1 = (uint)(byte)*puVar2;
  }
  else if (puVar2[5] < 2) {
    uVar1 = (uint)(byte)*puVar2;
  }
  else {
    FUN_0023a998();
    uVar1 = (uint)(byte)*puVar2;
  }
  puVar2[7] = 0;
  *puVar2 = uVar1;
  FUN_00235630(0x2c5bd8,param_1);
  return;
}

