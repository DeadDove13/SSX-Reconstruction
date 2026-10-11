/* Ghidra pseudocode. PS2 address: 0022c7a0. Not validated source. */

void FUN_0022c7a0(ulong param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_002250c0();
  if ((param_1 & 0x40) != 0) {
    FUN_0022c6c0(param_2,DAT_0029a900,DAT_0029a904);
  }
  if ((param_1 & 0x20) != 0) {
    if (param_2 == 0) {
      DAT_002a1b48 = (undefined1 *)0x0;
      DAT_002a1b40 = (code *)0x0;
      DAT_002a1b44 = (code *)0x0;
      FUN_00233be8();
    }
    else {
      puVar1 = DAT_0029a900;
      if (param_2 != 1) {
        puVar1 = &DAT_002a1ac8;
      }
      FUN_00233918(DAT_0029a820._6_2_,puVar1);
      DAT_002a1b48 = &LAB_0022f9e0;
      DAT_002a1b40 = FUN_0022f9c8;
      DAT_002a1b44 = FUN_0022fce0;
    }
  }
  FUN_002250a0();
  return;
}

