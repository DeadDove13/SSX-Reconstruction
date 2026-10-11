/* Ghidra pseudocode. PS2 address: 00159138. Not validated source. */

undefined4 FUN_00159138(undefined8 param_1,int param_2,long param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_3 == 8) {
    puVar1 = &DAT_002c7388;
    param_2 = param_2 << 6;
  }
  else {
    puVar1 = &DAT_002c6788;
    param_2 = param_2 << 7;
    param_4 = (int)param_3;
  }
  return *(undefined4 *)((int)puVar1 + param_2 + param_4 * 0x10 + 0xc);
}

