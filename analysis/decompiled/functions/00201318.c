/* Ghidra pseudocode. PS2 address: 00201318. Not validated source. */

void FUN_00201318(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = FUN_002042b8();
  if ((lVar2 == 0) && (*(int *)((int)param_2 + 0x340) == 1)) {
    FUN_00205720(param_1,500,DAT_002c5618,(int)param_1 + 0x8b6e4,1,0x6b,0x7f,0);
    uVar1 = DAT_002c5570;
    FUN_00205878(param_1,DAT_002c5570);
    if (*(int *)((int)param_1 + 0x8bb74) == 0) {
      FUN_00205720(param_1,3000,uVar1,param_2,0,0,0,0);
    }
  }
  return;
}

