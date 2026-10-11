/* Ghidra pseudocode. PS2 address: 00131f80. Not validated source. */

undefined8 FUN_00131f80(undefined8 param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  FUN_00131e28(puVar2 + 1,0x100);
  FUN_00131bd0(puVar2 + 4,0x100);
  *puVar2 = 0x100;
  lVar1 = FUN_0023a448(0x2aab68,0x1fe00,0);
  if (lVar1 != 0) {
    FUN_0023bbd0(lVar1,0xffffffffdeadc0ed,0x1fe00);
  }
  puVar2[10] = (int)lVar1;
  FUN_0023bbd0(lVar1,0,0x1fe00);
  return param_1;
}

