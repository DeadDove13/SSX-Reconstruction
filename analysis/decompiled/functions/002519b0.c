/* Ghidra pseudocode. PS2 address: 002519b0. Not validated source. */

void FUN_002519b0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_0025bcf8(0x202d4440);
    if (uVar1 < 0x400) {
      uVar2 = FUN_0025bcf8(0x202d4440);
    }
    else {
      uVar2 = 0x3ff;
    }
    FUN_0025a55c(param_1,0x202d4440,uVar2);
    *(undefined1 *)((int)param_1 + (int)uVar2) = 0;
  }
  return;
}

