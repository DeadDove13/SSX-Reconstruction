/* Ghidra pseudocode. PS2 address: 00205878. Not validated source. */

void FUN_00205878(int param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  
  iVar2 = 0;
  param_1 = param_1 + 0x32170;
  do {
    uStack_4e = (short)((ulong)param_2 >> 0x10);
    bVar1 = false;
    if (uStack_4e == *(short *)(param_1 + 0xe)) {
      uStack_4c._0_2_ = (short)((ulong)param_2 >> 0x20);
      if ((uStack_4e == -1) || ((short)uStack_4c != *(short *)(param_1 + 0x10))) {
        uStack_4c = (int)((ulong)param_2 >> 0x20);
        if (uStack_4c == *(int *)(param_1 + 0x10)) {
          bVar1 = true;
        }
      }
      else {
        bVar1 = true;
      }
    }
    if (bVar1) {
      FUN_002054b0(param_1);
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x2c;
  } while (iVar2 < 0x30);
  return;
}

