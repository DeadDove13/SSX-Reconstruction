/* Ghidra pseudocode. PS2 address: 001d2ea8. Not validated source. */

void FUN_001d2ea8(undefined8 param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  *puVar2 = 0;
  lVar1 = FUN_0023a448(0x2b76b0,0x8000,0);
  if (lVar1 != 0) {
    FUN_0023bbd0(lVar1,0xffffffffdeadc0ed,0x8000);
  }
  puVar2[1] = (int)lVar1;
  puVar2[2] = 0;
  lVar1 = FUN_0023a448(0x2b76c8,0x68000,0);
  if (lVar1 != 0) {
    FUN_0023bbd0(lVar1,0xffffffffdeadc0ed,0x68000);
  }
  puVar2[3] = (int)lVar1;
  FUN_001d2f98(param_1);
  return;
}

