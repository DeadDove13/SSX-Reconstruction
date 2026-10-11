/* Ghidra pseudocode. PS2 address: 00170168. Not validated source. */

uint FUN_00170168(undefined8 param_1,uint param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = FUN_00170138(param_1,param_3 & 0x1e000f);
  if (1 < lVar1) {
    param_2 = param_2 & 0xffe1fff0;
  }
  lVar1 = FUN_00170138(param_1,param_3 & 0x9f0);
  if (1 < lVar1) {
    param_2 = param_2 & 0xfffff60f;
  }
  return param_2;
}

