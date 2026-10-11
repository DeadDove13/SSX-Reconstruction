/* Ghidra pseudocode. PS2 address: 00168070. Not validated source. */

void FUN_00168070(int param_1,ulong param_2)

{
  long lVar1;
  
  if (((param_2 < 4) || (param_2 == 0x10)) || (param_2 == 0x11)) {
    if ((*(int *)(param_1 + 0x360) == -1) || (lVar1 = FUN_00228a10(), lVar1 != 0)) {
      (**(code **)(*(int *)(DAT_002c56e8 + 0x32000) + 0x3c))
                (DAT_002c56e8 + *(short *)(*(int *)(DAT_002c56e8 + 0x32000) + 0x38),0,param_2);
    }
    else {
      FUN_00228528(*(undefined4 *)(param_1 + 0x360),100,0xffffffffffffffff);
      *(undefined4 *)(param_1 + 0x360) = 0xffffffff;
    }
  }
  return;
}

