/* Ghidra pseudocode. PS2 address: 001f5db8. Not validated source. */

void FUN_001f5db8(int param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  
  iVar2 = 0;
  param_1 = param_1 + 0x329c0;
  do {
    uStack_4e = (short)((ulong)param_2 >> 0x10);
    bVar1 = false;
    if (uStack_4e == *(short *)(param_1 + 0x92)) {
      uStack_4c._0_2_ = (short)((ulong)param_2 >> 0x20);
      if ((uStack_4e == -1) || ((short)uStack_4c != *(short *)(param_1 + 0x94))) {
        uStack_4c = (int)((ulong)param_2 >> 0x20);
        if (uStack_4c == *(int *)(param_1 + 0x94)) {
          bVar1 = true;
        }
      }
      else {
        bVar1 = true;
      }
    }
    if (bVar1) {
      FUN_001f4ee8(param_1);
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0xa0;
  } while (iVar2 < 0x40);
  return;
}

