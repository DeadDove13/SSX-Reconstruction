/* Ghidra pseudocode. PS2 address: 002370f8. Not validated source. */

undefined8 FUN_002370f8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [128];
  
  lVar1 = FUN_00236a98(param_1,auStack_90,0x80);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_002365e8(auStack_90);
  }
  return uVar2;
}

