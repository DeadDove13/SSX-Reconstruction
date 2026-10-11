/* Ghidra pseudocode. PS2 address: 00159028. Not validated source. */

undefined4 FUN_00159028(undefined8 param_1,int param_2,long param_3,int param_4)

{
  if (param_3 == 8) {
    return (&DAT_002c7988)[param_2 * 0xb + param_4];
  }
  return *(undefined4 *)(&DAT_0027e7e8 + (int)param_3 * 4);
}

