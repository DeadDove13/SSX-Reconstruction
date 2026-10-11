/* Ghidra pseudocode. PS2 address: 00148918. Not validated source. */

void FUN_00148918(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = FUN_001eac78();
  if ((lVar1 < 1) || (param_3 < 1)) {
    *(undefined4 *)((int)param_2 + 8) = 0x3f800000;
  }
  else {
    FUN_00148668(param_1,param_3);
    FUN_00147a28(param_2,param_3);
  }
  FUN_001eabb8(param_1,param_2);
  return;
}

